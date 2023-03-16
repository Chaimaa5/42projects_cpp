/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:00 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/16 18:13:44 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	// Date = {0};
}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange & B){
	*this = B;
}
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & B){
	this->Value = B.Value;
	this->Date = B.Date;
	this->ExchangeRate = B.ExchangeRate;
	this->Error = B.Error;
	return (*this);
}


void BitcoinExchange::SetValue(std::string value){
	char *endptr;
	float x = strtod(value.c_str(), &endptr);
	if (*endptr != '\0')
		SetError("Error: string with invalid characters");
	else
		this->Value = x;
	
}
void BitcoinExchange::SetError(std::string error){ this->Error = error;}
void BitcoinExchange::SetDate(std::string date){
	size_t sep = date.find('-');
	int year = atoi((date.substr(0, sep)).c_str());
	int save = sep;
	sep++;
	sep = date.find( '-', sep);
	int month = atoi((date.substr(save + 1,sep )).c_str());
	int day = atoi((date.substr(sep + 1, std::string::npos )).c_str());
	if (day < 0 || day > 31 || month < 0 || month > 12)
		SetError("Error: bad input");
	Date.tm_isdst = 0;
    Date.tm_year = year - 1900; // years since 1900
    Date.tm_mon = month - 1 ; // months since January (0-11)
    Date.tm_mday = day ; // day of the month (1-31)
	Date.tm_hour = 0;
    std::mktime(&Date); // normalize the structure
}

float BitcoinExchange::GetValue(){return Value;}
float BitcoinExchange::GetExchangeRate(){return ExchangeRate;}
std::tm BitcoinExchange::GetDate(){return Date;}
std::string BitcoinExchange::GetError(){return Error;}
bool BitcoinExchange::isBetween(std::tm date, std::tm start, std::tm end) {
    return (std::difftime(std::mktime(&date), std::mktime(&start)) >= 0 && std::difftime(std::mktime(&end), std::mktime(&date)) >= 0);
}
void BitcoinExchange::SetExchangeRate(std::vector<BitcoinExchange> B){
	for (size_t i = 0; i < B.size(); i++)
	{
		std::tm time1 = B[i].GetDate();
		std::tm time2 = B[i + 1].GetDate();
		if (!std::difftime(std::mktime(&Date), std::mktime(&time1)) || isBetween(Date, time1, time2))
		{
			if(Error.empty()) {
				if (Value < 0)
					SetError("Error: not a positive number.");
				else if (Value >= 1000)
					SetError("Error: too large number.");
				else {
					ExchangeRate = B[i].GetValue() * Value;
				}
			}
		}
	}
}

