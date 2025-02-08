#include<stdio.h>

void alternate_Pos_neg(int arr[],int n)
{
   int pos[n],neg[n],poscount=0,negcount=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]>=0)
       {
          pos[poscount++]=arr[i];
       }
       else{
              neg[negcount++]=arr[i];
       }
   }
   int i=0,j=0,k=0;
   while(i<poscount&&j<negcount)
   {
      arr[k++]=pos[i++];
      arr[k++]=neg[j++];

   }
   while(i<poscount)
   {
     arr[k++]=pos[i++];
   }
   while(j<negcount)
   {
      arr[k++]=neg[j++];
   }
}

int main()
{
   int arr[]={1,2,-3,-4,5,-6,-1,-22,-33};
   int n=sizeof(arr)/sizeof(arr[0]);
   printf("Original array \n ");
   for(int i=0;i<n;i++)
   {
       printf(" %d ",arr[i]);
   }
   alternate_Pos_neg(arr,n);
   printf("\n Alternate positive negative array\n ");
   for(int i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
   return 0;
   
}