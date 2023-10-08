#include<iostream>
using namespace std;

int main() {
   int arr[100] = {1, 2, 3, 4, 5}; // array initialization
   int n = 5; // size of array
   int pos = 2; // position where we want to insert the element
   int val = 10; // value we want to insert
   
   // shift the elements from position pos to end of array to the right by one position
   for(int i=n; i>=pos; i--) {
      arr[i] = arr[i-1];
   }
   
   // insert the new element at position pos
   arr[pos-1] = val;
   
   // increase the size of the array by 1
   n++;
   
   // print the updated array
   for(int i=0; i<n; i++) {
      cout << arr[i] << " ";
   }
   
   return 0;
}


