#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[11],b[11],k,l,n,mid,m;
	
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	  
	  mid = n/2;
	  k = 1;
	  l = n;
	  m = n;
	  
	  	  for(int i = 0; i< mid;i++)
	  	   {
	  	   	 b[i+k] = a[i];
	  	   	   k++;
		   }
		  for(int i = n - 1; i>=mid ; i--) 
		  {
		  	  b[ l - m] = a[i];
		  	    l++;
		  	    m--;
		  }
		  
			for(int i=0;i<n;i++)
	  cout<<" "<<b[i];	 
}
