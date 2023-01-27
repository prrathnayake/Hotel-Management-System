#include <iostream>

void showMainMene(){
    int option;

    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "                 Main Menu                 " << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "1) Book a room"<< std::endl;
    std::cout << "2) Check available room"<< std::endl;
    std::cout << "3) Update booking details"<< std::endl;
    std::cout << "4) Cancel booking"<< std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please select an option.........." << std::endl;
    std::cout << "Your option: ";
    std::cin >> option;

    switch (option){
        case 1:
            std::cout << "-------------------------------------------" << std::endl;
            std::cout << "                Book a room                " << std::endl;
            std::cout << "-------------------------------------------" << std::endl;
            break;
        case 2:
            std::cout << "-------------------------------------------" << std::endl;
            std::cout << "            Check available room           " << std::endl;
            std::cout << "-------------------------------------------" << std::endl;
            break;
        case 3:
            std::cout << "-------------------------------------------" << std::endl;
            std::cout << "           Update booking details           " << std::endl;
            std::cout << "-------------------------------------------" << std::endl;
            break;
        case 4:
            std::cout << "-------------------------------------------" << std::endl;
            std::cout << "               Cancel booking              " << std::endl;
            std::cout << "-------------------------------------------" << std::endl;
            break;
        default:
            std::cout << "-------------------------------------------" << std::endl;
            std::cerr << "          Please select a valid option     " << std::endl;
            std::cout << "-------------------------------------------" << std::endl;
            break;

    }

}

int main() {
    showMainMene();
}; 