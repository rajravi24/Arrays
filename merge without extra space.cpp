#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[10],b[10],n,m,temp;
	cin>>n;
	cin>>m;
	for(int i = 0 ;i<n;i++)
	cin>>a[i];
	for(int i = 0;i<m;i++)
	cin>>b[i];
	
	for(int i = 0; i< m;i++)
	{
		for(int j = 0; j<n ; j++)
		{
			if( b[i] < a[j] )
			{
			temp = b[i];
			b[i] = a[j];
			a[j] = temp;
		    }
		}
	}
	
	for(int i = 0 ;i<n;i++)
	cout<<" "<<a[i];
	cout<<endl;
	for(int i = 0;i<m;i++)
	cout<<" "<<b[i];
}
