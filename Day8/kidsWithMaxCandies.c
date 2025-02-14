#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
 bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
                         *returnSize=candiesSize;
                         bool* result=(bool*)malloc(candiesSize*sizeof(bool));
                         int maxcandies=0;
                         for(int i=0;i<candiesSize;i++)
                         {
                            if(candies[i]>maxcandies)
                            {
                               maxcandies=candies[i];
                            }
                         }
                         for(int i=0;i<candiesSize;i++)
                         {
                            result[i]=(candies[i]+extraCandies>=maxcandies);
                            
                         }
                         return result;
}
  int main()
  {
                   
            int candies[] = {2, 3, 5, 1, 3};
                     int extraCandies = 3;
                     int n = sizeof(candies) / sizeof(candies[0]);
                     
                     int returnSize;
                     bool* result = kidsWithCandies(candies, n, extraCandies, &returnSize);
                 
                     printf("Result = ");
                     for (int i = 0; i < returnSize; i++) {
                         printf("([ %s ])", result[i] ? "true" : "false");   //output=([ true ][ true ][ true ][ false ][ true ])
                     }
                 
                     free(result);
                     return 0;

}