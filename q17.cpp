#include <iostream>

using namespace std;

void swap ( int& a, int& b );
void sort ( int& a, int& b, int& c );

int main() {
    
    int num1, num2, num3;
    
    cout << "Enter first number => ";
    cin  >> num1;
    cout << "Enter second number => ";
    cin  >> num2;
    cout << "Enter third number => ";
    cin  >> num3;
    
    cout << endl,
    cout << "Before sorting numbers\n" << num1
         << " " << num2 << " " << num3 << endl;
    
    sort( num1, num2, num3 );
    
    cout << "After sorting numbers\n" << num1
    << " " << num2 << " " << num3 << endl;
    
    return 0;
}

void swap ( int& a, int& b ) {
    
    int temp = a;
    a = b;
    b = temp;
}
void sort ( int& a, int& b, int& c ) {
    
    if (a > b)
        swap(a, b);
    
    if (a > c)
        swap(a, c);
    
    if (b > c)
        swap(b, c);
}