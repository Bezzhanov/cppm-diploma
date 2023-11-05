#include "race_sim.h"

Race::Race()
{
    type_sim = 0;
    distance_sim = 0;
    sizeTransport = 0;

    transport = nullptr;

    SetType();
    SetDistance();
}


int Race::GetType()
{
    return type_sim;
}

int Race::GetDistance()
{
    return distance_sim;
}

void Race::Register(bool mess)
{
    int numb = 1;
    while (numb != 0)
    {
        std::string text;

        switch (type_sim)
        {
        case 1:
            text = "\nRace for ground units";
            break;
        case 2:
            text = "\nRace for air units";
            break;
        default:
            text = "\nRace for any types units";
            break;
        }

        std::cout << text << "Distance: " << distance_sim << "\n";

        if (sizeTransport > 0)
        {
            std::cout << "Registred units: ";
            for (size_t i = 0; i < sizeTransport; i++)
            {
                if (i > 0)
                {
                    std::cout << ", ";
                }
                std::cout << GetName(transport[i]);
            }

            std::cout << std::endl;
        }

        std::cout << "1. All-road boots\n2. Broom\n3. Camel\n4. Centaur\n5. Eagle\n6. Camel-SpeedRunner\n7. Magic Carpet\n0. Registration end\nSelect unit or 0 for Registration end: ";
        std::cin >> numb;

        if (numb > 0 && numb < 8)
        {
            if (OneTransport(static_cast<Race::UnitName>(numb)))
            {
                std::cout << "\nThis unit is already registered\n";
            }
            else if (ValidateRegister(static_cast<Race::UnitName>(numb)))
            {
                PushArray(transport, sizeTransport, static_cast<Race::UnitName>(numb));
            }
            else
            {
                std::cout << "\nAttempting to register wrong unit type:\n";
            }
        }
        else if (numb > 7)
        {
            std::cout << "\nIncorrect value\n";
        }
    }
}

size_t Race::GetSize()
{
    return sizeTransport;
}

void Race::Result()
{
    std::cout << "\nRace Results\n";
    SortArray(transport);

    if (sizeTransport > 0)
    {
        for (size_t i = 0; i < sizeTransport; i++)
        {
            std::cout << (i + 1) << ". " << GetName(transport[i]) << ". Время: " << GetTime(transport[i]) << std::endl;
        }
    }
    std::cout << std::endl;
}

void Race::SetType()
{
    std::cout << "1. Race for ground units\n";
    std::cout << "2. Race for air units\n";
    std::cout << "3. Race for any types units\n";
    while (type_sim < 1 || type_sim > 3)
    {
        std::cout << "Select race type: ";
        std::cin >> type_sim;
        if (type_sim < 1 || type_sim > 3)
        {
            std::cout << "Incorrect value\n";
        }
    }
}

void Race::SetDistance()
{
    while (distance_sim < 1)
    {
        std::cout << "\nEnter distance for this race: ";
        std::cin >> distance_sim;
        if (distance_sim < 1)
        {
            std::cout << "Incorrect value\n";
        }
    }
}

bool Race::ValidateRegister(Race::UnitName name)
{
    switch (name)
    {
    case VEHICLE_BOOTS:
    {
        if (type_sim == 1 || type_sim == 3)
        {
            return true;
        }
        return false;
    }
    case BROOM:
    {
        if (type_sim == 2 || type_sim == 3)
        {
            return true;
        }
        return false;
    }
    case CAMEL:
    {
        if (type_sim == 1 || type_sim == 3)
        {
            return true;
        }
        return false;
    }
    case CENTAUR:
    {
        if (type_sim == 1 || type_sim == 3)
        {
            return true;
        }
        return false;
    }
    case EAGLE:
    {
        if (type_sim == 2 || type_sim == 3)
        {
            return true;
        }
        return false;
    }
    case CAMEL_FAST:
    {
        if (type_sim == 1 || type_sim == 3)
        {
            return true;
        }
        return false;
    }
    case MAGIC_CARPET:
    {
        if (type_sim == 2 || type_sim == 3)
        {
            return true;
        }
        return false;
    }
    default:
        return false;
    }
}

bool Race::OneTransport(Race::UnitName name)
{
    if (sizeTransport > 0)
    {
        for (size_t i = 0; i < sizeTransport; i++)
        {
            if (transport[i] == name)
            {
                return true;
            }
        }
    }
    return false;
}

void Race::DelTransp()
{
    delete[] transport;
}

std::string Race::GetName(Race::UnitName name)
{
    switch (name)
    {
    case VEHICLE_BOOTS:
    {
        Boots tr(distance_sim);
        return tr.get_name();
    }
    case BROOM:
    {
        Broom tr(distance_sim);
        return tr.get_name();
    }
    case CAMEL:
    {

        Camel tr(distance_sim);
        return tr.get_name();
    }
    case CENTAUR:
    {
        Centaur tr(distance_sim);
        return tr.get_name();
    }
    case EAGLE:
    {
        Eagle tr(distance_sim);
        return tr.get_name();
    }
    case CAMEL_FAST:
    {
        Camel_fast tr(distance_sim);
        return tr.get_name();
    }
    case MAGIC_CARPET:
    {
        MagicCarpet tr(distance_sim);
        return tr.get_name();
    }
    default:
        break;
    }
    return "";
}

double Race::GetTime(Race::UnitName name)
{
    switch (name)
    {
    case VEHICLE_BOOTS:
    {
        Boots tr(distance_sim);
        return tr.get_time();
    }
    case BROOM:
    {
        Broom tr(distance_sim);
        return tr.get_time();
    }
    case CAMEL:
    {

        Camel tr(distance_sim);
        return tr.get_time();
    }
    case CENTAUR:
    {
        Centaur tr(distance_sim);
        return tr.get_time();
    }
    case EAGLE:
    {
        Eagle tr(distance_sim);
        return tr.get_time();
    }
    case CAMEL_FAST:
    {
        Camel_fast tr(distance_sim);
        return tr.get_time();
    }
    case MAGIC_CARPET:
    {
        MagicCarpet tr(distance_sim);
        return tr.get_time();
    }
    default:
        break;
    }
    return 0;
}

void Race::PushArray(Race::UnitName*& transp, size_t& size, Race::UnitName value)
{
    Race::UnitName* oldTr = new Race::UnitName[sizeTransport + 1];
    if (size > 0)
    {
        for (size_t i = 0; i < size; i++)
        {
            oldTr[i] = transp[i];
        }
    }
    oldTr[size] = value;
    delete[] transp;
    transp = oldTr;
    size++;
}

void Race::SortArray(Race::UnitName*& arr)
{
    for (int i = 0; i < sizeTransport - 1; i++)
    {
        for (int j = 0; j < sizeTransport - i - 1; j++)
        {
            if (GetTime(arr[j]) > GetTime(arr[j + 1]))
            {
                // меняем элементы местами
                Race::UnitName temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
