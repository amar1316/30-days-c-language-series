/* String function using c language */

/* 1.strlen(str)
   2.strcpy(str2,str1)
   3.strcat(str1,str2)
*/



#include <stdio.h>
#include <string.h>

int main()
{
    char str1[40] = "kindruth";

    char str2[20]= "_edu";

    strcat(str2,str1);

    printf("After concatination : %s\n",str2);

    return 0;
}
