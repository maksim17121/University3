#include <iostream>
#include <cmath>

int main() {
    float x, y;

    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;

    float R = 1.0 / cos((y * y) / x);

    float S = pow(x + log(1 / x), 1 / 3);

    std::cout << "R = " << R << std::endl;
    std::cout << "S = " << S << std::endl;

    float C = (R > S) ? R : S;

    std::cout << "C = " << C << std::endl;

    return 0;
}