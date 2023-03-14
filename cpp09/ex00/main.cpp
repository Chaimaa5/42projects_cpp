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
			if (sep == 10)
			{
				BitcoinExchange bitcoin;
				bitcoin.SetDate(line.substr(0, sep));
				std::string value = (line.substr(sep + 1, std::string::npos)).c_str();
				if (value.length() >= 10)
					bitcoin.SetError("Error: too large a number.");
				else if (!value.find('-'))
					bitcoin.SetError("Error: not a positive number.");
				else
					bitcoin.SetValue(atof((line.substr(sep + 1, std::string::npos)).c_str()));
				bitcoin.SetExchangeRate(data);
				B.push_back(bitcoin);
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
		if (!Error.empty())
			std::cout << Error << std::endl;
		else
		{
			// std::cout.precision(2);
			std::tm Date =  B[i].GetDate();
			char str[20];
			std::strftime(str, sizeof(str), "%Y-%m-%d ", &Date);
			std::cout << str << " => " << B[i].GetValue() << " = "<< B[i].GetExchangeRate() << std::endl;
		}
	}
}
	
int main(int ar, char **av){
	if (ar == 2){
		std::string file = av[1];
		std::vector<BitcoinExchange> B = database_parser();
		std::vector<BitcoinExchange> output = input_parser(file, B);
		Output(output);
	}
}