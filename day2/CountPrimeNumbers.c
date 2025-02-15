//Given an integer n, return the number of prime numbers that are strictly less than n.
#include<stdio.h>
int countPrimes(int n) {
                         int count,p=0;
                         if(n==0||n==1)
                         {
                            return p;
                         }
                         for(int i=2;i<n;i++)
                         {
                             count=0;
                            for(int j=1;j<=i;j++)
                            {
                              if(i%j==0)
                              {
                                 count++;
                              }
                            }
                            if(count==2)
                            {
                              p++;
                            }
                         }
                       return p;

}
int main()
{
   int n=10;
   int count=countPrimes(n);
   printf("Number of prime Numbers to 10 = %d ",count);
   return 0;
}