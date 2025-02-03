    #include<stdio.h>
    int main()
    {
        int i,range,j,count;
        printf("Enter the range upto print prime numbers\n");
        scanf("%d",&range);
       printf("prime numbers from 1 to %d\n",range);
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