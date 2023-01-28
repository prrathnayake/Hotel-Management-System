#include <iostream>
#include <iostream>
#include <fstream>

class Room
{
private:
    std::string roomID;
    std::string patientID;
    std::string BookedDate;
    std::string startDate;
    std::string endDate;

public:
    void bookRoom()
    {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "                Book a room                " << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "Enter Room ID: ";
        std::cin >> roomID;
        std::cout << "Enter Patient ID: ";
        std::cin >> patientID;
        std::cout << "Enter Start Date: ";
        std::cin >> startDate;
        std::cout << "Enter End Date: ";
        std::cin >> endDate;
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "-------------------------------------------" << std::endl;

        std::fstream data;

        data.open("room.txt", std::ios::app | std::ios::out);
        data << roomID << " " << patientID << " " << startDate << " " << endDate << "\n";
        data.close();
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