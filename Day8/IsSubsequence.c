
//Given two strings s and t, print Yes if s is a subsequence of t, or No otherwise.
#include<stdio.h>
#include<stdbool.h>
bool isSubsequence(char* s, char* t) {
      
                         int i=0,j=0;
                         while(t[j] != '\0')
                         {
                           if(s[i] == t[j])
                           {
                               i++;
                           }
                           j++;
                         }
                         return s[i]=='\0';
 }
                         
int main()
{
    char s[]="abc";
    char t[]="ahbgdc";
    if(isSubsequence(s,t))
    {
      printf("Yes\n");
    }
    else
    {
     printf("No");
    }
    return 0;
}                     