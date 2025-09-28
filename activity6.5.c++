#include <iostream>
#include <iomanip>
#include <limits>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "How many people will be typed in? ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> names(n);
    vector<int> age(n);
    vector<double> height(n);

    for (int i = 0; i < n; i++) {
        cout << "\nType in the information for person " << i + 1 << ":\n";

        cout << "Name: ";
        getline(cin, names[i]);

        cout << "Age: ";
        cin >> age[i];

        cout << "Height: ";
        cin >> height[i];
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // descarta o \n
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += height[i];
    }
    double average = sum / n;
    cout << fixed << setprecision(2);
    cout << "\nAverage height: " << average << endl;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (age[i] < 16) count++;
    }
    double percentage = count * 100.0 / n;
    cout << fixed << setprecision(1);
    cout << "Person(s) below 16 years old: " << percentage << "%\n";

    for (int i = 0; i < n; i++) {
        if (age[i] < 16) {
            cout << names[i] << endl;
        }
    }

    return 0;
}
