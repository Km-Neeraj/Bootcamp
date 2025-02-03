#include<stdio.h>
int main()
{
   int i,j,count,range;
   printf("Enter range\n");
   scanf("%d",&range);

   for(i=1;i<=range;i++)
   {
       count=0;
       for(j=1;j<=i;j++)
       {
           if(i%j==0)
           {
             count++;
           }
       }
       if(count==2)
       {
          printf("%d\t",i);
       }
   }
   return 0;
}