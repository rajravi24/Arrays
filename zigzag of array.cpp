#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a[10],n,temp;
	
	cin>>n;
	for(int i = 1;i<=n;i++)
	  cin>>a[i];
	  
	  for(int i = 1;i<n;i++)
	  {
	  	  if( i % 2 != 0)
	  	  {
	  	  	if( a[i] > a[i+1])
	  	  	 {
	  	  	 	temp = a[i];
	  	  	 	a[i] = a[i+1];
	  	  	 	a[i+1] = temp;
			 }
		  }
		  if( i%2 == 0)
		  {
		  
		  if( a[i] < a[i+1])
		   {
		   	     temp = a[i];
	  	  	 	a[i] = a[i+1];
	  	  	 	a[i+1] = temp;
		   }
	    }
	  }
	  
	  for(int i = 1;i<=n;i++)
	    cout<<" "<<a[i];
}
