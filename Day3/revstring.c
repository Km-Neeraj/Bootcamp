   

#include<stdio.h>
#include<string.h>
void reversestring(char str[],int start,int end)
{
   if(start>=end)
   {
      return;
   }
   else{
          char temp=str[start];
          str[start]=str[end];
             str[end]=temp;
        reversestring(str,start+1,end-1);
   }
}
int main()
{
    char str[1000];
    int len;
     printf("Enter string\n");
     scanf("%s",str);
     len=strlen(str);
     reversestring(str,0,len-1);
     printf("Rverse string =%s",str);
     return 0;
}