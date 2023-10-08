#include<iostream>
using namespace std;
int main()
{
    int arr[10], arr_size=7, i, elem, j, found=0;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<arr_size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<arr_size; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(arr_size-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            arr_size--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    cout << "The new array after delect " << elem << ":" << endl; 
    for(i=0; i<arr_size; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}

