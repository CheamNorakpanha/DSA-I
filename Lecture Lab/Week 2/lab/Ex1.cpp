#include<iostream>
using namespace std;

class Lab2
{
    public:
    int a,b;
    int max;

    void Input()
    {
        cout << "Input A: ";
        cin >> a;
        cout << "Input B: ";
        cin >> b;
    }

    void Output()
    {
        cout << "A is : " << a << endl;
        cout << "B is : " << b << endl;

        if(a>b)
        {
            cout << "=> A is larger than B" << endl;
        }
        else
        {
            cout << "=> B is larger than A" << endl;
        }
    }

    void max_two()
    {
        max=a;
        if(b>max)
        {
            max=b;
        }
        cout << "The maximum is " << max << endl;
    }
};

int main()
{
    Lab2 ex1;

    ex1.Input();

    ex1.Output();

    cout << "=====> Ouput <=====" << endl;
    ex1.max_two();
    cout << "===================" << endl;
    
}