//reverse a number program
//input:123
//output:321
#include<stdio.h>  
 int main()    
{    
int n=123, reverse=0, rem;       
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("%d",reverse);    
return 0;  
}   
