  #include<stdio.h>
  
  int secondlargest(int arr[],int n)
  {
      int largest=0,res=-1,i;
      for(i=1;i<n;i++)
      {
          if(arr[i]>arr[largest])
          {
                res=largest;
                largest=i;
          }
          else if(arr[i]!=arr[largest])
          {
           if(res==-1||arr[res]<arr[i])
              res=i;
          }
      }
      return res;
  }

  int main()
  {
   int n,i,index;
   printf("Enter the size of an array\n");
   scanf("%d",&n);
   int arr[n];
   printf("Enter an array elements\n");
   for(i=0;i<n;i++)
   {
    
    scanf("%d",&arr[i]); 
   }
   index=secondlargest(arr,n);
   if(index==-1)
   {
        printf("secondlargets didn't exist");
   }
   else{
             printf("Secondlargets=%d",arr[index]);
   }
   return 0;
  }