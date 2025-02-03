  #include<stdio.h>
  #include<stdbool.h>

  void findpairs(int arr[],int n,int target)
{
  int left=0,right=n-1;
  bool found=false;
  while(left<right)
  {
     int sum=arr[left]+arr[right];
     if(sum==target) 
     {
        printf("(%d %d)\n",arr[left],arr[right]);
        found=true;
        left++;
        right--;
     } 
     else if(sum<target) 
     {
       left++;
     } 
     else{
            right--;
     }                  
  }
  if(!found)
  {
     printf("Not such pairs found\n");
  }
}
  int main()
  {
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements array\n");
    for(int i=0;i<n;i++)
    {
       printf("arr[%d] = ",i+1);
       scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j])
           {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
           }
        }
    }
    int target;
    printf("Enter target sum\n");
    scanf("%d",&target);
    findpairs(arr,n,target);
    return 0;
}
