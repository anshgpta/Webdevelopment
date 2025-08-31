
#include <iostream>
using namespace std;
int main() {
    int arr[5];

    cout << "ENTER 5 values" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Min value is: " << min << endl;
    cout << "Max value is: " << max;

    return 0;
}
