#include <iostream>

struct User {
    int get_userId(){
        return user_id;
    }

    std::string first_name;
    std::string last_name;
    private:
        int user_id = 69;
};

int main(){
    User user;
    user.first_name = "Josh";
    user.last_name = "Bowles";
    
    std::cout << "First Name: " << user.first_name << std::endl;
    std::cout << "Last Name: " << user.last_name << std::endl;
    std::cout << "User Identifier: " << user.get_userId() << std::endl;

    return 0;
}