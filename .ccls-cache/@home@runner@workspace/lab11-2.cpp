//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by Rhett Acosta on 4/15/2025

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototypes
double getAverage(double times[], int numElements);
double getLowest(double times[], int numElements);

int main()
{
    //declare variables
    double finishTimes[5] = {0.0};
    double avgTime = 0.0;
    double lowestTime = 0.0;

    //get the finish times from the user
    for (int x = 0; x < 5; x += 1)
        {
            cout << "Enter the finish time for race " << x + 1 << ": ";
            cin >> finishTimes[x];
        }

    avgTime = getAverage(finishTimes, 5);
    lowestTime = getLowest(finishTimes, 5);

    //display the average and lowest time
    cout << fixed << setprecision(1) << endl;
    cout << "The average time is: " << avgTime << endl;
    cout << "The lowest time is: " << lowestTime << endl;
    
    return 0;
}//end of main function    

//function definitions
double getAverage(double times[], int numElements)
{
    double total = 0.0;

    for (int x = 0; x < numElements; x += 1)
        total += times[x];

    return total / numElements;
}

double getLowest(double times[], int numElements)
{
    double lowest = times[0];
    for (int x = 1; x < numElements; x += 1)
        if (times[x] < lowest)
            lowest = times[x];
    return lowest;
}