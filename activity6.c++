#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;
int main() 
{

int n, i, count;
    
   cout << " How many people will be typed in? "<< endl;
 cin>> n;

string names[n];
int age[n];
double height[n];

 for ( int i = 0; i < n ; i++){
     cout << " Type in the information for person  "<<i + 1<<endl; 
    
     cout << " Name: ";
     cin.ignore(INT_MAX, '\n');
     getline(cin,names[i]);
     
     cout << " Age: ";
     cin >> age[i];
     
     cout << " Height: ";
     cin >> height[i];
    
     
 }
 
 double sum = 0.0;
for (int i = 0; i < n; i++) {
    sum += height[i];
}
double average = sum / n;
 cout << fixed << setprecision(2);
 cout << " Average height: "<< average << endl;
 
 count = 0;

for (int i= 0; i < n; i++) {
    if (age[i] < 16) {
        count++;
    }
}
double percentage = count * 100.0/n;
cout << fixed << setprecision(1);
cout << " Person(s) below 16 years old: " << percentage << "%"<<endl;


 for ( int i = 0; i < n ; i++){
     if (age[i] < 16) {
     cout << names[i]; 
 }}
return 0;

}
