#include <iostream>
using namespace std;

void sorter(float arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    float arr[15];

    for (int i = 0; i < 15; i++) {
        cout << "Enter float value: ";
        cin >> arr[i];
    }

    sorter(arr, 15);

    cout << "Sorted values: ";
    for (int i = 0; i < 15; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}

