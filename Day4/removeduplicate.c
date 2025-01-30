  #include<stdio.h>
  void remDups(int arr[],int n)
  {
     int i;
     int res=0;
     //printf("%d ",arr[res]);
     for(i=1;i<n;i++)
     {
         if(arr[i]!=arr[res])
         {
             res++;
             arr[res]=arr[i];
             printf("%d ",arr[res]); 
            
             
         }
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
      remDups(arr,n);
      return 0;

  }