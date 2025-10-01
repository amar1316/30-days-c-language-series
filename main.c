/* Pointer Arrays using C language */

#include <stdio.h>

void display(int *p,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(p+i));
    }
}



int main()
{
    int arr[5] = {1,2,3,4,5};
    display(arr,5);


    return 0;
}

