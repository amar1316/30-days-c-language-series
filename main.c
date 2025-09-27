/* Pointers in C (part 1 - Basics of Pointers )*/

#include <stdio.h>


int main()
{
  int a =10 ;
  int *ptr;
  ptr = &a;

  printf("Value of a : %d\n",a);
  printf("Address of a : %p\n",&a);
  printf("Pointer ptr stores address : %p\n",ptr);
  printf("Pointer *ptr stores value : %d\n",*ptr);

    return 0;
}
