#include <iostream>
using namespace std;

int main()
{
    // data types | variables declaration
    int age = 25;
    age = 26;

    const int rating = 4; // constant variables cannot be mutated/changed

    float weight = 65.5;
    double balance = 123454321.098789;

    char gender = 'm';
    string username = "anujbhai";

    bool isTodaySunday = false;
    bool isTodayRaining = false;

    // Condition
    /*
    if (isTodaySunday && isTodayRaining)
    {
        cout << "Take rest roday" << endl;
    }
    else if (isTodaySunday && !isTodayRaining)
    {
        cout << "Go outside for a walk" << endl;
    }
    else
    {
        cout << "Get some work done" << endl;
    }
    */

    // ternary condition
    //isTodaySunday ? cout << "Take rest today\n" : cout << "Get some work done\n";

    // nested condition
    if (isTodaySunday)
    {
        if (isTodayRaining)
        {
            cout << "Take rest today" << endl;
        }
        else
        {
            cout << "Go outside for a walk" << endl;
        }
    }
    else
    {
        cout << "get some work done" << endl;
    }

    // array
    string colors[10] = {"red", "green", "blue"};

    cout << colors[0];
    cin >> colors[0];
    cout << colors[0];

    system("pause>0");
}
