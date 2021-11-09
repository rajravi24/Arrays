#include<iostream>
#include<iomanip>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[10],n,k,count = 0;
	cin>>n;

	for(int i=0;i<n;i++)
	  cin>>a[i];
	  
	  sort(a,a+n);
	  
	  for(int i=0;i<n-1;i++)
	  {
	  	 for(int j = i+1;j<n;j++)
	  	 {
	  	 	k = a[i] + a[j];
	  	 	
	           for(int l=0;l<n;l++)
			   {
			   	 if( k == a[l])
			   	   count++;
				 }  
		   }
	  }
	  
	  if(count!=0)
	   cout<<count;
	   else
	    cout<<"-1";
	  
}
