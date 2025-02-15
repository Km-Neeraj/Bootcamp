//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

#include<stdio.h>
#include<limits.h>
int reverse(int x){
                         int reversed=0;
                     
                      while(x!=0)
                      {
                         int rem=x%10;
                         x/=10;
                         if(reversed>INT_MAX/10||(reversed>INT_MAX/10 && rem>7))
                         return 0;
                         if(reversed<INT_MIN/10||(reversed<INT_MIN/10 && rem<-8))
                         return 0;
                       reversed=reversed*10+rem;
                     
                      }
                      return reversed;
 }

 int main()
 {
    int num=123;
    int rev=reverse(num);
    printf("Reverse of %d = %d ",num,rev);
    return 0;
 }