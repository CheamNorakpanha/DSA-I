#include <iostream>
#include <vector>
using namespace std;
class ArrayIns
{
    private:
    vector<double> v; //
    int nElems; //
    //
    public:
    ArrayIns(int max) : nElems(0) //
    {
    v.resize(max); //
    }
    //
    void insert(double value) //
    {
    v[nElems] = value; //
    nElems++; //
    }
   //
    void display() //
    {
    for(int j=0; j<nElems; j++) //
    cout << v[j] << " "; //
    cout << endl;
    }
    //
    void insertionSort()
    {
    int in, out;
    for(out=1; out<nElems; out++) //
    {
    double temp = v[out]; //
    in = out; //=
    while(in>0 && v[in-1] >= temp) //
    {
    v[in] = v[in-1]; //shift item to right
    --in; //
    }
    v[in] = temp; //
    } //
    } //
    //--------------------------------------------------------------
}; //
//
int main()
{
    system("cls");
    int maxSize = 100; //
    ArrayIns arr(maxSize); //
    arr.insert(77); //
    arr.insert(99);
    arr.insert(44);
    arr.insert(55);
    arr.insert(22);
    arr.insert(88);
    arr.insert(11);
    arr.insert(00);
    arr.insert(66);
    arr.insert(33);

    cout<< "The original array: "<< endl;
    arr.display(); //
    cout<< endl;
    
    cout<< "The order array after apply insertion sort: "<< endl;
    arr.insertionSort(); //
    arr.display(); //
    cout<< endl;
return 0;
} //
 


