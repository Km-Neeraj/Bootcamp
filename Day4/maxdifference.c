#include<stdio.h>
int maxDiff(int arr[],int arr_size)
{
     int i;
  int res=arr[1]-arr[0];

  int min_element=arr[0];
  for(i=1;i<arr_size;i++)
  {
     if(arr[i]-min_element>res)
       res=arr[i]-min_element;
     
     if(arr[i]<min_element)
         min_element=arr[i];
     
  }
  return res;
}
int main()
{
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Maximum difference = %d",maxDiff(arr,n));
    return 0;
}