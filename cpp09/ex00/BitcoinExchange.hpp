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
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange & B);
		BitcoinExchange & operator=(const BitcoinExchange & B);
		// void parser(std::string input);
		
		void SetValue(double);
		void SetDate(std::string);
		void SetExchangeRate(std::vector<BitcoinExchange> B);

		double GetValue();
		std::tm GetDate();

		bool isBetween(std::tm date, std::tm start, std::tm end);

};