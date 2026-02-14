#include <iostream>
using namespace std;
int Lowerbound(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int upperBound(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1; 
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        else if( key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 3, 4, 5};
    int index = Lowerbound(arr, 10, 3);
    int index2 = upperBound(arr, 10, 3);
    cout<< "your lower bound index for 3 is --> "<< index<<endl;
    cout << "your Upper bound index for 3 is --> " << index2 << endl;

    return 0;
}