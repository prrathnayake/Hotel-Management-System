#include <iostream>

void bookRoom()
{
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "                Book a room                " << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

void checkAvailableRoom()
{
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "            Check available room           " << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

void updateBookingDetails()
{
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "           Update booking details          " << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

void cancelBooking()
{
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "               Cancel booking              " << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

void showMainMene()
{
    int option;
retry:
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "                 Main Menu                 " << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "1) Book a room" << std::endl;
    std::cout << "2) Check available room" << std::endl;
    std::cout << "3) Update booking details" << std::endl;
    std::cout << "4) Cancel booking" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please select an option.........." << std::endl;
    std::cout << "Your option: ";
    std::cin >> option;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    switch (option)
    {
    case 1:
        bookRoom();
        break;
    case 2:
        checkAvailableRoom();
        break;
    case 3:
        updateBookingDetails();
        break;
    case 4:
        cancelBooking();
        break;
    default:
        std::cout << "-------------------------------------------" << std::endl;
        std::cerr << "          Please select a valid option     " << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
        break;
    }

    goto retry;
}

int main()
{
    showMainMene();
};