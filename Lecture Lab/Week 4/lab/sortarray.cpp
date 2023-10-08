// Bubble sort in C++
#include <iostream>
using namespace std;
int main()
{
    system("cls");

    int i, j, temp;
    int arr_size = 5;
    int arr[arr_size] = { 12, 3, 1, 5,45};

    cout << "Unordered array : \n";
    for(i=0; i<arr_size; i++)
    {
        cout << arr[i] << " \t";
    }
    
    cout << endl;

    for(i=0; i<arr_size; i++)
    {
        for(j=0; j<arr_size; j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted Elements: \n";
    for(i=0; i<arr_size; i++)
    {
        cout<< arr[i] << " \t";
    }
    cout << endl;

    return 0;
}

