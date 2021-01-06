#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[10],n,flag;
	
	cin>>n;
	for(int i = 0;i<n;i++)
	  cin>>a[i];
	  
	  for(int i = 0;i<n;i++)
	  {
	  	flag = 0;
	  	for(int j = i+1; j<n ; j++)
	  	{
	  	   if( a[i] < a[j])
			 flag = 1;	
		}
		
		if(flag == 0)
		 cout<<a[i]<<" ";
	  }
}
