#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string info, university, competition;
public:
    
    friend class Coordinator;
};
class Coordinator {
public:
    Person p1, p2;
    void setter1() {
        cout << "Enter Competition and University : ";
        cin.ignore(0);
        getline(cin, p1.info);
        int i = 0;
        for (; p1.info[i] != ' '; i++) {
            p1.university += p1.info[i];
        }
        i++;
        for (; p1.info[i] != '\0'; i++) {
            p1.competition += p1.info[i];
        }
    }
    void setter2() {
        cout << "Enter Competition and University : ";
        cin.ignore(0);
        getline(cin, p2.info);
        int i = 0;
        for (; p2.info[i] != ' '; i++) {
            p2.university += p2.info[i];
        }
        i++;
        for (; p2.info[i] != '\0'; i++) {
            p2.competition += p2.info[i];
        }
    }
    int length(string competition) {
        int i = 0;
        for (; competition[i] != '\0'; i++){}
        return i;
    }
    int RoomNo(){
        if ((length(p1.competition)) < (length(p2.competition)))
            return length(p2.competition);
        else
            return length(p1.competition);
    }
    void RoomAllot() {
        if (p1.university == p2.university)
            cout << "Person 1 and Person 2 are room-mates. Room # " << RoomNo() << endl;
        else
            cout << "Person 1 and Person 2 are not room-mates. " << endl;
    }
};
int main()
{
    Coordinator c1;
    //while (true) {
         c1.setter1();
         c1.setter2();
         c1.RoomAllot();
    
   
    return 0;
}