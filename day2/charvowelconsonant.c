   #include<stdio.h>
   #include<ctype.h>
   int main()
   {
       char ch;
       printf("Enter the character\n");
       scanf("%c",&ch);
       ch=tolower(ch);
       if(ch>='a'&&ch<='z')
       {
           if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
           {
              printf("character %c is vowel",ch);
           }
           else
           {
               printf("character %c is consonant",ch);
           }
       }
       else{
              printf("not an alphbet");
       }
       return 0;
   }