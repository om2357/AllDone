#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {2, 4, 6, 9, 10};
    int arr2[] = {3, 4, 5, 7, 9, 11, 21};

    int m = 5;
    int n = 7;

    int result[m + n];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n)
    {
        if(arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            result[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i < m)
    {
        result[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n)
    {
        result[k] = arr2[j];
        k++;
        j++;
    }

    cout<<"Your Answer is -> "<<endl;
    for(int i = 0; i < (m+n); i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}