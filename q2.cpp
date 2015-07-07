// The program calculates area of arbitrary triangle
#include <iostream>
#include <cmath>
#include <iomanip>  // for setprecision()
using namespace std;

void calcArea( double a, double b, double c,
               double &area, double &perimeter );

int main() {
    
    double a, b, c;
    double area, perimeter;
    
    cout << "Enter side A, side B and side C => ";
    cin  >> a >> b >> c;
    
    calcArea( a, b, c, area, perimeter);
    
    return 0;
}

void calcArea( double a, double b, double c,
              double &area, double &perimeter ) {
    
    bool check3 = false, check2 = false, check1 = false;
    double s; //semiperimeter
    
    if ( b-a < c && c < b+a ) {
        check3 = true;
    }
    if ( c-a < b && b < c+a) {
        check2 = true;
    }
    if ( c-b < a && a < c+b ) {
        check1 = true;
    }
    
    if ( check3 && check2 && check1 ) {
        
        perimeter = a + b + c;
        s = perimeter / 2;
        area = sqrt( s * ( s-a ) * ( s-b ) * ( s-c ) );
        
        cout << "Area of the arbitrary triange is => "
             << fixed << setprecision(2) << area << endl;

    }
    else {
        
        cout << "Impossible triangle " << endl;
    }
}


