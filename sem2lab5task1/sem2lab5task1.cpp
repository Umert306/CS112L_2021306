#include <iostream>
using namespace std;
class heater {
private :
	int temp;
public:
	heater() {
		temp = 15;
		cout << "Temperature = " << temp << endl;
	}
	void cool() {
		temp -= 5;
	}
	void hot() {
		temp += 5;
	}
	void accessor() {
		cout << "Current temp is " << temp << endl;
	}
	~ heater() {
	}
};
int main() {
	cout << "1. Cooler" << endl;
	cout << "2. Warmer" << endl;
	cout << "3. Currrent temperature" << endl;
	cout << "4. Exit" << endl;
	heater h;
	while (true) {
		int choice;
		cout << "Enter an option : ";
		cin >> choice;
		if (choice == 4) 
			break;
		else {
			switch (choice) {
			case 1:
				h.cool();
				break;
			case 2:
				h.hot();
				break;
			case 3:
				h.accessor();
				break;
			}
		}
	}
	return 0;
}