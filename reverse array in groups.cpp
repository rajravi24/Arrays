#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int arr[10],brr[10],inc = 0 , t,k,n,s,a,rem,z,i,j;
	
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	 cin>>arr[i];
	 
	 a =  n/k;
	 rem = n%k;
	 t = k;
	 s=0;
	 for(i=0;i<a;i++)
	 {
	 	for(j= t - 1; j>=s ; j--)
	 	{
	 		brr[inc] = arr[j];
	 		inc++;
		 }
		  
		  s = t;
		  t = t + k;
	 }
	  
	  z = inc;
	  if(rem != 0)
	  {
	  	 for(i=n-1;i>=z;i--)
	  	 {
	  	 	brr[inc] = arr[i];
	  	 	inc++;
		   }
	  }
	  
	  	for(i=0;i<n;i++)
	        cout<<brr[i]<<" ";
}
