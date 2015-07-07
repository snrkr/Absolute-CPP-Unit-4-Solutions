// Conversation feet to meters
#include <iostream>
#include <iomanip>

using namespace std;

void input( double& feet, double& inch );
void doConversation( double& feet, double& inch );
void putOnScreen( double meter, double centimeter );

int main()
{
    double feet, inch;
    
    input( feet, inch );
    doConversation( feet, inch );
    putOnScreen( feet, inch);
    
    return 0;
    
}

void input( double& feet, double& inch ) {

    cout << "Enter feet => ";
    cin  >> feet;
    cout << "Enter inch => ";
    cin  >> inch;
}

void doConversation( double& feet, double& inch ) {
    
    const double meter = 0.3048; // 0.3048 meters in a foot
    const int cm       = 12;     // 12 inches in a foot
    
    feet *= meter;
    inch *= ((meter / cm) * 100); // 2.54 cm in an inch
    
}

void putOnScreen( double meter, double centimeter ) {
    
    cout << fixed << setprecision(2) << meter << " meters "
         << fixed << setprecision(2) << centimeter << " inches\n";
}
