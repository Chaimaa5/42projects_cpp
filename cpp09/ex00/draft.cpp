/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:06 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/15 20:28:06 by cel-mhan         ###   ########.fr       */
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


void BitcoinExchange::SetValue(double value){
	if (value > 0 && value < 1000)
		this->Value = value;
	if (value >= 1000)
		SetError("Error: too large a number.");
	else if (value < 0)
		SetError("Error: not a positive number.");
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

double BitcoinExchange::GetValue(){return Value;}
double BitcoinExchange::GetExchangeRate(){return ExchangeRate;}
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
			if(Error.empty()) 
				ExchangeRate = Value * B[i].GetValue();
		}
	}
}

