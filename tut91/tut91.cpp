#include <iostream>

class User {
    int user_id = 69;
    static int user_count;

    public:
        std::string first_name;
        std::string last_name;

        int get_userId(){
            return user_id;
        }
        void set_userId(int userId){
            this->user_id = user_id;
        }

        static int get_user_count(){
            return user_count;
        }

        User(){
            std::cout << "Constructor" << std::endl;
            user_count++;
        }

        User(std::string first_name, std::string last_name, int user_id){
            this->first_name = first_name;
            this->last_name = last_name;
            this->user_id = user_id;
            user_count++;
        }
};

int User::user_count = 0;

int main(){
    User user("Josh", "Bowles", 21);
    std::cout << "First Name: " << user.first_name << "\tLast Name: " << user.last_name << "\tUser Identifer: " << user.get_userId() << std::endl;
    std::cout << User::get_user_count() << std::endl;
}