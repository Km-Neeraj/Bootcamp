#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("Enter the number to check palindrome or not\n");
    scanf("%d",&num);
    int temp=num;
    while(num!=0)
    {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;
    }
    if(temp==rev)
    {
      printf("%d is palindrome",temp);
    }
    else{
            printf("%d is not a palindrome",temp);
    }
    return 0;
}