#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = (size - 1);
    int mid = (start + end) / 2;
    for(int i = 0; i < size; i++)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else if(arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
    
}
int main()
{

    int arr[] = {2, 4, 6, 8, 12, 21};
    int even[] = {2, 5, 7, 9, 21, 44, 54, 57};
    int key = 21;
    int index = binarySearch(arr, 6, 21);
    cout<<"index of 21 is : " <<index<<endl;

    int evenIndex = binarySearch(even, 8, 21);
    cout<<"index of 21 is : " <<evenIndex;


    return 0;
}