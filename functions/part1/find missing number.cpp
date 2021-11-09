#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,arr[10];
	cin>>n;
    for(int i = 0;i<n-1;i++)
       cin>>arr[i];
       
	for(int i=0;i<n-1;i++)
	{
	   	if( (i+1) != arr[i] )
	   	{
	   		cout<<i+1;
	   		break;
		   }
	}
}
