#include <cmath>
#include <iostream>

double dt = 0.001;

double f(const double& y, const double& t){
	return pow(y, (1.0/2.0));
};

double k1(const double& y, const double& t){
    return f(y, t);
};

double k2(const double& y, const double& t){
    double spatial  = y + k1(y, t)*dt;
    double temporal = t + dt;

    return f(spatial, temporal);
};

int main(){
    double time_horizon = 10.0;
    int num_time_steps = time_horizon/dt;
    double y0 = 1.0;
    
    std::vector<double> y_vec(num_time_steps + 1);
    y_vec[0] = y0;

    for (int i = 0; i < num_time_steps; i++){
        double y_val = y_vec.at(i);
        double t_val = i*dt;

        double k1_val = k1(y_val, t_val);
        double k2_val = k2(y_val, t_val);

        double y_new = y_val + (1.0/2.0) * dt * (k1_val + k2_val);
        y_vec[i+1] = y_new;

        std::cout << t_val + dt << ' ' << y_new << std::endl;
    };

    return 0;
}