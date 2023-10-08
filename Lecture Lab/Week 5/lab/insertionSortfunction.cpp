// Insertion Sort: C++ program
#include <bits/stdc++.h>
using namespace std;
// Function to sort an array using: insertion sort
void insertionSort(int arr[], int arr_size)
{
    int i, key, j;
    for (i = 1; i < arr_size; i++)
    {
        key = arr[i];
        j = i - 1;
        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Fuction to display array
void printArray(int arr[], int arr_size)
{
    int i;
    for (i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    system("cls");
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"The Original array:"<< endl;
    printArray(arr, n);

    cout<<"The order array after apply insertion approach:"<< endl;
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}


