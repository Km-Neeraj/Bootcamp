#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
                         printf("%c is in uppercase",ch);
    }
    else if(ch>='a'&&ch<='z')
    {
       printf("%c is in lowercase",ch);
    }
    else if((ch>='!'&&ch<='/')||(ch>=':'&&ch<='@'))
    {
          printf("%c is in special character",ch);
    }
    else{
           printf("neither uppercase,nor lowercase nor special character");
    }

    return 0;
}