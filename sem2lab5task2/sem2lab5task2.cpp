#include <iostream>
using namespace std;
class parity {
private :
	int size;
	int* arr;
public:
	parity(int num = 1) {
		size = num;
		arr = new int[size];
		for (int i = 0; i < size; i++)
			arr[i] = i;
	}
	void put(int num) { 
		size += 1;
		arr[size - 1] = num;
	}
	void print() {
		for (int i = 0; i < size; i++)
			cout << arr[i] << " | ";
		cout << endl;
	}
	void del () {
		if (size != 1) {
			size--;
			int* temp = new int[size];
			for (int i = 0; i < size; i++) {
				temp[i] = arr[i];
			}
			for (int i = 0; i < size; i++) {
				arr[i] = temp[i];
			}
		}
		else {
			cout << "only one elemmento left" << endl;
			return;
		}
	}
	int test() {
		if (size % 2 == 0)
			return 1;
		else
			return 0;
	}
	
};
int main()
{
	cout << "add size" << endl;
	int temp;
	cin >> temp;
	parity p(temp);
	cout << "1. put()" << endl;
	cout << "2. print()" << endl;
	cout << "3. delete()" << endl;
	cout << "4. test()" << endl;
	cout << "5. exit()" << endl;
	while (true) {
		int choice;
		cout << "Enter an option : ";
		cin >> choice;
		if (choice == 5)
			break;
		else {
			switch (choice) {
			case 1:
				cout << "Enter number to add to the array : ";
				int num;
				cin >> num;
				p.put(num);
				break;
			case 2:
				p.print();
				break;
			case 3:
				p.del();
				break;
			case 4:
				if (p.test())
					cout << "TRUE" << endl;
				else
					cout << "FALSE" << endl;
			}
		}
	}
	return 0;
}