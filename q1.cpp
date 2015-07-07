// The program converts 24-hours to 12-hours
#include <iostream>
using namespace std;

void inputVal( int &hour, int &minute );
void doConversation( int &hour );
void putOnScreen( int hour, int minute, char unit );

int main() {
    
    int hour, minute;
    char unit;
    
    cout << "Enter time of hour and minute => ";
    inputVal( hour, minute );
    doConversation( hour );
    cout << "Enter unit of the time => ";
    cin >> unit;
    putOnScreen( hour, minute, unit);
    
    return 0;
}

void inputVal( int &hour, int &minute ) {
    
    cin >> hour >> minute;
}
void doConversation( int &hour ) {
    
    if ( hour != 12 ) {
        hour %= 12;
    }
    else
        hour = 12;
}
void putOnScreen( int hour, int minute, char unit ) {
    
    switch ( unit ) {
        case 'A':
            cout << "The time is => " << hour << ":"
            << minute << " " << "AM" << endl;
            break;
            
        case 'P':
            cout << "The time is => " << hour << ":"
            << minute << " " << "PM" << endl;
            break;
            
        default:
            cout << "Wrong unit\n";
            break;
    }
}


