#include<stdio.h>
int majority(int arr[],int n)
{
    int candidate=-1;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
           candidate=arr[i];
           count=1;

        }
        else if(arr[i]==candidate)
        {
           count++;
        }
        else{
                count--;
        }
    }
    count=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==candidate)
       {
          count++;
       }
    }
    if(count>n/2)
    {
       return candidate;
    }
    else{
           return -1;
    }
}
int main()
{
   int n;
   printf("size of an array\n");
   scanf("%d",&n);
   int arr[n];
   printf("enter array elements\n");
   for(int i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
   int res=majority(arr,n);
   if(res==-1)
   {
      printf("Not majority element presents here");
   }
   else{
         printf("Majority elements = %d",res);
   }
   return 0;
}