#include<stdio.h>  
 int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;   // store remainder to m variable.     
sum=sum+m;   // add m with sum .  
n=n/10;     // decraese n by 10. 
}    
printf("Sum is=%d",sum);    
return 0;  
}   
