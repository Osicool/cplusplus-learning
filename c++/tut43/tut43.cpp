#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void playGame(){
    std::cout << "Let's play!" << std::endl;

    int random = rand() % 11;

    while(true){
        int guess;
        std::cout << "Guess a number (0-10): ";
        std::cin >> guess;
        if (guess == random){
            std::cout << "Wooo! You win!" << std::endl;
            break;
        } else {
            std::cout << "Try again!" << std::endl;
        }
    }
}

int main(){
    srand(time(NULL));
    int choice;
    do {
        std::cout << "0) Quit\n1) Play Game" << std::endl;
        std::cout << "Enter your selection: ";
        std::cin >> choice;

        switch(choice){
        case 0:
            std::cout << "Thanks for nothing ):" << std::endl;
            return 0; //End program
        case 1:
            playGame();
            break;
        }
    } while(choice != 0);
}