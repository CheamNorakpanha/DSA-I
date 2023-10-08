#include<iostream>
#include<queue>
using namespace std;

void showQ(queue<int> myNum)
{
    while (!myNum.empty())
    {
        cout << '\t' << myNum.front();
        myNum.pop();
    }
    cout << "\n";
}

int main()
{
    queue<int> myNum;
    myNum.push(6);
    myNum.push(2);
    myNum.push(3);
    myNum.push(8);

    cout << "Print all numbers: ";
    showQ(myNum);

    cout << "Size: " << myNum.size() << endl;
    cout << "Front: " << myNum.front() << endl;
    cout << "Back: " << myNum.back() << endl;

    return 0;
}