// Conversation feet to meters
#include <iostream>
#include <iomanip>

using namespace std;

void input( int& option, double& feet, double& inch );
void doConversation( int option, double& feet, double& inch );
void putOnScreen( int option, double meter, double centimeter );

int main()
{
    double feet, inch;
    int option;
    char answer;
    
    do {
        
        input( option, feet, inch );
        doConversation( option, feet, inch );
        putOnScreen( option, feet, inch);
        cout << "Wish to continue ? Y or N => ";
        cin  >> answer;
        
    } while ( answer == 'Y' || answer == 'y' );
    
    return 0;
    
}

void input( int &option, double& feet, double& inch ) {

    cout << "Press 1 for feet to meter "
         << "or 2 for meter to feet => ";
    cin  >> option;
    
    if ( option == 1 ) {
        
        cout << "Enter feet => ";
        cin  >> feet;
        cout << "Enter inch => ";
        cin  >> inch;
    }
    else if ( option == 2 ) {
        
        cout << "Enter meter => ";
        cin  >> feet;
        cout << "Enter centimeter => ";
        cin  >> inch;
    }
    else
        cout << "Wrong selection\n";
    
}

void doConversation( int option, double& feet, double& inch ) {
    
    const double meter = 0.3048; // 0.3048 meters in a foot
    const int cm       = 12;     // 12 inches in a foot
    //  1m == 100cm, 1in == 2.54cm, 1ft == 12in
    
    if ( option == 1 ) {

        feet *= meter;
        inch *= ((meter / cm) * 100); // 2.54 cm in an inch
    }
    else {
        
        feet /=  meter;
        inch /= ((meter / cm) * 100);
    }
    
}

void putOnScreen( int option, double meter, double centimeter ) {
    
    if ( option == 1 ) {
        
        cout << fixed << setprecision(2) << meter << " meters "
             << fixed << setprecision(2) << centimeter << " centimeters\n";
    }
    else {
        
        cout << fixed << setprecision(2) << meter << " feet "
             << fixed << setprecision(2) << centimeter << " inches\n";
    }
}
