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
				bitcoin.SetValue(atof((line.substr(sep + 1, std::string::npos)).c_str()));
				bitcoin.SetExchangeRate(data);
				B.push_back(bitcoin);
			}
			// else{
			// 	BitcoinExchange bitcoin;
			// 	bitcoin.SetDate(line.substr(0, sep));
			// 	bitcoin.SetValue();
			// 	B.push_back(bitcoin);
			// }
		}
	}
	// for (size_t i = 0; i != B.size(); i++)
		// std::cout << B[i].GetDate() << " " << B[i].GetValue() << std::endl;
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
	// for (size_t i = 0; i != B.size(); i++)
		// std::cout << B[i].GetDate() << " " << B[i].GetValue() << std::endl;
}

int main(int ar, char **av){
	if (ar == 2){
		std::string file = av[1];
		std::vector<BitcoinExchange> B = database_parser();
		input_parser(file, B);
	}
}