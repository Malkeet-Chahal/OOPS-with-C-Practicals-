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
			
			cout << "Value of x: " << x << endl;
			cout << "Value of y: " << y << endl;
		}
};
int main()
{
	B obj;
	
	obj.x = 30;
	obj.y = 40;
	
	obj.display();
	
	return 0;
}
