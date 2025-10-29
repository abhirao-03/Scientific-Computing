#include <cmath>
#include <iostream>

int main(){
	double a;
	double b;
	double c;

	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;

	double discriminant = pow(b, 2.0) - 4*a*c;

	if (discriminant < 0) {
		discriminant = -discriminant;
		double real = -b/(2*a);
		double imagine =  pow(discriminant, (1.0/2.0)) / (2*a);
		if (b == 0){
			std::cout << "The two complex solutions are " << " + i" << imagine << " and " << " - i" << imagine << std::endl;
			} else {
				std::cout << "The two complex solutions are " << real << " + i" << imagine << " and " << real << " - i" << imagine << std::endl;
				}
	} else if (discriminant == 0) {
			double x = -b/(2*a);
			std::cout << "Solution is " << x << std::endl;
	} else {
			double x1 = (-b + pow(discriminant, (1.0/2.0)))/(2*a);
			double x2 = (-b - pow(discriminant, (1.0/2.0)))/(2*a);
			
			std::cout << "Solutions are " << x1 << " and " << x2 << std::endl;
		};

return 0;
};
