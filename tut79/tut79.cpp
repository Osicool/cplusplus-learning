#include <iostream>

template <typename T>
void swap(T &a, T &b){ //The & ensures it persists outside the function.
    T temp = a;
    a = b;
    b = temp;

    // std::cout << "A: " << a << "\tB:" << b << "\n"; Variables are swapped.
}

int main(){
    int a = 10;
    int b = 20;

    swap(a, b);

    std::cout << "A: " << a << "\tB:" << b << "\n"; //The swap does persist after the function thanks to the & operator.

    std::string firstName = "Joshy";
    std::string lastName = "Woshyy";
    swap(firstName, lastName);
    std::cout << firstName << " " << lastName << std::endl;
    return 0;
}