#include<stdio.h>
#include<conio.h>
int main( )   
{   
  int n,count=1;   
  float x, average,sum=0;   
  printf("Enter the value of n?");  
  scanf("%d",&n);   
  while(count<= n)   
    {   
    printf("Enter the number?",count);   
    scanf("%f",&x);   
    sum+= x;   
    ++count;
    }   
    average=sum/n;   
   printf("\n average is:%f",average);   
}
