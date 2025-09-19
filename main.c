/* output & input in C */

/* int roll;
    float marks;
    char grade;

 */

#include <stdio.h>

int main()
{
    int roll;
    float marks;
    char grade;

    printf("Enter roll number = ");
    scanf("%d",&roll);

    printf("Enter marks = ");
    scanf("%f",&marks);

    printf("Enter grade = ");
    scanf(" %c",&grade);

    printf("\n----Student Details----\n");
    printf("roll : %d\n",roll);
    printf("marks : %f\n",marks);
    printf("grade : %c\n",grade);

    return 0;
}
