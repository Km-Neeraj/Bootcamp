#include<stdio.h>
int maxArea(int* height, int heightSize) {
                         int left = 0, right = heightSize - 1;
                         int max_area = 0;
                     
                         while (left < right) {
                             int hight = (height[left] < height[right]) ? height[left] : height[right];
                             int width = right - left;
                             int area = width * hight;
                     
                             if (area > max_area) {
                                 max_area = area;
                             }
                     
                             if (height[left] < height[right]) {
                                 left++;
                             } else {
                                 right--;
                             }
                         }
                         return max_area;
                     }
int main()
{
int arr[]= {1,8,6,2,5,4,8,3,7};
int n=sizeof(arr)/sizeof(arr[0]);
  int max=maxArea(arr,n);
  printf("Maximum store water = %d ",max);
  return 0;
}

