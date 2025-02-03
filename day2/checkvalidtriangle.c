  #include<stdio.h>
  int main()
  {
    int s1,s2,s3,A,B,C,choice;
      printf("press 1 for check the triangle on the basis of its sides\n");
      printf("press 2 for check the triangle on the basis of its angle\n");
      printf("Enter your choice\n");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
         printf("Enter three sides of the triangle\n");
         scanf("%d%d%d",&s1,&s2,&s3);
         if((s1+s2)>s3)
         {
                         printf("valid triangle");
         }
    
         break;
         case 2:
         printf("Enter the angles of triangle\n");
         scanf("%d%d%d",&A,&B,&C);
         if((A+B+C)==180)
         {
             printf("Valid angle");
         }
       break;
       default:
       printf("not a valid triangle");
      }

      return 0;
  }