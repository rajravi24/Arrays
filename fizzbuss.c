#include<stdio.h>
void fizzBuzz(int n) 
{
    int i;
  for(i=1;i<=n;i++)
  {
  	if( i < 3)
  	{
  		printf("\n%d",i);
	  }
	  else
	  {
	  
      if( (i%3 == 0) && (i%5 == 0) )
         printf("\nFizzBuzz");
      else if( i%3 == 0  && i%5 != 0  ) 
         printf("\nFizz");
      else if( i%5 == 0  && i%3 != 0 )
          printf("\nBuzz");
     else if( i%3 != 0 && i%5 != 0)
        printf("\n%d",i);  
    }
  
    }
    
}

int main()
{

int n;
scanf("%d",&n);
    fizzBuzz(n);

    return 0;
}


