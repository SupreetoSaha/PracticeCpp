/*
	"https://www.learncpp.com/cpp-tutorial/5-3-modulus-and-exponentiation/"
	"Question #2"
*/

#include <iostream>

bool isEven(const int n) {
	return n%2==0;
}

void learncppChapter5_3Question2() {
	std::cout<<std::endl<<"\nCheck Even\n";
	int n;
	std::cout<<"\nEnter an integer: ";
	std::cin>>n;
	std::cout<<n<<" is "<<(isEven(n)?"Even":"Odd")<<'\n';
}
