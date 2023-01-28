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
    std::string status;

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

    void checkBookedRoom()
    {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "            Check booked room           " << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
        std::fstream data;
        data.open("room.txt", std::ios::in | std::ios::out);

        if (!data)
        {
            std::cout << "File not exist!!!" << std::endl;
        }
        else
        {
            data >> roomID >> patientID >> startDate >> startDate;
            while (!data.eof())
            {
                std::cout << "|  Room ID: " << roomID << "  |   Patient ID: " << patientID << "  |   Start Date: " << startDate << "  |   End Date: " << startDate << "  |" << std::endl;
                data >> roomID >> patientID >> startDate >> endDate;
            };
        };
        data.close();
    };

    void updateBookingDetails()
    {
        std::string ID;
        bool isFound = false;

        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "           Update booking details          " << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "Enter Room ID: ";
        std::cin >> ID;
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "-------------------------------------------" << std::endl;

        std::fstream data;
        data.open("room.txt", std::ios::in);

        if (!data)
        {
            std::cout << "File not exist!!!" << std::endl;
        }
        else
        {
            std::fstream data1;
            data1.open("room1.txt", std::ios::app | std::ios::out);
            data >> roomID >> patientID >> startDate >> endDate;

            while (!data.eof())
            {
                if (ID == roomID)
                {
                    std::cout << "Enter Room ID: ";
                    std::cin >> roomID;
                    std::cout << "Enter Patient ID: ";
                    std::cin >> patientID;
                    std::cout << "Enter Start Date: ";
                    std::cin >> startDate;
                    std::cout << "Enter End Date: ";
                    std::cin >> endDate;

                    data1 << roomID << " " << patientID << " " << startDate << " " << endDate << "\n";
                    isFound = true;
                }
                else
                {
                    data1 << roomID << " " << patientID << " " << startDate << " " << endDate << "\n";
                }
                data >> roomID >> patientID >> startDate >> endDate;
            }
            data.close();
            data1.close();

            remove("room.txt");
            rename("room1.txt", "room.txt");

            if (!isFound)
            {
                std::cout << "Sorry, There is no record with that ID" << std::endl;
            }
        };
    };

    void cancelBooking()
    {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "               Cancel booking              " << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
    };
};