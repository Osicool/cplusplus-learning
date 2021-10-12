#include <iostream>

void swap(int &a, int &b){ //The & ensures it persists outside the function.
    int temp = a;
    a = b;
    b = temp;

    std::cout << "A: " << a << "\tB:" << b << "\n"; //Variables are swapped.
}

int main(){
    int a = 10;
    int b = 20;

    swap(a, b);

    std::cout << "A: " << a << "\tB:" << b << "\n"; //The swap does persist after the function thanks to the & operator.
    return 0;
}