#include<bits/stdc++.h>

using namespace std;
int c=1;

class student
{
	private:
	
		int roll;
		long ph_no;
		string address;
		string name;
	
	public:
	
	void set_roll(int roll)
	{
		this->roll=roll;
	}
	
	void set_ph(long num)
	{
		this->ph_no=num;
	}
	
	void set_address(string add)
	{
		this->address=add;
	}
	
	void set_name(string name)
	{
		this->name=name;
	}
	
	void showdata()
	{
		  cout<<"NAME :"<<this->name<<endl;
		  cout<<"roll no. of student "<<this->roll<<endl;
		  cout<<"phone no. of  student "<<this->ph_no<<endl;
		  cout<<"address of student "<<this->address<<endl;
    	  c++;
	}
};


int main()
{
	student obj1,obj2;
    obj1.set_name("Johnny");
    obj1.set_roll(29);
    obj1.set_ph(6386862383);
    obj1.set_address("xyz colony,new road");
    obj2.set_name("Jim");
    obj2.set_roll(34);
    obj2.set_ph(7309686238);
    obj2.set_address("ABC colony,Gehu");
    
    obj1.showdata();
    obj2.showdata();
    
    return 0;
}
