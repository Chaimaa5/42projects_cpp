/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:03 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/16 18:14:42 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <ctime>
class BitcoinExchange{
	private:
		float Value;
		float ExchangeRate;
		std::tm Date;
		std::string Error;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange & B);
		BitcoinExchange & operator=(const BitcoinExchange & B);
		// void parser(std::string input);
		
		void SetValue(std::string);
		void SetDate(std::string);
		void SetExchangeRate(std::vector<BitcoinExchange> B);
		void SetError(std::string);


		float GetExchangeRate();
		float GetValue();
		std::tm GetDate();
		std::string GetError();
		bool isBetween(std::tm date, std::tm start, std::tm end);

};