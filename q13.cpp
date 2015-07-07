#include <iostream>
#include <cstdlib>

using namespace std;

double ConvertToMPH ( int paceInMin, int paceInSec );
double ConvertToMPH ( double kph );

int main()
{
    
    double paceInMin;
    double paceInSec;
    double kph;
    
    cout << "Please enter your pace in minutes: ";
    cin  >> paceInMin;
    cout << "Please enter your pace in seconds: ";
    cin  >> paceInSec;
    cout << "Your pace in MPH is: "
         << ConvertToMPH (paceInMin, paceInSec) << endl;
    
    cout << "Please enter your speed in KPH: ";
    cin  >> kph;
    cout << "Your KPH pace in MPH is: " << ConvertToMPH (kph);
    
    return 0;
}

double ConvertToMPH( int paceInMin, int paceInSec )
{
    return 60 / (paceInMin + static_cast<double>(paceInSec) / 60);
}

double ConvertToMPH( double kph )
{
    return kph / 1.61;
}