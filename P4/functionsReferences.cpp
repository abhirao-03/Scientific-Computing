#include <cmath>
#include <iostream>

int sum(const int& a, const int& b){
    return a + b;
}

void decrease(int& a, const int& b){
    a -= b;
}

int q(const double& a, const double& b, const double& c, double& x1, double& x2){
    double discriminant = pow(b, 2.0) - 4*a*c;

    if (discriminant < 0){
        x1 = 0.0;
        x2 = 0.0;
        return 0;
    } else if (discriminant == 0){
        x1 = -b/(2*a);
        x2 = 0.0;
        return 1;
    } else {
        x1 = (-b + pow(discriminant, 0.5))/(2*a);
        x2 = (-b - pow(discriminant, 0.5))/(2*a);
        return 2;
    }
}

int main(){
    double x1;
    double x2;
    std::cout << "There are " << q(3, 0, 1, x1, x2) << " solutions: " << x1 << ' ' << x2 << std::endl;
}