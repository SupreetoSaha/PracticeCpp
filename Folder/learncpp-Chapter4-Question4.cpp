/*
	"https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/"
	"Question #4"
*/

#include <iostream>

double displacement(double h,double t) {
	constexpr double g {9.80665};
	double result {h-g*t*t/2};
	if(result<0) {
		result = 0;
	}
	return result;
}

void learncppChapter4Question4() {
	double height;
	std::cout<<"\nEnter height (m): ";
	std::cin>>height;
	std::cout<<"\nAt time=0, height="<<displacement(height,0);
	std::cout<<"\nAt time=1, height="<<displacement(height,1);
	std::cout<<"\nAt time=2, height="<<displacement(height,2);
	std::cout<<"\nAt time=3, height="<<displacement(height,3);
	std::cout<<"\nAt time=4, height="<<displacement(height,4);
	std::cout<<"\nAt time=5, height="<<displacement(height,5);
	std::cout<<std::endl;
}
