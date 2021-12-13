#include<bits/stdc++.h>
using namespace std;
class A{
	public:
			int x;
		
	protected:
			int y;
		
	private:
			int z;
};

class B: private A{
	public:
		void display(){
			x = 20;
			y = 30;
			//z = 40;                           		   //z is private therefore cannot be accessed
			cout << "Value of x: " << x << endl;
			cout << "Value of y: " << y << endl;
			//cout << "Value of z: " << z << endl;		   // cannot be displayed as it is private
		
		}
};
int main()
{
	B obj;
	//x = 50;
	//y = 60;
	//z = 70;
	obj.display();
	
	return 0;
}
