#include <array>
#include <iostream>

std::tuple<double, double, double, double, double, double, double, double, double>
unpackMatrix(const std::array<std::array<double, 3>, 3>& matrix){
    const std::array<double, 3>& row_1 = matrix[0];
    const std::array<double, 3>& row_2 = matrix[1];
    const std::array<double, 3>& row_3 = matrix[2];

    const auto& [a, b, c] = std::tie(row_1[0], row_1[1], row_1[2]);
    const auto& [d, e, f] = std::tie(row_2[0], row_2[1], row_2[2]);
    const auto& [g, h, i] = std::tie(row_3[0], row_3[1], row_3[2]);

    return {a, b, c, d, e, f, g, h, i};
}

double calcDeterminant(const std::array<std::array<double, 3>, 3>& matrix){
    const auto& [a, b, c, d, e, f, g, h, i] = unpackMatrix(matrix);
    double determinant = a*(e*i - f*h) - b*(d*i - f*g) + c*(d*h - e*g);
    return determinant;
}

double calcTrace(const std::array<std::array<double, 3>, 3>& matrix){
    const auto& [a, b, c, d, e, f, g, h, i] = unpackMatrix(matrix);
    return a + e + i;
}

int main(){
    // unit test
    std::array<std::array<double, 3>, 3> matrix = {{{1.0, 0.0, 0.0},
                                                  {0.0, 1.0, 0.0},
                                                  {0.0, 0.0, 1.0}}};
    double determinant = calcDeterminant(matrix);
    double trace = calcTrace(matrix);

    std::cout << "Determinant: " << determinant << std::endl;
    std::cout << "Trace: " << trace << std::endl;

    return 0;
}