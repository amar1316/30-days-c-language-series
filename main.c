/* Decision making statemnets  program using c lanugage */

/*  1.simple days program using switch case statement
    2.Menu drive program of calculator using switch case statement

      */


#include <stdio.h>

int main() {

   int days ;

   printf("Enter days (1-7) : ");
   scanf("%d",&days);


   switch(days){

    case 1 : printf("Monday\n");
    break;

    case 2 : printf("Tuesday\n");
    break;

    case 3 : printf("Wednesday\n");
    break;

    case 4 : printf("Thursday\n");
    break;

    case 5 : printf("Friday\n");
    break;

    case 6 : printf("Saturday\n");
    break;

    case 7 : printf("Sunday\n");
    break;

    default : printf("Invalid Choice\n");


   }



    return 0;
}




