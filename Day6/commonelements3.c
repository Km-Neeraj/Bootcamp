#include<stdio.h>

void findcommon(int arr1[],int n1,int arr2[],int n2,int arr3[],int n3)
{
    int i=0,j=0,k=0;
    while(i<n1&&j<n2&&k<n3)
    {
        if(arr1[i]==arr2[j]&&arr2[j]==arr3[k])
        {
           printf("%d ",arr1[i]);
           i++;
           j++;
           k++;
        }
        else if(arr1[i]<arr2[j])
        {
           i++;
        }
        else if(arr2[j]<arr3[k])
        {
             j++;
        }
        else {
                k++;       
        }
    }
    
    
}
int main()
{
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={1,2,3,7,8};
    int arr3[]={2,3};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    findcommon(arr1,n1,arr2,n2,arr3,n3);
    return 0;
}
