#include <iostream>

template <typename T>
void swap(T &a, T &b){ //The & ensures it persists outside the function.
    T temp = a;
    a = b;
    b = temp;

    // std::cout << "A: " << a << "\tB:" << b << "\n"; Variables are swapped.
}

template <typename T>
void swap(T a[], T b[], int size){
    for(int i = 0; i < size; i++){
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
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

    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};

    for(int i = 0; i < 6; i++){
        std::cout << nines[i] << " " << ones[i] << "\t";
    }

    std::cout << std::endl;
    swap(nines, ones, 6);

    for(int i = 0; i < 6; i++){
        std::cout << nines[i] << " " << ones[i] << "\t";
    }

    std::cout << std::endl;

    return 0;
}