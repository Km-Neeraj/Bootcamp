    #include<stdio.h>
    int sum(int);
    int main()
    {
       int num,res;
       printf("Enter the range to print the sum of natural numbers\n");
       scanf("%d",&num);
       res=sum(num);
       printf("sum of first natural numbers  upto %d = %d",num,res);
       return 0;
    }
    int sum(int num)
    {
         if(num==0)
         {
            return 0;
         }
         else
         {
            return num+sum(num-1);
         }
    }