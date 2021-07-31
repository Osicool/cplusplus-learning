#include <iostream>

int main(){
    std::cout << "How old are you?" << std::endl;
    int age;
    std::cin >> age;
    if(age < 13){
        std::cout << "You're not old enough!" << std::endl;
    } else {
        std::cout << "You're old enough!" << std::endl;
    }
    return 0;
}