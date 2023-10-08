#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, elem, pos, arr_size;
    cout<<"Enter the Size for Array: ";
    cin>>arr_size;
    cout<<"Enter "<<arr_size<<" Array Elements: ";
    for(i=0; i<arr_size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    cout<<"At What Position ? ";
    cin>>pos;

    for(i=arr_size; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[i] = elem;
    arr_size++;
    
    cout<<"\nThe New Array is:\n";
    for(i=0; i<arr_size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}

