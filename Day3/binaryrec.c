   
   #include<stdio.h>
   int binarysearch(int arr[],int low,int high,int key)
   {
        if(low>high)
        return -1;
else
{
     int mid=low+high/2;
   if(arr[mid]==key)
   {
     return mid;
   }
   else if(arr[mid]>key)
   {
       return binarysearch(arr,low,mid-1,key);
   }
   else{
         return binarysearch(arr,mid+1,high,key);
   }
     
}
   }
   int main()
   {
       int n,i,key,search;
       printf("Enter the size of an array\n");
       scanf("%d",&n);
       int arr[n];
       printf("Enter an array elements\n");
       for(i=0;i<n;i++)
       {
          printf("arr[%d]",i+1);
          scanf("%d",&arr[i]);
       }
       printf("Enter the key which you want to search\n");
       scanf("%d",&key);
       search=binarysearch(arr,0,n-1,key);
       if(search==-1)
       {
          printf("Element not found in an array");
       }
       else{
              printf("Elements %d is found at %d ",key,search+1);
       }
       return 0;

   }