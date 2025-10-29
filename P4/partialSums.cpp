#include <iostream>
#include <array>

void compute_partial_sums(const std::array<double, 20>& in_vec, std::array<double, 20>& out_vec){
    double running_sum = 0;
    for (size_t i = 0; i < in_vec.size(); i++){
        running_sum += in_vec[i];
        out_vec[i] = running_sum;
        std::cout << running_sum << std::endl;
    }
}

int main(){
    std::array<double, 20> inside_vec;
    for (int i = 0; i < 20; i++){
        inside_vec[i] = i;
    }
    std::array<double, 20> outside_vec;
    compute_partial_sums(inside_vec, outside_vec);
    return 0;
}