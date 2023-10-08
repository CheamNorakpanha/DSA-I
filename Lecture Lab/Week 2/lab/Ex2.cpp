#include<iostream>
using namespace std;

class Ex2
{
    public:
    int num, i, fact=1;
    int sum;
    
    
    void factorial()
    {
         cout << "Enter the number: ";
        cin >> num;

        if (num<= 0)
        {
            cout << "Error! The input doesn't exist.";
        }
        else
        {
            cout << num << "! = ";
            for(i = 1; i <= num; ++i)
            {
                cout << i << " x ";
                fact = fact*i;
                sum = sum + fact;
            }
            cout << "\b\b = " << fact << endl;
        }
    }
};


int main()
{
    Ex2 a;
    a.factorial();

    return 0;
}