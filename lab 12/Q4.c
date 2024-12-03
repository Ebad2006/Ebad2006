#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[30];
    char author[30];
    int year;
} Book;

typedef struct {
    int libid;
    int book_count;
    Book *books;
} Library;

int main() {
    int n;
    printf("Enter the Number of Libraries you want to enter: ");
    scanf("%d", &n);

    Library *lib = (Library *)calloc(n, sizeof(Library));
    if (lib == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter the Library ID for Library %d: ", i + 1);
        scanf("%d", &lib[i].libid);

        printf("Enter the Number of Books in Library %d: ", i + 1);
        scanf("%d", &lib[i].book_count);

        lib[i].books = (Book *)calloc(lib[i].book_count, sizeof(Book));
        if (lib[i].books == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        for (int j = 0; j < lib[i].book_count; j++) {
            printf("\nEnter the Title of Book %d for Library %d: ", j + 1, i + 1);
            getchar();
            fgets(lib[i].books[j].title, sizeof(lib[i].books[j].title), stdin);
            lib[i].books[j].title[strcspn(lib[i].books[j].title, "\n")] = '\0';

            printf("Enter the Author of Book %d for Library %d: ", j + 1, i + 1);
            fgets(lib[i].books[j].author, sizeof(lib[i].books[j].author), stdin);
            lib[i].books[j].author[strcspn(lib[i].books[j].author, "\n")] = '\0';

            printf("Enter the Publication Year of Book %d for Library %d: ", j + 1, i + 1);
            scanf("%d", &lib[i].books[j].year);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("\nLibrary ID: %d\n", lib[i].libid);
        for (int j = 0; j < lib[i].book_count; j++) {
            printf("%-30s %-30s %-4d\n", 
                lib[i].books[j].title, 
                lib[i].books[j].author, 
                lib[i].books[j].year);
        }
    }

    for (int i = 0; i < n; i++) {
        free(lib[i].books);
    }
    free(lib);

    return 0;
}