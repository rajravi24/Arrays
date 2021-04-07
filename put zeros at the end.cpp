#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n, a[20],i,j,temp;
	cin>>n;
	for( i = 0;i<n;i++)
	 cin>>a[i];
	 
	 
	 for(i = 0;i<n;i++)
	 {
	    if( a[i] == 0)
	    {
	 	    j = i;//finding the index where 0 occurs
	 	    
	 		while(a[j]== 0 && j <=n)//finding the index where the next non-zero element occurs
	 		    j++;
	 		
			if(j<n)   //condition limits with in the given 'n' vakue.
	 		{
				temp = a[i];//swap both index elements
			    a[i] = a[j];
			    a[j] = temp;
			}
		}
     }
     for( i = 0;i<n;i++)
	 cout<<a[i]<<" ";
}
