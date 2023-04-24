// Work is panding because of variable is not converted to Array

#include <iostream>
using namespace std;
int main()
{
    int arrOne, arrTwo;
    cout << "Enter the size of arr1 -> " << endl;
    cin >> arrOne;
    cout << "Enter the size of arr2 -> " << endl;
    cin >> arrTwo;
    int arr1[10];
    int arr2[10];
    int result [arrOne + arrTwo];
    cout << "Enter the sorted element forr Array 1 -> " << endl;
    for (int i = 0; i < arrOne; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the sorted element forr Array 2 -> " << endl;
    for (int i = 0; i < arrTwo; i++)
    {
        cin >> arr2[i];
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < arrOne && j < arrTwo)
    {
        if (arr1[i] < arr2[j])
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
    while(i < arrOne)
    {
        result[k] = arr1[i];
        k++;
        i++;
        
    }
    while(j < arrTwo)
    {
        result[k] = arr2[j];
        k++;
        j++;
        
    }
    cout<<"Your Result is -> "<<endl;
    for(int i = 0; i < (arrOne+arrTwo); i++)
    {
        cout<<result[i]<<" ";
    }
    

    return 0;
}