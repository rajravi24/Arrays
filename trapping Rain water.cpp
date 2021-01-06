#include<iostream>
#include<iomanip>
using namespace std;

int fun( int a[], int p , int j,int cnt)
{
	//cout<<"hai";
	for(int i = p+1 ; i<j ; i++)
	{
		cnt = cnt + ( a[p] - a[p+i]);
		
	}
	//cout<<cnt;
	if(cnt<=0)
	  cnt = 0;
	 
	return cnt;
}
int count = 0;

int main()
{
	int a[10],n,j,p,k;
	
	cin>>n;
	for(int i = 0;i<n;i++)
	 cin>>a[i];
	 
	 j=0,p=0;
	 
	 start:
	 	
	 for(int i = j+1;i<n; i++)
	  {
	  	if(j < a[i])
	  	 j = i;
	  }
	  
	   k = fun( a,p,j,count);
	  
	  if(j<n-2)
	  {
	  	p = j;
	  	goto start;
	  } 
	  
	  cout<<k;
}
