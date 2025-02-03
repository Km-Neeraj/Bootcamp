   #include<stdio.h>
   int main()
   {
       int choice;
       float value,result;
       printf("press 1 for cm to metre\n");
             printf("press 2 for metre to centimetre \n");
              printf("press 3 for kg to g\n");
                  printf("press 4 for g to kg\n");
                   printf("press 5 for km to metre\n");
                   printf("press 6 to metre to km\n");
                   printf("press 7 exit\n");
        printf("Enter your choice");           
        scanf("%d",&choice);
        switch(choice)  
        {
            case 1:
            printf("Enter the value in centimetres\n");
            scanf("%f",&value);
            result=value/100.0;
            printf("%.2fcm = %f.2f",value,result);
            break;
            case 2:
            printf("Enter the value in metres\n");
            scanf("%f",&value);
            result=value*100.0;
            printf(" %f.2f = %.2f ",value,result);
            break;
            case 3:
            printf("Enter value in kilograms\n");
            scanf("%f",&value);
            result=value*1000.0;
            printf("%.2f",result);
            break;
            case 4:
            printf("Enter value in grams\n");
            scanf("%f",&value);
            result=value/1000.0;
            printf("%.2f = %.2f ",value,result);
            break;
            case 5:
            printf("Enter value in kilometre\n");
            scanf("%f",&value);
            result=value*1000.0;
            printf("%.2f = %.2f ",value,result);
            break;
            case 6:
            printf("Enter the value in metre");
            scanf("%f",&value);
            result=value/1000.0;
            printf(" %.2f = %.2f ",value,result);
            break;
            default:
                    printf("Invalid choice");

        }  
        return 0;       
                  
   }