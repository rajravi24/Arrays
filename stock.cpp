#include<iostream>
#include<iomanip>
using namespace std;

struct interval
{
	int buy;
	int sell;
};

int main()
{
	int price[20],n;
	
	for(int i = 0;i<n;i++)
	  cin>>price[i];
	  
	  int count = 0;
	  interval sol[n/2 + 1];
	  int i = 0;
	  while(i < n - 1)
	  {
	  	    while( (i<n-1) && (price[i] >= price[i+1]) )
	  	         i++;
	  	         
	  	         if(i == n-1)
	  	          break
	  	      
			sol[count].buy = i++;	   
			
			
			while( i < n)  && () 
	  }
}
