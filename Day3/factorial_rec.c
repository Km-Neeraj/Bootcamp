
 #include<stdio.h>
 long long int fact(int);
 int main()
 {
     int num,res;
     printf("Enter a positive number\n");
     scanf("%d",&num);
     if(num<0)
     {
        printf("Factorial is not defined for negative numbers\n");
     }
   else{
         res=fact(num);
         printf("Factorial of %d = %lld ",num,res);
   }
     return 0;
 }
 long long int fact(int num)
 {
     if(num==0)
     {
       return 1;
     }
     else
     {
        return num*fact(num-1);
     }
 }
