#include<stdio.h>
int countDigits(int n)
{
      if(n==0)
      {
        return 0;

      }
      else{
              return 1+countDigits(n/10);
      }
}
int main()
{
     int num;
     printf("Enter a number\n");
     scanf("%d",&num);
     if(num<0)
     num=-num;
   if(num==0)
   {
      printf("The number of digits in 0 is: 1\n");
   }
   else{
         printf("number of digits in %d is = %d",num,countDigits(num));
   }
}