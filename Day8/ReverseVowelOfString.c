#include<stdio.h>
#include<string.h>
#include<ctype.h>
char isvowel(char s)
{
    s=tolower(s);
    return (s=='a'||s=='e'||s=='i'||s=='o'||s=='u');

}
char* reverseVowels(char* s) {
    int left=0,right=strlen(s)-1;
    while(left<right)
    {
    while(left<right&&!isvowel(s[left]))
    {
     left++;   
    }
    
    while(left<right&&!isvowel(s[right]))
    {
       right--;
    }
    if(left<right)
    {
       int temp=s[left];
       s[left]=s[right];
       s[right]=temp;
       left++;
       right--;
    }
}
return s;
    
}
int main()
{
    char ch[]="IceCreAm";
     printf("Original string : %s\n",ch);
     printf("Reversed Vowel : %s\n",reverseVowels(ch));
     return 0;

}