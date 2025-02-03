  #include<stdio.h>
  int main()
  {
       int range,i,sum=0;
       printf("Enter the range upto find sum of natural numbers\n");
       scanf("%d",&range);
       for(i=1;i<=range;i++)
       {
          sum=sum+i;
       }
       printf("sum of first %d natural number = %d ",range,sum);
       return 0;
  }