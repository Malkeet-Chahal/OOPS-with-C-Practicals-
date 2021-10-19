#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter order of matrix: ";
	cin >> n;
	
	int arr[n][n];
	cout << "Enter elements:\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cin >> arr[i][j];
	}
	
	cout << "\nArray is:\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		
		cout << endl;	
	}
	
	int res = n % 2 == 0 ? n/2 - 1 : n/2;
	for(int i = 0; i <= res; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == n-1-i && j == n-1-j)
				break;
			int temp = arr[i][j];
			arr[i][j] = arr[n-1-i][n-1-j];
			arr[n-1-i][n-1-j] = temp;
		}
	}
	
	cout << "Reversed array is:\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}

