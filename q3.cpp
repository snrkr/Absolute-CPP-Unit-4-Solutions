// Conversation cents to admitted money units in US
#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;

void computeCoin(int coinValue, int& number, int& amountLeft);

int main()
{
    static int inChange [] = { 25, 10, 1 };
    string szChange [] = { " Quarters", " Dimes", " Pennies" };
    int inNumber, inLeft;
    
    cout << "Enter amount of money (1-99)--->: ";
    cin >> inLeft;
    cout << "-------------------------------------" << endl;
    
    for ( int i = 0; i < 3; i++ ) {
        computeCoin( inChange[i], inNumber, inLeft );
        if ( inNumber ) cout << inNumber << szChange[i] << endl;
    }
    return 0;
    
}

void computeCoin(int coinValue, int& number, int& amountLeft) {
    
    assert( (0 < coinValue && coinValue < 100)
            && (0 <= amountLeft && amountLeft < 100) );
    
    number = amountLeft / coinValue;
    if ( number ) amountLeft = amountLeft % coinValue;
}