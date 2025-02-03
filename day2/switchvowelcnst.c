   #include<stdio.h>
   #include<ctype.h>

   int main()
   {
      char ch;
      printf("Enter character\n");
      scanf("%c",&ch);
      ch=tolower(ch);
      switch(ch)
      {
         case 'a':
         case 'e':
         case 'i':
         case 'o':
         case 'u':
           printf("character is vowel");
           break;
      default:
      if(ch>='a'&&ch<='z')
      {
         printf("character is consonant");
      }
      else
      {
        printf("Not an alphabet");
      }
      } 
      return 0;
   }