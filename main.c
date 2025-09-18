/* Strings program using c language */


#include <stdio.h>

int main()
{
    char str[20] = "kindruthedu";

    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("Character %d : %c\n",i,str[i]);
    }


    return 0;
}
