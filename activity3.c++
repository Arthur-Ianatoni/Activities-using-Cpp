#include <iostream>

using namespace std;

int main() {
    // Write C++ code here

int a, b, c, smallest;
 cout  << "===Input and compare the values!==="<< endl;
 
cout << " First value: ";
cin >> a;
cout << " Second value: ";
cin >> b;
cout << " Third value: ";
cin >> c;


if ( a < b && a < c) {
    smallest = a;
}
else if ( b < a && b < c){
    smallest = b;
}
else smallest = c;

cout << " The smallest value is: " << smallest<< endl;
    return 0;
}
