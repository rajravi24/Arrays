#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[20],n;
	cin >> n;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	  
	int  maxsofar = a[0],maxendhere = 0,start =0,end=0,s=0;
	
	for(int i=0;i<n;i++ )
	{
		maxendhere = maxendhere + a[i];
		
		if(maxsofar < maxendhere)
		 {
		 	maxsofar = maxendhere;
		 	start = s;
		 	end = i;
		 }
		 if(maxendhere < 0)
		 {
		 	maxendhere = 0;
		 	s = i+1;
		 }
	}
	
	cout<<maxsofar<<start <<end;
}
