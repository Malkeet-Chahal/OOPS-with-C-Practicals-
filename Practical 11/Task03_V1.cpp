#include<bits/stdc++.h>
using namespace std;
class A{								
		public:
				int k;
};

class B: public A{						
			public:
				void display1(){
					k = 10;
					cout << "k: " << k << endl;
				}
};

class C: public A{
			public:
				void display2(){
					k = 20;
					cout << "k: " << k << endl;
				}											
};

class D: public B, public C{
			public:
				void display3(){
					k = 30;
					cout << "k: " << k << endl;
				}						
};

int main()
{
	D obj;
	obj.display1();
	obj.display2();
	obj.display3();	
		
	return 0;	
}
