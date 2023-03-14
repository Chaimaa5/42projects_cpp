#include "BitcoinExchange.hpp"

void input_parser(std::string input, std::vector<BitcoinExchange> data){
	std::ifstream ifs(input);
	std::string line;
	size_t sep;
	std::vector<BitcoinExchange> B;
	if (ifs.is_open()){
		while (getline(ifs, line)){
			line.erase(remove_if(line.begin(), line.end(), isspace), line.end());
			sep = line.find('|');
			if (sep == 10)
			{
				BitcoinExchange bitcoin;
				bitcoin.SetDate(line.substr(0, sep));
				std::string value = (line.substr(sep + 1, std::string::npos)).c_str();
				if (value.length() >= 10)
					bitcoin.SetError("Error: too large a number.\n");
				else if (!value.find('-'))
					bitcoin.SetError("Error: not a positive number.\n");
				else
					bitcoin.SetValue(atof((line.substr(sep + 1, std::string::npos)).c_str()));
				bitcoin.SetExchangeRate(data);
				B.push_back(bitcoin);
			}
		}
	}
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

int main(int ar, char **av){
	if (ar == 2){
		std::string file = av[1];
		std::vector<BitcoinExchange> B = database_parser();
		input_parser(file, B);
	}
}