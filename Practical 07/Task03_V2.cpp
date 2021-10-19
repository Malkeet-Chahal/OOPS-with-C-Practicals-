#include<iostream>
using namespace std;
int main()
{
	int arr[n][n],i,j;
	cout << "Enter elements to insert in array:\n";
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			cin >> arr[i][j];
	}
	
	cout << "\nEnter array is:\n";
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	
	cout << "\nReversed array is:\n";
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			cout << 10 - arr[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}

