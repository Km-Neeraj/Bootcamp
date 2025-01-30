  #include<stdio.h>
void reverseArray(int arr[],int start,int end)
{
      while(start<end)
      {
            int temp=arr[start];
          
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;

      }
}
void printArray(int arr[],int n)
{
      int i;
      for(i=0;i<n;i++)
      {
         printf("%d \t",arr[i]);
      }
}
int main()
  {
  int n,i;
  printf("Enter the size of an array\n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
      printf("arr[%d] = ",i+1);
     scanf("%d",&arr[i]);
  }
  printf("Array Before Reverse\n");

  printArray(arr,n);
  
  reverseArray(arr,0,n-1);
  printf("\nReverse array is\n");
  printArray(arr,n);
  return 0;
}