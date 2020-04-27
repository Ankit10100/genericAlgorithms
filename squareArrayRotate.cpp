#include <bits/stdc++.h>

using namespace std;

int rotation = 0;

//Dosent physically rotates the array
//Gives index of element which will be in supplied index x and y after rotation
//Updates x & y accordingly
//Rotation is in steps of 80 degree
//Array is square array
void getRotateIndex(int &x, int &y, int size)
{
	int times = rotation / 90, temp = x;
	if(times == 1)
	{
		//90 degree
		x = size - 1 - y;
		y = temp;
	}
	if(times == 2)
	{
		//180 degree
		x = size-1-x;
		y = size-1-y;
	}
	else if(times == 3)
	{
		//270 degree
		x = y;
		y = temp;
	}
	//cout<<"x: "<<x<<" y: "<<y<<endl;
}

int main()
{
	//Size of square array
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	}
	//Rotate by
	cin>>rotation;
	rotation = rotation%360;
	int x, y;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			x = i;
			y = j;
			getRotateIndex(x, y, n);
			cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
