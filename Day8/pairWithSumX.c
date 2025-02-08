#include<stdio.h>
int pairwithsumx(int arr[],int n,int x)
{
   int left=0,right=n-1;
   while(left<right)
   {
      int sum=arr[left]+arr[right];
      if(sum==x)
      {
        printf(" pair found (%d, %d)\n",arr[left],arr[right]);
        return 1;
      }
      else if(sum<0)
      {
         left++;
      }
      else{
             right--;
      }
   }
   printf("No pair found\n");
   return 0;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("array elements are ");
    for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }

    int x=10;
    printf("\nTarget sum = %d\n ",x);
    pairwithsumx(arr,n,x);
    return 0;
}