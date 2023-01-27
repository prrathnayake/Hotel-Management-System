#include <iostream>

class Room
{
public:
    void bookRoom()
    {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "                Book a room                " << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
    };

    void checkAvailableRoom()
    {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "            Check available room           " << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
    };

    void updateBookingDetails()
    {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "           Update booking details          " << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
    };

    void cancelBooking()
    {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "               Cancel booking              " << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
    };
};