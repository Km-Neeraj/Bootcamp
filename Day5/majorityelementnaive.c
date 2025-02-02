  #include<stdio.h>
  int majority(int arr[],int n)
  {
     int count,i,res=0;
     for(i=0;i<n;i++)
     {
          count=0;
        for(int j=0;j<n;j++)
        {
          if(arr[i]==arr[j])
          {
              count++;

          }
          if(count>res)
          {
                         res=count;
          }
        }
        if(res>n/2)
        {
           return arr[i];
        }
     }
     return -1;
  }
  int main()
  {
      int n;
      printf("Size of an array\n");
      scanf("%d",&n);
      int arr[n];
      printf("Enter an array elements\n");
      for(int i=0;i<n;i++)
      {
         scanf("%d",&arr[i]);
      }
      int rs=majority(arr,n);
      if(rs!=-1)
      printf("Majority elements = %d",rs);
      else 
      printf("not majority element present ");
      return 0;
  }