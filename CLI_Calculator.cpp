#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;	


int main()
{
	std::string input;
	std::cout << "Enter your first number: " << std::endl;
	std::getline(std::cin, input);
	double num1 = std::stod(input);
	do {
		std::cout << "Enter an operator (+, -, *, /) or 'quit' to exit: " << std::endl;
		std::getline(std::cin, input);
		if (input == "quit") {
			break;
		}
		char op = input[0];
		std::cout << "Enter your second number: " << std::endl;
		std::getline(std::cin, input);
		double num2 = std::stod(input);
		double result;
		switch (op) {
			case '+':
				result = num1 + num2;
				break;
			case '-':
				result = num1 - num2;
				break;
			case '*':
				result = num1 * num2;
				break;
			case '/':
				if (num2 != 0) {
					result = num1 / num2;
				} else {
					std::cout << "Error: Division by zero!" << std::endl;
					continue;
				}
				break;
			default:
				std::cout << "Invalid operator!" << std::endl;
				continue;
		}
		std::cout << "Result: " << result << std::endl;
		num1 = result; // Update num1 for the next operation
	} while (true);

}