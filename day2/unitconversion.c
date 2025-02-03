#include<stdio.h>
int main()
{
   int choice;
   float value,result;
   //Display the menu
   printf("1 Centimeters to Ceters\n");
   printf("2 Meters to Centimeters\n");
   printf("3 Kilograms to Grams\n");
   printf("4 Grams to Kilograms\n");
   printf("5 Kilometers to meters\n");
   printf("6 Meters to Centimeters\n");
   printf("7 exit\n");
   //get user choice
     printf("Enter your choice(1-7)\n");
     scanf("%d",&choice);
     //perform the selected conversion
     switch(choice)
     {
       case 1: //Centimeters to meters
       printf("Enter the value in Centimeters\n");
       scanf("%f",&value);
       result=value/100.0;
       printf("%.2f cm = %.2f m\n",value,result);
       break;
       case 2:  //Meters to Centimeters
       printf("Enter the value in meters\n");
       scanf("%f",&value);
       result=value*100.0;
       printf(" %.2f m = %.2f cm\n ",value,result);
       break;
       case 3:  //Kilograms to Grams
       printf("Enter the value in Kilograms\n");
       scanf("%f",&value);
       result=value*1000.0;
       printf("%.2f kg = %.2f g\n",value,result);
       break;
       case 4:
       printf("Enter the value in Grams\n");
       scanf("%f",&value);
       result=value/1000.0;
       printf("%.2f kg = %.2f g",value,result);
       break;
       case 5: // Kilometers to meters
       printf("Enter value in Kilometers \n");
       scanf("%f",&value);
       result=value*1000.0;
       printf("%.2f km = %.2f m",value,result);
       break;
       case 6: //Meters to Kilometrs
       printf("Enter value in Meters\n");
       scanf("%f",&value);
       result=value/1000.0;
       printf("%.2f m = %.2f km ",value,result);
       break;
       default:
         printf("exit");
     }
     return 0;
}


