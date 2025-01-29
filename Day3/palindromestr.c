   #include<stdio.h>
   #include<string.h>
   int ispalindrome(char str[],int start,int end)
   {
          if(start>=end)
          {
          return 1;
          }
         if(str[start]!=str[end])
         {
             return 0;               
         }
         return ispalindrome(str,start+1,end-1);
   }
   int main()
   {
      char str[1000];
      printf("Enter the string\n");
      scanf("%s",str);
      int len=strlen(str);
      if(ispalindrome(str,0,len-1))
      printf("String %s is palindrome",str);
      else{
             printf("String %s is not palindrome",str);
      }
      return 0;
   }