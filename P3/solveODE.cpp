#include <cmath>
#include <iostream>
#include <vector>


double f(const double& y, const double& t){
	return pow(y, (1.0/2.0));
};

int main(){
	
	double y0 = 1.0;
	std::vector<double> y_vec;
	y_vec.push_back(y0);
	
	double time_horizon = 10.0;
	double dt = 0.001;
	double num_time_steps = time_horizon / dt;

	
	
	for (int i = 0; i <= num_time_steps; i++){
		double t = i*dt;
		double y_new = y_vec.at(i) + dt*f(y_vec.at(i), t);
		y_vec.push_back(y_new);
		std::cout << t << ' ' << y_new << std::endl;
	};

return 0;
}

