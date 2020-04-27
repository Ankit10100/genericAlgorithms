#include <iostream>
#include <cstring>
using namespace std;
/*
 * Given a number as input it prints the array spirally
 * 3
 * 1 2 3
 * 8 9 4
 * 7 6 5
*/

int main()
{
    int n;
    cin>>n;
    int lc=0, rc=n-1, tr=0, br=n-1, a[n][n], count = 1, size = n*n;
    while(count <= size)
    {
		//L2R
		for(int col=lc; col<=rc; col++)
		{
			a[tr][col] = count;
			count++;
		}
		tr++;
		//T2B
		for(int row=tr; row<=br; row++)
		{
			a[row][rc] = count;
			count++;
		}
		rc--;
		//L2R
		for(int col=rc; col>=lc; col--)
		{
			a[br][col] = count;
			count++;
		}
		br--;
		//B2T
		for(int row=br; row>=tr; row--)
		{
			a[row][lc] = count;
			count++;
		}
		lc++;
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
