/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:03 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/15 20:28:03 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


		double GetExchangeRate();
		double GetValue();
		std::tm GetDate();
		std::string GetError();
		bool isBetween(std::tm date, std::tm start, std::tm end);

};