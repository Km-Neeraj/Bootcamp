#include<stdio.h>

int chocolate_dist(int arr[],int n,int m)
{
    if(m>n)
       return -1;
       int res=arr[m-1]-arr[0];
       for(int i=1;(i+m-1)<n;i++)
       {
          int min=(arr[i+m-1]-arr[i]);
          if(min<res)
          {
              res=min;
          }
       }
       return res;
    
}
int main()
{
    int n,m;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
       printf("arr[%d] = ",i+1);
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]>arr[j])
           {
             int temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;

           }
           
       }
    }
    printf("sorted array\n");
           for(int i=0;i<n;i++)
           {
               printf("%d ",arr[i]);
           }

           printf("\nEnter the number of students\n");
           scanf("%d",&m);
           int min=chocolate_dist(arr,n,m);
           printf("minimum difference = %d ",min);
           return 0;
}
