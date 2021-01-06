#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[10],n,k,temp;
	
	cin>>n;
	cin>>k;
	
	for(int i = 0;i<n;i++ )
	  cin>>a[i];
	  
	  for(int i=0;i<n;i++)
	  {
	  	for(int j = 0; j<n-1;j++ )
	  	{
	  		if( a[j+1] < a[j] )
	  		{
	  			temp = a[j+1];
	  			a[j+1] = a[j];
	  			a[j] = temp;
			}
		}
	  }
	  
	  cout<<a[k-1];
}
