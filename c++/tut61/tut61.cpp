#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::ifstream file("daddy");

    std::vector<std::string> names;

    std::string input;
    while(file >> input){
        names.push_back(input);
    } // return file

    for(std::string name : names){
        std::cout << name << std::endl;
    }
    return 0;
}