#include <iostream>
#include <cmath>

int main() {
    float x, y;

    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;

    float R = 1 / cos((y * y) / x);

    float S = cbrt(x + log(1 / x));

    std::cout << "R = " << R << std::endl;
    std::cout << "S = " << S << std::endl;

    float C = std::max(R, S);

    std::cout << "C = " << C << std::endl;

    std::cout << "..";
    std::cin.ignore();
    std::cin.get();

    return 0;
}