#include<iostream>
using namespace std;
int main()
{
    int arr1[]= {2, 5, 6, 7};
    int arr2[]= {3, 5, 5, 7, 8};
    int Arr1 = 4;
    int Arr2 = 5;

    int size [Arr1 +  Arr2];

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < Arr1 && j < Arr2)
    {
        if(arr1[i] < arr2[j])
        {
            size[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            size[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < Arr1)
    { 
        size[k] = arr1[i];
        k++;
        i++;
    }
    while(j<Arr2)
    {
        size[k] = arr2[j];
        k++;
        j++;
    }
    cout<<"Your Answer is -> "<<endl;
    for(int i = 0; i< (Arr1+Arr2); i++)
    {
        cout<<size[i]<<" ";
    }
    


    return 0;
}