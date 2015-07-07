// Fraction simplifier
#include <iostream>

using namespace std;

int gcd( int a, int b );
bool simplifier( int& numerator, int& denominator );

int main() {
    
    int numerator, denominator;
    
    cout << "Enter numerator => ";
    cin  >> numerator;
    cout << "Enter denominator => ";
    cin  >> denominator;
    
    cout << numerator << " / " << denominator << " = ";
    
    if ( simplifier( numerator, denominator) ) {
        
        cout << numerator << " / " << denominator << endl;
    }
    else
        cout << "Denominator cannot be 0\n";
    
    return 0;
}

int gcd(int a, int b) {
    
    return b == 0 ? a : gcd(b, a % b);
}

bool simplifier( int& numerator, int& denominator ) {
    
    if ( denominator == 0 ) return false;
    
    int gcdResult;
    
    gcdResult = gcd ( numerator, denominator );
    
    numerator /= gcdResult;
    denominator /= gcdResult;
    return true;
}