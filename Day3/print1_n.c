  #include<stdio.h>
  void print1ton(int,int);
  int main()
  {
     int num;
     printf("Enter the value of n");
     scanf("%d",&num);
     if(num<=0)
     {
          printf("Please enter a positive integars\n");
     }
     else{
           print1ton(1,num);
           printf("\n");
     }
     return 0;
  }
  void print1ton(int current,int num)
  {
       if(current>num)
       {
           return;
       }
       
        printf("%d ",current);
        print1ton(current+1,num);
  }