#include <iostream>
using namespace std;

int binary(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

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
            end = (mid - 1);
        }
        mid = (start + end)/2;
    }
    return -1;
}
int main()
{
    int odd[6] = {3, 4, 6, 8, 9, 11};
    int index = binary(odd, 6, 11);
    cout<< "Index of binary --> " <<index<<endl;
}