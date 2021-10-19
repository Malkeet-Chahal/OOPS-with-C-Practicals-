#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter order of matrix: ";
	cin >> n;
	
	int arr[n][n],i,j;
	cout << "Insert elements to array:\n";
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cin >> arr[i][j];
	}
	
	cout << "\nEntered elements in array are: " << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;	
	}
	
	cout << "\nReversed array is:\n";
	for(int i = n-1; i >= 0; i--)
	{
		for(int j = n-1; j >= 0; j--)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}
