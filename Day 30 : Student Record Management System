
/* Project 2: Student Record Management System*/

#include <stdio.h>
#include <string.h>

struct Student {
int roll;
char name[50];
float marks;
};


int main() {
struct Student s[50];
int n = 0, choice, roll, found;
do {
printf("\n=== Student Record System ===\n");
printf("1. Add Student\n2. Display Students\n3. Search by Roll\n4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Roll, Name, Marks: ");
                scanf("%d %s %f", &s[n].roll, s[n].name, &s[n].marks);
                n++;
                break;

            case 2:
                printf("\n--- Student Records ---\n");
                for(int i=0; i<n; i++) {
                    printf("Roll: %d | Name: %s | Marks: %.2f\n", s[i].roll, s[i].name,
s[i].marks);
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);
                found = 0;
                for(int i=0; i<n; i++) {
                    if(s[i].roll == roll) {
                        printf("Found! Roll: %d | Name: %s | Marks: %.2f\n", s[i].roll,
s[i].name, s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Student not found!\n");
                break;

case 4:
printf("Exiting Student System...\n");
break;
default:
printf("Invalid Choice!\n");
}
} while(choice != 4);
return 0;
}
