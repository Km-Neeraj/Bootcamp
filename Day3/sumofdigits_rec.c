#include<stdio.h>
int sumofdigits(int);
int main()
{
     int num,sum;
     printf("Enter the  number\n");
     scanf("%d",&num);
     sum=sumofdigits(num);
     printf("sum of number of digits %d = %d ",num,sum);
     return 0;

}
int sumofdigits(int num)
{
     if(num==0)
     {
        return 0;
     }
     else
     {
        return num%10+sumofdigits(num/10);
     }
}