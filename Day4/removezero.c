  #include<stdio.h>
  void moveZeros(int arr[],int n)
{
    int i,temp;
   int count=0;
   for(i=0;i<n;i++)
   {
    if(arr[i]!=0)
    {
       temp=arr[i];
       arr[i]=arr[count];
       arr[count]=temp;
       
       count++;
    }
   }
}
 
 int main()
 {
     int arr[]={0,1,9,8,4,0,0,2,7,0,6,0,9},n,i;
     n=sizeof(arr)/sizeof(arr[0]);
     moveZeros(arr,n);
     printf("Array after moving zeros to end\n");
     for(i=0;i<n;i++)
     {
         printf("%d",arr[i]);
     }
     return 0;
 }
  