#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int arr[10],n,count=0;
	cin>>n;
	
	for(int i = 0;i<n;i++)
	  cin>>arr[i];
	  
	  for(int i=0;i<n;i++)
	  {
	  	 for(int j = i+1 ; j<n; j++)
	  	 {
	  	 	if( arr[i] > arr[j] )
	  	 	{
	  	 		count++;
			}
		 }
	  }
	  
	  cout<<count;
}
