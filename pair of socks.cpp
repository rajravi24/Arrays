#include<iostream>
using namespace std;

int main()
{
	int a[120],n,count,pair=0;
	
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	  
	  
	  for(int i=0;i<n;i++)
	  {
	  	 if( a[i] != '*')
	  	 {
	  	 	count = 1;
	  	 	for(int j=i+1;j<n;j++)
	  	 	 {
	  	 	 	if(a[i]== a[j])
	  	 	 	{
	  	 	 	   count++;
	  	 	 	   a[j] = '*';
				}
			 }
			 count = count / 2;
				pair = pair + count;
	      }
		   
	  }
	  
	  cout<<pair;
}
