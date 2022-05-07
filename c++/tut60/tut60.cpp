#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::cout << "Please enter a filename:" << std::endl;

    std::string filename;
    std::cin >> filename;

    std::ofstream file (filename, std::ios::app);

    if(file.is_open()){
        std::cout << "success loollllll" << std::endl;
    }

    std::vector<std::string> names;
    names.push_back("Josh");
    names.push_back("Benjamin");
    names.push_back("Harvey");

    for(std::string name : names){
        file << name << std::endl;
    }

    file.close();
    return 0;
}