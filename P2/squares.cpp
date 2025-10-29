#include <cmath>
#include <iostream>

int main(){
	int max_square;
	std::cout << "Please enter the maximum square: ";
	std::cin >> max_square;

	for (int i = 0; i <= max_square; i++){
		std::cout << i << ' ' << pow(i, 2.0) << std::endl;
	};
return 0;
}
