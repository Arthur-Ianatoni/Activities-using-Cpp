#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Write C++ code here
   
   string name1, name2;
   int age1, age2;
   double average;
     cout << " Information of the first person:  " << endl;
     
     cout << " Name: " ;
    getline (cin, name1);
     cout << " Age: ";
    cin >> age1;
    
    cout << " Input the information for person 2"<<endl;
    
    cout << " Name: " ;
    cin.ignore(INT_MAX, '\n');
    getline (cin, name2);
    
    cout << " Age: ";
    cin >> age2;
    
    average = (age1 + age2) / 2.00;
    
    cout << " The avarage number between " << name1 << " and "<< name2 << " is: " << average << " years old"<< endl;
   
    return 0;
}
