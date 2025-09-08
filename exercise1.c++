#include <bits/stdc++.h>

using namespace std;

int main() {
    double wage1,wage2;
    string name1, name2;
    int age1;
    char gender;
   
   
   cout <<" First person name: ";
   getline(cin,name1);
   cout <<"First person wage: ";
   cin >> wage1;
   cin.ignore(INT_MAX, '\n'); // used to clean the enter, that is, whenever I jump to the second person's name, it will ask normally; otherwise, it would create a mistake by reading the second person's name as "enter= \n."
  
   cout <<" second person name: ";
    getline(cin,name2);
    cout <<"Second peron wage: ";
   cin >> wage2;
   
   cout << "input your age: "; 
    cin >> age1; 
    cout << "input your gender (F/M): "; 
    cin >> gender; 
    
    cout << fixed << setprecision(2); 
    cout << "Name 1: " << name1 << endl; 
    cout << "Wage 1: " << wage1 << endl; 
    cout << "Name 2: " << name2 << endl; 
    cout << "Wage 2: " << wage2 << endl; 
    cout << "age: " << age1 << endl; 
    cout << "your gender: " << gender << endl;
   
    return 0;
    
}
