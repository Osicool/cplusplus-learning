#include <iostream>

class User {
    int user_id = 69;

    public:
        std::string first_name;
        std::string last_name;
        int get_userId(){
            return user_id;
        }
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