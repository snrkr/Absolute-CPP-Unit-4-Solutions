//This program tests a function to compute the difference between
//  a start and end time, at most 24 hours apart, using military
//  notation.  The difference is returned in minutes.

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

// Function prototypes
int TimeDifference(int start, int end);

// --------------------------------
// ----- ENTER YOUR CODE HERE -----
// --------------------------------

// ======================
// TimeDifference
// Takes a start and end time, at most 24 hours apart,
// and returns the time difference in minutes.  Times
// are input using military time notation.
// ======================
int TimeDifference(int start, int end)
{
    int startMins, endMins;
    
    // Convert start and end time into total minutes elapsed since midnight.
    // Get the first two digits (hours elapsed) and multiply by 60.
    // Add in the last two digits (minutes).
    startMins = ((start / 100) * 60) + (start % 100);
    endMins = ((end / 100) * 60) + (end % 100);
    
    // If the end time is greater than the start time, just
    // return the difference
    if (endMins >= startMins)
    {
        return (endMins - startMins);
    }
    // If the end time is smaller than the start time, then
    // the time difference goes to midnight (60 mins/hour * 24 hours) and
    // ends the following day
    else
    {
        return ((60*24-startMins) + endMins);
    }
}

// --------------------------------
// --------- END USER CODE --------
// --------------------------------


// ======================
//     main function
// ======================
int main()
{
    cout << "The time difference between 0000 and 2359 is " <<
    TimeDifference(0,2359) << " minutes." << endl;
    cout << "The time difference between 2359 and 0001 is " <<
    TimeDifference(2359,1) << " minutes." << endl;
    cout << "The time difference between 2010 and 1000 is " <<
    TimeDifference(2010,1000) << " minutes." << endl;
    cout << "The time difference between 0300 and 1500 is " <<
    TimeDifference(300,1500) << " minutes." << endl;

    return 0;
}
