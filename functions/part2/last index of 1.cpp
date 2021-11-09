#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main()
{
	char str[10];
	
	cin>>str;
	int k=0;
	int n = strlen(str);
	for(int i = 0;i<n;i++)
	{
		if( str[i] == '1')
		{
			k = i;
		}
	}
	if(k!=0)
	cout<<k;
	else
	cout<<"-1";
	
}
