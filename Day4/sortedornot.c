  #include<stdio.h>
  #include<stdbool.h>
bool isSorted(int arr[],int n)
{
      int i;
      for(i=1;i<n;i++)
      {
          if(arr[i]>arr[i-1])
          {
          return false;
          }
      }

      return true;
}
int main()
  {
      int n,i;
      printf("Enter size\n");
      scanf("%d",&n);
      int arr[n];
      printf("Enter an array elements\n");
      for(i=0;i<n;i++)
      {
          printf("arr[%d]",i+1);
          scanf("%d",&arr[i]);
      }
      bool res=isSorted(arr,n);
       if(res)
       {
          printf("array sorted");
       }
       else{
              printf("not sorted");
       }
       return 0;
  }