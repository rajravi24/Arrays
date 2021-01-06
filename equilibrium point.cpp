#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n, a[10],k,i,j,add1=0,add2=0;
	
	cin>>n;
	for(i=0;i<n;i++)
	  cin>>a[i];
	  
	  for(k=1;k<n;k++)
	  {
	  	add1 = 0;
	  	add2 = 0;
	  	 for(i=0;i<k;i++)
	  	 {
	  	 	add1 = add1 + a[i];
		 }
		 for(j=k+1;j<n;j++)
		 {
		 	add2 = add2 + a[j];
		 }
		 
		 if( add1 == add2)
	  {
	  	cout<<i+1;
	  	break;
	  }
	  }
	  
	  
}
