#include<stdio.h>
#include<math.h>
int main()
{
    int num,digit=0,rem,res=0,temp;
    printf("Enter the number to check armstrong or not\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        digit++;
    }
    temp=num;
    
    while(temp!=0)
    {
        rem=temp%10;
        res=res+pow(rem,digit);
        temp=temp/10;

    }
    if(num==res)
    {
       printf("%d is an armstrong",num);
    }
    else
    {
        printf("%d is not an armstrong",num);
    }
    return 0;
}