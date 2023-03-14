#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <ctime>
class BitcoinExchange{
	private:
		double Value;
		double ExchangeRate;
		std::tm Date;
		std::string Error;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange & B);
		BitcoinExchange & operator=(const BitcoinExchange & B);
		// void parser(std::string input);
		
		void SetValue(double);
		void SetDate(std::string);
		void SetExchangeRate(std::vector<BitcoinExchange> B);
		void SetError(std::string);


		double GetValue();
		std::tm GetDate();
		std::string GetError();
		bool isBetween(std::tm date, std::tm start, std::tm end);

};