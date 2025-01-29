#include<stdio.h>
int powerof2(int num)
{
    if(num==0)
    return 1;
else{
      return 2*powerof2(num-1);
}
}
int main()
{
    int num,res;
    printf("Enter the number of power\n");
    scanf("%d",&num);
    if(num<0)
    printf("numbers power can't find of negative numbers\n");
    else
    {
        res=powerof2(num);
        printf("%d power",res);
    }
    return 0;
}