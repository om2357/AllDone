#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) /2;
    }
    return - 1;
}
int main()
{
    int arr[10] = {2, 3, 5, 6, 7, 8, 8 , 12,12, 42};
    int key;
    cout<<"please enter your key--> "<<endl;
    cin>> key;

    cout << "your index value of key is --> " << binarySearch(arr, key, 10);  

}