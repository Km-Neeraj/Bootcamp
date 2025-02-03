#include<stdio.h>

void sort012(int arr[],int n)
{
   int low=0,high=n-1,mid=0;
   while(mid<=high)
   {
      if(arr[mid]==0)
      {
        swap(arr[low],arr[mid]);
        low++;
        mid++;
      }
      else if(arr[mid]==1)
      {
          mid++;
      }
      else{
             swap(arr[high],arr[mid]);
             high--;
      }
   }
   for(int i=0;i<n;i++)
   {
     printf("%d ",arr[i]);
   }
}
int main()
{
   int n;
   printf("Enter the size of an array\n");
   scanf("%d",&n);
   int arr[n];
   printf("Enter an array elemnets\n");
   for(int i=0;i<n;i++)
   {
      printf("arr[%d] = ",i+1);
      scanf("%d",&arr[i]);
   }
   sort012(arr,n);

   return 0;
}
