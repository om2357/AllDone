#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {2, 3, 4, 4};
    int size = 4;

    int k = 2;
    int i = 0;
    int j = size - 1;
    bool found = false;
    while(i<j)
    {
        if(arr1[i] + arr1[j] == k)
        {
            found = true;
            break;
        }
        else if(arr1[i] + arr1[j] < k)
        {
            i++;
        }
        else 
        {
            j++;
        }
    }

    if(found == true )
    {
        cout<<"Your value is found (Yes) "<<endl;
    }
    else
    {
        cout<<"Your value is not found (NO) "<<endl;
    }
    return 0;
}