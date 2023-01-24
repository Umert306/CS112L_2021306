#include <iostream>
using namespace std;
class Officer
{
private:
    int id;
    string name, rank;

public:
    static int count;
    void setter()
    {
        cout << "Enter Officer ID : ";
        cin >> id;
        cout << "Enter Officer Name : ";
        cin >> name;
        cout << "Enter Officer Rank : ";
        cin >> rank;
    }
    void palindromecheck()
    {
        int a, b, pal = 0;
        b = id;
        do
        {
            a = b % 10;
            pal = (pal * 10) + a;
            b = b / 10;
        } while (b != 0);
        // cout << "Comparing " << pal << " with " << id;
        if (pal != id)
        {
            cout << "Officer Allowed to Enter Area !" << endl;
            count++;
        }
        else
            cout << "Entry Denied !" << endl;
    }
};
int Officer::count;
int main()
{
    int choice;
    Officer o1;
    while (true)
    {
        cout << "1. Enter ID of Officer" << endl;
        cout << "2. Get total Number of Officers" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;
        if (choice == 3)
            break;
        if ((choice > 3) || (choice < 1))
        {
            cout << "Wrong choice entered" << endl;
            continue;
        }
        switch (choice)
        {
        case 1:
        {
            o1.setter();
            o1.palindromecheck();
            break;
        }
        case 2:
        {
            cout << "Officers Entered : " << o1.count << endl;
            break;
        }
        }
    }
    return 0;
}