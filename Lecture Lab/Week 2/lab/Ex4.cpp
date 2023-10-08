#include<iostream>
using namespace std;

class myFriend
{
	private:
		string name;
		int dob;
		string pob;
		string department;
        
	public:
    myFriend()
    {
        name = "Cheam_Norakpanha";
        dob = 0;
        pob = "unknown";
        department = "ITE";
    }
    myFriend(string name, int dob, string pob, string department)
    {
        this->name=name;
        this->dob=dob;
        this->pob=pob;
        this->department=department;
    }

    void Output()
    {
        cout << "Name: " << name << endl;
        cout << "DOB: " << dob << endl;
        cout << "POB: " << pob << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{	
    myFriend mf1;
    cout << "=====> Friend [1] <=====" << endl;
    mf1.Output();

    cout << "=====> Friend [2] <=====" << endl;
    myFriend mf2("Kry_Sokuntheary",0,"unknown","ITE");
    mf2.Output();

    cout << "=====> Friend [3] <=====" << endl;
    myFriend mf3("Keat_Panha",0,"unknown","ITE");
    mf3.Output();

    cout << "=====> Friend [4] <=====" << endl;
    myFriend mf4("Choun_Piseth",0,"unknown","ITE");
    mf4.Output();

    cout << "=====> Friend [5] <=====" << endl;
    myFriend mf5("Nget_Mles",0,"unknown","ITE");
    mf5.Output();
}
