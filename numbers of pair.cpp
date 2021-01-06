#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    int a[5],b[3],n,m,count=0;
    cin>> n;
    cin>> m;
    
    for(int i=0;i<n;i++)
       cin>>a[i];
    for(int i = 0;i<m;i++)
	   cin>>b[i];
	   
	   for(int i = 0;i<n; i++)
	   {
	   	 for(int j = 0;j<m; j++)
	   	    {
	   	    	if( pow( a[i],b[j])  > pow (b[j],a[i]) )
	   	    	{
	   	    		count++;
				}
			}
		}   
		
		cout<<count;
}
