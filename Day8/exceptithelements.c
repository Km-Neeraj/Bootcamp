#include<stdio.h>
void multiply1(int arr[],int n,int temp[])
{
    temp[0]=arr[0];
    for(int i=1;i<n;i++)
    {
      temp[i]=temp[i-1]*arr[i];
    }
    int prod=1;
    for(int i=n-1;i>0;i--)
    {
         temp[i]=temp[i-1]*prod;
         prod=prod*arr[i];
    }
    temp[0]=prod;
    for(int i=0;i<n;i++)
    {
       printf("%d ",temp[i]);
    }
}
int main()
{
  
   int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
   
   int temp[n];
   multiply1(arr,n,temp);
   return 0;
}
