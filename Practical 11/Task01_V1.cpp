#include<bits/stdc++.h>
using namespace std;
class A{
	public:
		int x;
		int y;
};

class B: public A{
	public:
		void display(){
			x = 10;
			y = 20;
			cout << "Value of x: " << x << endl;
			cout << "Value of y: " << y << endl;
		}
};
int main()
{
	//int x,y;
	B obj;
	//obj.x = 30;
	//obj.y = 40;
	obj.display();
	//cout << "\nValue of x: " << x << endl;
	//cout << "Value of y: " << y << endl;
	return 0;
}
