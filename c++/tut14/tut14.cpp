#include <iostream>

double power(double base, int exponent){
    double result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    return result;
}

int base, exponent;

void questions(){
    std::cout << "What is the base?" << std::endl;
    std::cin >> base;
    std::cout << "What is the exponent?" << std::endl;
    std::cin >> exponent;
}

int main(){
    questions();
    double myPower = power(base, exponent);
    std::cout << "Your result is " << myPower << std::endl;
}