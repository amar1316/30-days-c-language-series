/* Array Operations program using c *.

/*  1.Traversing and printing 5 integers
    2.Insert element 99 at index 2
        int arr[6] = {10, 20, 30, 40, 50};
        int n = 5; // current size
        int pos = 2, value = 99;
    3.  Update element at index 4
*/

#include <stdio.h>


int main()
{
   int arr[5] = {10, 20, 30, 40, 50};

        arr[4]=70;

        printf("After update elements : \n");
        for(int i=0;i<5;i++)
        {
            printf("%d\n",arr[i]);
        }

    return 0;
}
