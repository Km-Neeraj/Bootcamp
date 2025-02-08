#include<stdio.h>
#include<stdbool.h>

bool isTriplet(int arr[],int n,int x)
{
     int i;
   for(i=0;i<n-2;i++)
   {
     if(n<3)
     {
       return false;
     }
     if(i>0&&arr[i]==arr[i-1])
     {
       continue;
     }
     int left=i+1,right=n-1;
     while(left<right)
     {
          int sum=arr[i]+arr[left]+arr[right];
          if(sum==x)
          {
             return true;
              while(left<right&&arr[left]==arr[left+1])
                {
                      left++;
                 }
                   while(left<right&&arr[right]==arr[right-1])
                    {
                        right--;
                    }
                    left++;
                    right--;
            }
            else if(sum<0)
            {
               left++;
            }
            else{
                    right--;
            }
}
}
}
int main()
{
    int arr[]={1, 2, 4, 5, 7, 10, 12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=19;
    if(isTriplet(arr,n,x))
    {
      printf("Triplet found\n");
    }
    else{
          printf("Triplet not found");
    }
    return 0;
    

}