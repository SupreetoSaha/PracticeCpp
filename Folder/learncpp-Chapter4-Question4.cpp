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
	std::cout<<std::endl<<"\nDrop Physics\n";
	double height;
	std::cout<<"\nEnter height (m): ";
	std::cin>>height;
	std::cout<<"\nAt time = 0s,\theight = "<<displacement(height,0)<<'m';
	std::cout<<"\nAt time = 1s,\theight = "<<displacement(height,1)<<'m';
	std::cout<<"\nAt time = 2s,\theight = "<<displacement(height,2)<<'m';
	std::cout<<"\nAt time = 3s,\theight = "<<displacement(height,3)<<'m';
	std::cout<<"\nAt time = 4s,\theight = "<<displacement(height,4)<<'m';
	std::cout<<"\nAt time = 5s,\theight = "<<displacement(height,5)<<'m';
	std::cout<<'\n';
}
