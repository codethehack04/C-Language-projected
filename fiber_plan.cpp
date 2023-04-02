#include <iostream>
using namespace std;
int func()
{
    int mbps_speed_choice, months, mbps_speed, price;
    cout << "\t\t\t\t 1.200 mbps speed" << endl;
    cout << "\t\t\t\t 2.100 mbps speed" << endl;
    cout << "\t\t\t\t 3. 80 mbps speed" << endl;
    cout << "\t\t\t\t 4.60 mbps speed" << endl;
    cout << "Enter your MBPS Speed:-" << endl;
    cin >> mbps_speed_choice;
    switch (mbps_speed_choice)
    {
    case 1:
        if (mbps_speed_choice == 1)
        {
            cout << "Your prize is $ 699 /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }
        cout << "Enter your month:-";
        cin >> months;
        price = months * 699;
        cout << "Then your total GTPL plans price " << price;
        break;

    case 2:
        if (mbps_speed_choice == 2)
        {
            cout << "Your prize is $ 494 /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }

        cout << "Enter your month:-";
        cin >> months;
        price = months * 494;
        cout << "Then your total GTPL plans price " << price;

        break;

    case 3:
        if (mbps_speed_choice == 3)
        {
            cout << "Your prize is $ 449 /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }

        cout << "Enter your month:-";
        cin >> months;
        price = months * 449;
        cout << "Then your total GTPL plans price " << price;

        break;

    case 4:
        if (mbps_speed_choice == 4)
        {
            cout << "Your prize is $ 450 /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }
        cout << "Enter your month:-";
        cin >> months;
        price = months * 450;
        cout << "Then your total GTPL plans price :-" << price <<endl;

        break;

    default:
        break;
    }
}

int func1()
{
    int mbps_speed_choice, months, mbps_speed, price;
    cout << "\t\t\t\t 1.Unlimited @300 Mbps + PRIME VEDIO + NETFLIX" << endl;
    cout << "\t\t\t\t 2.Unlimited @100 Mbps" << endl;
    cout << "\t\t\t\t 3. Unlimited @150 Mbps+DISNIP+PRIME VEDIO" << endl;
    cout << "\t\t\t\t 4.Unlimited @30 Mbps " << endl;
    cout << "Enter your MBPS Speed:-" << endl;
    cin >> mbps_speed_choice;
    switch (mbps_speed_choice)
    {
    case 1:
        if (mbps_speed_choice == 1)
        {
            cout << "Your prize is $ 1499 with Scribtion /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }
        cout << "Enter your month:-";
        cin >> months;
        price = months * 1499;
        cout << "Then your total JIO plans price " << price;
        break;

    case 2:
        if (mbps_speed_choice == 2)
        {
            cout << "Your prize is $ 699  /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }

        cout << "Enter your month:-";
        cin >> months;
        price = months * 699;
        cout << "Then your total GTPL plans price " << price;

        break;

    case 3:
        if (mbps_speed_choice == 3)
        {
            cout << "Your prize is $ 999 /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }

        cout << "Enter your month:-";
        cin >> months;
        price = months * 999;
        cout << "Then your total Jio plans price " << price;

        break;

    case 4:
        if (mbps_speed_choice == 4)
        {
            cout << "Your prize is $ 399 /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }
        cout << "Enter your month:-";
        cin >> months;
        price = months * 399;
        cout << "Then your total Jio  plans price " << price << endl;

        break;

    default:
        break;
    }
}

int func2()
{
    int mbps_speed_choice, months, mbps_speed, price;
    cout << "\t\t\t\t 1.Unlimited 300 Mbps " << endl;
    cout << "\t\t\t\t 2.Unlimited 100 Mbps" << endl;
    cout << "\t\t\t\t 3. Unlimited 150 Mbps" << endl;
    cout << "\t\t\t\t 4.Unlimited 30 Mbps " << endl;
    cout << "Enter your MBPS Speed:-" << endl;
    cin >> mbps_speed_choice;
    switch (mbps_speed_choice)
    {
    case 1:
        if (mbps_speed_choice == 1)
        {
            cout << "Your prize is $ 2077 90 day   /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }
        cout << "Enter your month:-";
        cin >> months;
        price = months * 2077;
        cout << "Then your total Airtel Xtream  Fiber price " << price;
        break;

    case 2:
        if (mbps_speed_choice == 2)
        {
            cout << "Your prize is $ 800 60 day   /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }

        cout << "Enter your month:-";
        cin >> months;
        price = months * 800;
        cout << "Then your total Airtel Xtream  Fiber price " << price;

        break;

    case 3:
        if (mbps_speed_choice == 3)
        {
            cout << "Your prize is $ 777 per 30 day /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }

        cout << "Enter your month:-";
        cin >> months;
        price = months * 777;
        cout << "Then your total Airtel Xtream  Fiber plans price " << price;

        break;

    case 4:
        if (mbps_speed_choice == 4)
        {
            cout << "Your prize is $ 399 /-" << endl;
        }
        else
        {
            cout << "your typing speed is not found" << endl;
        }
        cout << "Enter your month:-";
        cin >> months;
        price = months * 399;
        cout << "Then your total  Airtel Xtream  Fiber plans price " << price << endl;

        break;

    default:
        break;
    }
}

int main()
{
    for (int i = 0; i < 3; i++)
    {

        int choice, months, mbps_speed, prize, T_prize;
        cout << "\n\t\t\t================== Welcome My Fiber=================" << endl;
        cout << "\t\t\t\t 1.GTPL Fiber" << endl;
        cout << "\t\t\t\t 2.JIO Fiber" << endl;
        cout << "\t\t\t\t 3.Airtel Xtream Fiber" << endl;

        cout << "\t\t\tEnter you Fiber Name:-";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\t\t\t===================  GTPL Fiber  =====================" << endl;
            func();
            break;

        case 2:
            cout << "\t\t\t===================  JIO Fiber  =====================" << endl;
            func1();
            break;
        case 3:
            cout << "\t\t\t===================  Airtel Xtream  Fiber  =====================" << endl;
            func2();
            break;

        default:
            cout << "Thank you for visiting backend website of fiber plans" << endl;
            break;
        }
    }
    return 0;
}