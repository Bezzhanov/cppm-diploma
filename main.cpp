#include <iostream>
#include "race_sim.h"

int main() {
    setlocale(LC_ALL, ".UTF-8");
    std::cout << "Welcome to the Racing Simulator!\n";
    bool start = true;
    while (start)
    {

        Race race;
        while (race.GetSize() < 2)
        {
            int numb = 0;
            while (numb != 1)
            {
                std::cout << "\n2 or more objects must be registered\n1. Register units\nChoose an action: ";
                std::cin >> numb;
            }

            race.Register();
            numb = 0;

            while (numb != 2)
            {
                std::cout << "\n1. Register units\n2. Start Race\nChoose an action: ";
                std::cin >> numb;
                if (numb == 1)
                {
                    race.Register();
                }
            }

            race.Result();
            numb = 0;
            while (!(numb == 2 || numb == 1))
            {
                std::cout << "\n1. Start another race\n2. Выйти\nChoose an action: ";
                std::cin >> numb;
                if (numb == 2)
                {
                    start = false;
                }

            }
            std::cout << "\n\n";
        }
    }

    return 0;
}