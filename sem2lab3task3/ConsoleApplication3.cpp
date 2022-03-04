#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter The Size Of The Array : ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter elements of array : " << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Entered Array : " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " | ";
    int* arr2 = new int[size];
    for (int i = 0; i < size; i++)
        arr2[i] = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            for (int j = 0; j < size; j++) {
                if (arr2[j] == 0) {
                    arr2[j] = arr[i];
                    break;
                }
            }
        }
    }
    int vacant;
    for (int i = 0; i < size; i++) {
        if (arr2[i] == 0) {
            vacant = i;
            break;
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            for (int j = vacant; j < size; j++) {
                if (arr2[j] == 0) {
                    arr2[j] = arr[i];
                    break;
                }
            }
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++)
        cout << arr2[i] << " | ";
}

