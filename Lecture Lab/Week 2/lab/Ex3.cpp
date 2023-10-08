#include<iostream>
#include<stdlib.h>

using namespace std;

class box
{	
	private:
		int width ,length ,height;

	public:
    void Input_Box()
    {
        cout << "Enter width, length, height: ";
        cin >> width >> length >> height;
    }
    void Output_Box()
    {
        cout << "=> width: " << width << endl;
        cout << "=> length: " << length << endl;
        cout << "=> height: " << height << endl;
    	cout << "Volume formula: " << width * length * height;
    }
		
};
int main()
{
	box vf;
    cout << "=====> Input <=====" << endl;
	vf.Input_Box();
    cout << "=====> Output <=====" << endl;
	vf.Output_Box();
	
	return 0;
}

