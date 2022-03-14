#include <iostream>
#include <string>
using namespace std;
int strlength(string s) {
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}
int chrlength(char arr[]) {
	int i = 0;
	while (arr[i] != '\0')
		i++;
	return i;
}
class stringtype {
private :
	string s1, s2;
public:
	void setvalues(string ss1, string ss2) {
		s1 = ss1;
		s2 = ss2;
	}
	void printvalues() {
		cout << "String 1 : ";
		cout << s1 << endl;
		cout << "String 2: ";
		cout << s2 << endl;
	}
	int maxlen() {
		int i = 0;
		while (s1[i] != '\0')
			i++;
		int j = 0;
		while (s2[j] != '\0')
			j++;
		if (i > j) 
			return i;
		else
			return j;
	}
	int compare(/*string s1, string s2*/) {
		if ((strlength(s1) > strlength(s2)) || (strlength(s1) < strlength(s2)))
			return 0;
		for (int i = 0; i < strlength(s2); i++) {
			if (s1[i] != s2[i])
				return 0;
		}
		return 1;
	}
	void copy() {
		for (int i = 0; i < (strlength(s2) + 1); i++)
			s1[i] = s2[i];
	}
	string concatinate() {
	/*	int j = 0;
		for (int i = (strlength(s1)); s2[j] != '\0'; i++) {
			s1[i] = s2[j];
			j++;
		}*/
		return s1+s2;
	}
	int searchword(string word) {
		for (int i = 0; s1[i] != '\0'; i++) {
			if (word[0] == s1[i]) {
				if (strlength(word) == 1)
					return 1;
				for (int k = 0; k < strlength(word); k++) {
					if (word[k] != s1[i + k])
						break;
					if (k == (strlength(word) - 1))
						return 1;
				}
			}
		}
		return 0;
	}
	int searchchar(char chr) {
		for (int i = 0; i < strlength(s1); i++) {
			if (s1[i] == chr)
				return 1;
		}
		return 0;
	}
};
int main() {

	cout << "1. setvalues()" << endl;
	cout << "2. printvalues()" << endl;
	cout << "3. maxlen()" << endl;
	cout << "4. compare()" << endl;
	cout << "5. copy()" << endl;
	cout << "6. concatinate()" << endl;
	cout << "7. searchword()" << endl;
	cout << "8. searchchar()" << endl;
	cout << "9. exit()" << endl;
	stringtype s;
	while (true) {
		int choice;
		cout << "Enter an option : ";
		cin >> choice;
		if (choice == 9)
			break;
		else {
			switch (choice) {
			case 1: {
				string ss1, ss2;
				cout << "Enter string 1 and string 2:";
				cin.ignore();
				getline(cin, ss1);
				getline(cin, ss2);
				s.setvalues(ss1, ss2);
				break;
			}
			case 2: {
				s.printvalues();
				break;
			}
			case 3: {
				cout << "Maximum length is : " << s.maxlen() << endl;
				break;
			}
			case 4: {
				if (s.compare())
					cout << "The strings are same " << endl;
				else
					cout << "Strings are not same" << endl;
				break;
			}
			case 5: {
				s.copy();
				break;
			}
			case 6: {
				cout << "S1 has now become : " << s.concatinate() << endl;
				break;
			}
			case 7: {
				cout << "Enter word : ";
				string word;
				cin.ignore();
				cin >> word;
				if (s.searchword(word))
					cout << "Word found" << endl;
				else
					cout << "Word not found" << endl;
				break;
			}
			case 8: {
				cout << "Enter character : ";
				char chr;
				cin >> chr;
				if (s.searchchar(chr))
					cout << "Character found " << endl;
				else
					cout << "Character not found" << endl;
				break; }
			}
		}
	}
	return 0;
}