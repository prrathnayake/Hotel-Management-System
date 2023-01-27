#include <iostream>
#include "room.cpp"

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

    Room *room;
    room = new Room;

    switch (option)
    {
    case 1:
        room->bookRoom();
        break;
    case 2:
        room->checkAvailableRoom();
        break;
    case 3:
        room->updateBookingDetails();
        break;
    case 4:
        room->cancelBooking();
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