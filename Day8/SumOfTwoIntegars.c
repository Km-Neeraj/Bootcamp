//Given two integers a and b, return the sum of the two integers without using the operators + and -.

#include<stdio.h>
int getSum(int a, int b) {
                         while(b!=0)
                         {
                             unsigned int carry=a&b;
                              a=a^b;
                              b=carry<<1;
                            
                         }
                         return a;
                         
}
int main()
{
   int a=2,b=3;
    int res=getSum(a,b);
    printf("Sum of two numbers %d %d is = %d ",a,b,res);
    return 0;
}