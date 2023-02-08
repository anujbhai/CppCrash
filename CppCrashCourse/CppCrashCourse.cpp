#include <iostream>
using namespace std;

// ---------- enums ----------
//enum EyeColor {Brown, Blue, Green, Gray, Hazel, Other};

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

    //cout << colors[0];
    //cin >> colors[0];
    //cout << colors[0];

    // ----------- Switch case ----------
    //EyeColor eyeColor = Brown;

 //   switch (99)
 //   {
	//case Brown: cout << "80% of people have Brown eyes." << endl;
	//	break;

 //   case Blue: cout << "10% of people have Blue eyes." << endl;
	//	break;

 //   case Green: cout << "2% of people have Green eyes." << endl;
	//	break;

 //   case Gray: cout << "1% of people have Gray eyes." << endl;
	//	break;

 //   case Other: cout << "7% of people have Other eyes." << endl;
	//	break;
 //   default: cout << "Not a valid eye color" << endl;
    //}

    // ---------- Loops ----------
    cout << "WHILE:\n";
    int counter = 1;
    while (counter <= 10) {
        //cout << counter << endl;
        counter++;
    }

    cout << "DO-WHILE:\n";
    int doWhileCounter = 1;
    while (doWhileCounter <= 10) {
        //cout << doWhileCounter << endl;
        doWhileCounter++;
    }

    string animals[5] = { "cat", "dog", "cow", "goat", "bee" };

    for (int i = 0; i < 5; i++) {
        cout << animals[i] << endl;
    }

    system("pause>0");
}
