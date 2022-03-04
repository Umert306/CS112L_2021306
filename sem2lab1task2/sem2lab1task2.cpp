#include <iostream>
#include <string>
using namespace std;
struct record {
    string name;
    int age;
    string city;
};
struct dob {
    int date;
    string month;
    int year;
};
int main()
{
    record r[3];
    dob d[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter the record of user number " << i + 1 << endl;
        cout << "Enter Name :";
        cin >> r[i].name;
        cout << "Enter Age :";
        cin >> r[i].age;
        cout << "Enter City :";
        cin >> r[i].city;
        cout << "Enter the Date of birth od user number " << i + 1 << endl;
        cout << "Enter date :";
        cin >> d[i].date;
        cout << "Enter month :";
        cin >> d[i].month;
        cout << "Enter year :";
        cin >> d[i].year;
    }
    /*for (int i = 0; i < 3; i++) {
        cout << "Enter the Date of birth od user number " << i + 1 << endl;
        cout << "Enter date :";
        cin >> d[i].date;
        cout << "Enter month :";
        cin >> d[i].month;
        cout << "Enter year :";
        cin >> d[i].year;
    }*/
    int date, year;
    string month;
    cout << "Enter D.O.B to check :";
    cout << "Enter date :";
    cin >> date;
    cout << "Enter month :";
    cin >> month;
    cout << "Enter year :";
    cin >> year;
    for (int i = 0; i < 3; i++) {
        if ((d[i].date == date) && (d[i].month == month) && (d[i].year == year)) {
            cout << "It is " << r[i].name << "'s birthday today";
        }
    }
}