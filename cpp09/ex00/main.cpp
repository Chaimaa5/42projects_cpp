/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:28:11 by cel-mhan          #+#    #+#             */
/*   Updated: 2023/03/15 21:00:00 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::vector<BitcoinExchange> input_parser(std::string input, std::vector<BitcoinExchange> data){
	std::ifstream ifs(input);
	std::string line;
	size_t sep;
	std::vector<BitcoinExchange> B;
	if (ifs.is_open()){
		while (getline(ifs, line)){
			line.erase(remove_if(line.begin(), line.end(), isspace), line.end());
			sep = line.find('|');
			if (line != "date|value"){
				BitcoinExchange bitcoin;
				if (sep == 10)
				{
					bitcoin.SetDate(line.substr(0, sep));
					std::string value = (line.substr(sep + 1, std::string::npos)).c_str();
					if  (value.find_first_not_of("0123456789.-+") && !value.empty())
						bitcoin.SetValue(atof((line.substr(sep + 1, std::string::npos)).c_str()));
					else
						bitcoin.SetError("Error not a digit");
					bitcoin.SetExchangeRate(data);
					B.push_back(bitcoin);
				}
				else{
					std::string error = "Error: bad input => ";
					error.append(line);
					bitcoin.SetError(error);
					B.push_back(bitcoin);
				}
			}
		}
	}
	return (B);
}

std::vector<BitcoinExchange> database_parser(){
	std::string file = "data.csv";
	std::ifstream ifs(file);
	std::string line;
	size_t sep;
	std::vector<BitcoinExchange> B;
	if (ifs.is_open()){
		while (getline(ifs, line)){
			line.erase(remove_if(line.begin(), line.end(), isspace), line.end());
			sep = line.find(',');
			if (sep == 10)
			{
				BitcoinExchange bitcoin;
				bitcoin.SetDate(line.substr(0, sep));
				bitcoin.SetValue(atof((line.substr(sep + 1, std::string::npos)).c_str()));
				B.push_back(bitcoin);
			}
		}
	}
	return B;
}

void	Output(std::vector<BitcoinExchange> B){
	for (size_t i = 0; i < B.size(); i++)
	{
		std::string Error = B[i].GetError();
		std::tm Date =  B[i].GetDate();
		char str[20];
		std::strftime(str, sizeof(str), "%Y-%m-%d ", &Date);
		if (!Error.empty())
			std::cout << Error << std::endl;
		else
			std::cout << str << " => " << B[i].GetValue() << " = "<< B[i].GetExchangeRate() << std::endl;
	}
}
	
int main(int ar, char **av){
	if (ar == 2){
		std::string file = av[1];
		std::vector<BitcoinExchange> B = database_parser();
		std::vector<BitcoinExchange> output = input_parser(file, B);
		if (!output.empty())
			Output(B);
		else
			std::cout << "Error: File is corrupted.\n";
	}
	else 
		std::cout << "Error: could not open file.\n";
}