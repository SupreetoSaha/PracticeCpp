/*
	"https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/"
	"Question #3"
*/

#include <iostream>

double inputDouble() {
	double number {0};
	std::cout<<"\nEnter a number: ";
	std::cin>>number;
	return number;
}

char inputOperation() {
	char operation {0};
	std::cout<<"\nOperations: + - * /\nEnter an operation: ";
	std::cin>>operation;
	return operation;
}

double calculate(const double a,const double b,const char operation) {
	switch(operation) {
		case '+': return a+b;
		case '-': return a-b;
		case '*': return a*b;
		case '/': return a/b;
		default: return NAN;
	}
}
void learncppChapter4Question3() {
	double number1 {inputDouble()};
	double number2 {inputDouble()};
	char operation {inputOperation()};
	double answer {calculate(number1,number2,operation)};
	std::cout<<'\n'<<number1<<' '<<operation<<' '<<number2<<" = "<<answer<<'\n';
}
