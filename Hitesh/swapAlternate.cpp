#include <iostream>
using namespace std;
void swapAlternat(int arr[], int size)
{
    for (int i = 0; i < size; i +=2)
    {
        if (i + 1 < size)
        {
            // swap(arr[i], arr[i + 1]);
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int size;
    int arr[10];
    cout << "Enter the size Of array --> ";
    cin >> size;
    cout << "Enter the value of array --> ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    swapAlternat(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    return 0;
}