#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
      return a;
     return gcd(b,a%b);
}
int main()
{
   int num1,num2,gc;
   printf("Enter two numbers\n");
   scanf("%d%d",&num1,&num2);
   gc=gcd(num1,num2);
   printf("gcd of %d %d = %d ",num1,num2, gc);
   return 0;
}