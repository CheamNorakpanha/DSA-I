#include<iostream>
#include<iomanip>
using namespace std;

/*
class Base
{
    public:
    void print()
    {
        cout << "A" << endl;
    }
};
class Derived : public Base
{
    public:
    void print()
    {
        cout << "B" << endl;
    }
};

int main()
{
    Derived der1, der2;
    der1.print();
    der2.Base::print();

    return 0;

}
*/

class Num_of_Faculty
{
    public:
    void print()
    {
        cout << "==========> Number of Faculty in RUPP <==========" << endl;
        cout << setw(6) << "Number" << setw(20) << "Department name" << setw(20) << "Code" << endl;
        cout << "=================================================" << endl;
        cout << setw(1) << "null" << setw(28) << "Department of Biology" << setw(13) << "DOB" << endl;
        cout << setw(1) << "null" << setw(30) << "Department of Chemistry" << setw(11) << "DOC" << endl;
        cout << setw(1) << "null" << setw(32) << "Department of Mathematics" << setw(9) << "DOM" << endl;
        cout << setw(1) << "null" << setw(28) << "Department of Physics" << setw(13) << "DOP" << endl;
    }
};
class Name_of_Faculty
{
    public:
    void print()
    {
        cout << "==========> Faculty of Engineering <==========" << endl;
        cout << "1). Faculty of Science" << endl;
        cout << "2). Faculty of Engineering" << endl;
        cout << "3). Faculty of Education" << endl;
        cout << "4). Faculty of Development Studies" << endl;
        cout << "5). Faculty of Social Science and Humanities" << endl;

        //credit: http://www.rupp.edu.kh/
    }
};
class Name_department_FE
{
    public:
    void print()
    {
        cout << "==========> Faculty of Engineering <==========" << endl;
        cout << "1). Department of Information Technology Engineering" << endl;
        cout << "2). Department of Telecommunication and Electronic Engineering" << endl;
        cout << "3). Department of Bio Engineering" << endl;
        cout << "Department of Automation & Supply Chain Systems Engineering" << endl;

        //credit: http://www.rupp.edu.kh/fe/
    }
};
class infomRUPP : public Num_of_Faculty, public Name_of_Faculty, public Name_department_FE
{
    public:
    virtual void print()
    {
        cout << endl;
        cout << "           University of Phnom Penh" << endl;
        cout << endl;
    }
};

int main()
{
    infomRUPP rupp1,rupp2,rupp3,rupp4;

    rupp1.print();
    
    rupp2.Num_of_Faculty::print();
    cout << endl;
    rupp3.Name_of_Faculty::print();
    cout << endl;
    rupp4.Name_department_FE::print();

    return 0;

}