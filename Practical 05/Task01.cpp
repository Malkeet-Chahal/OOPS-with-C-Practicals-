#include<bits/stdc++.h>
using namespace std;

void func1()
{
	int a = 110;
	cout << "\n1. Int: " << a << endl;
}

void func2()
{
	char a = 'a';
	cout << "2. Char: " << a << endl;
}

void func3()
{
	int a = 10, b = 9;
	bool c;
	c = (a>b);
	cout << "3. Bool: " << c << endl;
}

void func4()
{
	short a;
	a = 11;
	cout << "4. Short: " << a << endl;
}

void func5()
{
	float a = 10.6;
	cout << "5. Float: " << a << endl;
}

void func6()
{
	long a = 158596;
	cout << "6. Long: " << a << endl;
}

void func7()
{
	double a = 410.369;
	cout << "7. Double: " << a << endl;
}

void func8()
{
	wchar_t a = L'\0';
	cout << "8. Wide char: " << a << endl;
}

int main()
{
	func1();
	func2();
	func3();
	func4();
	func5();
	func6();
	func7();
	func8();
	
	return 0;
}

