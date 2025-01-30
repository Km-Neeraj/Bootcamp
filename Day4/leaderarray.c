  #include<stdio.h>
  void printLeaders(int arr[],int size)
  {
    int curr_ldr=arr[size-1],i;
    printf("Leaders in an array =\n");
    printf("%d \t",curr_ldr);
    for(i=size-2;i>=0;i--)
    {
       if(curr_ldr<arr[i])
       {
             curr_ldr=arr[i];
             printf("%d \t",curr_ldr);
       }
    }  
  }
  int main()
  {
        int n;
       int arr[]={18,17,4,3,5,2};
       n=sizeof(arr)/sizeof(arr[0]);
       printf("Leaders in an array ");
       printLeaders(arr,n);
       return 0;
       
  }