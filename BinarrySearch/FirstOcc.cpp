#include <iostream>
using namespace std;

int firstLast(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;

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
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
        
    }
    return ans;
    
}
int last(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/ 2;
    int lastocc = -1;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            lastocc = mid;
            start = mid + 1;
        }
        else if(key > arr[mid])
        {
            start  = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;

    }
    return lastocc;
}
int main()
{
    int occurrence[9] = {2, 4, 4, 4, 4, 4, 4, 5, 6};
    int key;
    cout<<"please enter the key --> ";
    cin>>key;
    cout <<"your first occurrence of key index at -->" <<firstLast(occurrence, 9, key)<<endl;
    cout<<"your last occurrence of key index at --> "<< last(occurrence, 9, key)<<endl;
    return 0;
}