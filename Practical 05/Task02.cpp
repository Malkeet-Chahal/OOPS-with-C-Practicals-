#include<bits/stdc++.h>
using namespace std;

void func1()
{
	int a = 110;
	cout << "\n1. Int: " << a << endl;
	cout << "Size of int: " << sizeof(a) << " Bytes\n" << endl;
}

void func2()
{
	char a = 'a';
	cout << "2. Char: " << a << endl;
	cout << "Size of char: " << sizeof(a) << " Bytes\n" << endl;
}

void func3()
{
	int a = 10, b = 9;
	bool c;
	c = (a>b);
	cout << "3. Bool: " << c << endl;
	cout << "Size of Bool: " << sizeof(c) << " Bytes\n" << endl;
}

void func4()
{
	short a;
	a = 11;
	cout << "4. Short: " << a << endl;
	cout << "Size of short: " << sizeof(a) << " Bytes\n" << endl;
}

void func5()
{
	float a = 10.6;
	cout << "5. Float: " << a << endl;
	cout << "Size of float: " << sizeof(a) << " Bytes\n" << endl;
}

void func6()
{
	long a = 158596;
	cout << "6. Long: " << a << endl;
	cout << "Size of long: " << sizeof(a) << " Bytes\n" << endl;
}

void func7()
{
	double a = 410.369;
	cout << "7. Double: " << a << endl;
	cout << "Size of double: " << sizeof(a) << " Bytes\n" << endl;
}

void func8()
{
	wchar_t a = L'\0';
	cout << "8. Wide char: " << a << endl;
	cout << "Size of wide char: " << sizeof(a) << " Bytes\n" << endl;
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

