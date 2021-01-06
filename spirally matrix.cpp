#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[10][10],n,m,k=0,l=0;
	cin>>m;
	cin>>n;
	
	for(int i=0;i<m;i++)
	{
		for(int j = 0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	while( k<m && l<n)
	{
		 for(int i = 0;i<m; i++)
		 {
		 	cout<<a[k][i]<<" ";
		 }
		 k++;
		 for(int i = k;i<n;i++)
		 {
		 	cout<<a[i][n-1]<<" ";
		 }
		 n--;
		 
		 if(k<m)
		 {
		 	 for(int i = n-1;i>=0;i--)
		 	 {
		 	 	 cout<<a[n][i]<<" ";
			  }
			  m--;
			  
			  if(l<n)
			  {
			  	for(int i = m- 1; i>k  ; i--)
			  	{
			  		cout<<a[i][l]<<" ";
				  }
				  l++;
			  }
			  
		 }
	}
}
