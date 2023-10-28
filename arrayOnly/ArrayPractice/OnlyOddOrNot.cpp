#include <iostream>
using namespace std;

bool containsOnlyOddNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<size<<endl;

    if (containsOnlyOddNumbers(arr, size)) {
        cout << "The array contains only odd numbers" << endl;
    } else {
        cout << "The array does not contain only odd numbers" << endl;
    }

    return 0;
}
