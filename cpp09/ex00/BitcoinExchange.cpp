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


void BitcoinExchange::SetValue(double value){this->Value = value;}
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
    Date.tm_mon = month - 1; // months since January (0-11)
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
		if (!std::difftime(std::mktime(&Date), std::mktime(&time1)))
		{
			if(Error.empty()) {
				if (Value < 0)
					SetError("Error: not a positive number.");
				else if (Value >= 2147483648)
					SetError("Error: too large a number.");
				else {
					ExchangeRate = B[i].GetValue();
				}
			}
		}
		else
		{
			 if (isBetween(Date, time1, time2))
			 {
				if(Error.empty()) {
				// rate_of_change = (exchange_rate_2011_01_04 - exchange_rate_2011_01_01) / 3
				// exchange_rate_2011_01_03 = exchange_rate_2011_01_01 + rate_of_change * 2
					if (Value < 0)
						SetError("Error: not a positive number.");
					else if (Value >= 2147483648)
						SetError("Error: too large a number.");
					else {
						double RateOfChange = (B[i + 1].GetValue() - B[i].GetValue()) / 3;
						ExchangeRate = Value * (B[i].GetValue() + RateOfChange * 2);
					}
				}
			}

		}
	}
}

