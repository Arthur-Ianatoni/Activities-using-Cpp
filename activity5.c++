#include <iostream>

using namespace std;
int main() {
  
    int x,y, reverse, sum;
  
   cout << "Type in two numbers: "<<endl;
   cin >> x>>y;

    if ( x > y){
        reverse= x;
        x=y;
        y=reverse;
    }
     for (int i = x+1; i < y; i++){
         if ( i% 2 != 0) {
             sum = sum + i;
         }
     }
    
    cout << "Sum of the odd numbers: "<< sum;
     
     return 0;
}
