#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int l = 1,k=n;
	for(int i = 1;i<=4;i++)
	{
		if( i%2 != 0)
		{
			for(int j = l;j<=k;j++)
				cout<<j<<" ";
			 cout<<endl;
			 k = k+n;
			 l = l+n;
		}
		else
		 {
		 	for(int j = k;j>=l;j--)
		 	   cout<<j<<" ";
		 	   
		 	   cout<<endl;
		 	   l = l+n;
		 	   k = k+n;
		 }
	}
}
