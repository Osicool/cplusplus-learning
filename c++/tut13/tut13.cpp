#include <iostream>

double power(double base, int exponent){
    double result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    return result;
}

int main(){
    int base, exponent;
    std::cout << "What is the base?" << std::endl;
    std::cin >> base;
    std::cout << "What is the exponent?" << std::endl;
    std::cin >> exponent;
    double myPower = power(base, exponent);
    std::cout << "The answer is " << myPower << std::endl;
}