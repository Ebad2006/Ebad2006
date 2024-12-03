/*Create a program to calculate the average marks of a class of students using a structure.
The program should ask for the number of students and input their details dynamically.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Student details
struct Student
{
    char name[50];
    int marks;
    int ID;
};

int main()
{
    int n, i;
    float avg = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamic memory allocation for students
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details for each student
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);

        while (getchar() != '\n')
            ;

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Remove newline character added by fgets
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n')
        {
            students[i].name[len - 1] = '\0';
        }
        printf("Id: ");
        scanf("%d", &students[i].ID);

        printf("Marks: ");
        scanf("%d", &students[i].marks);
        avg += students[i].marks;
    }

    // Calculate average
    avg /= n;

    // Display the average
    printf("\nThe average marks of the class is: %.2f\n", avg);

    // Free dynamically allocated memory
    free(students);

    return 0;
}
