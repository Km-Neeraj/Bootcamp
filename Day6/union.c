#include<stdio.h>
void union1(int arr1[],int n,int arr2[],int m)
{
  int i=0,j=0;
  printf("Union\n");
  while(i<n&&j<m)
  {
      if(arr1[i]<arr2[j])
      {
          printf("%d ",arr1[i]);
          i++;
      }
      else if(arr2[j]<arr1[i])
      {
         printf("%d ",arr2[j]);
         j++;
      }
      else
      {
         printf("%d ",arr1[i]);
         i++;
         j++;
      }
  }
  while(i<n)
  {
     printf("%d",arr1[i]);
     i++;
  }
  while(j<m)
  {
    printf("%d",arr2[j]);
    j++;                     
  } 
  printf("\n"); 
}
void intersection1(int arr1[],int n,int arr2[],int m)
{
    int i=0,j=0;
    printf("intersection\n");
    while(i<n&&j<m)
    {
        if(arr1[i]<arr2[j])
        {
             i++;
        }
        else if(arr2[j]<arr1[i])
        {
           j++;
        }
        else{
                printf("%d ",arr1[i]);  
                i++;
                j++;      
        }
    }
}

int main()
{
   int arr1[]={1,2,3,4,5,6};
   int arr2[]={2,3,5,7};
   int n=sizeof(arr1)/sizeof(arr1[0]);
   int m=sizeof(arr2)/sizeof(arr2[0]);
   union1(arr1,n,arr2,m);
   intersection1(arr1,n,arr2,m);
   return 0;
}