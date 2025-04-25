#include <iostream>
using namespace std;

int main()
{
    int currentYear, birthYear, age;
    cout << "Enter the current year: ";
    cin >> currentYear;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    age = currentYear - birthYear;
    cout << "You are " << age << " years old." << endl;

    return 0;
}

