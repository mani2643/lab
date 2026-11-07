#include <stdio.h>
#include <string.h>
//C Program using structures to maintain a book library (Book is a structure) which has
// following operations print various types of books along with their count, author
// details, search a book by author name or book name orpublisher
#define MAX 100

struct book {
    int id;
    char name[50];
    char author[50];
    char publisher[50];
    char type[30];
};

// Function to read a string including spaces
void readString(char str[], int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

// Function to display all books
void displayBooks(struct book b[], int n) {
    printf("\nBook Details:\n");

    for(int i = 0; i < n; i++) {
        printf("\nBook ID: %d", b[i].id);
        printf("\nBook Name: %s", b[i].name);
        printf("\nAuthor: %s", b[i].author);
        printf("\nPublisher: %s", b[i].publisher);
        printf("\nBook Type: %s\n", b[i].type);
    }
}

// Function to print different types of books and their count
void bookTypes(struct book b[], int n) {
    int count;

    printf("\nTypes of Books and Their Counts:\n");

    for(int i = 0; i < n; i++) {
        int found = 0;

        // Check whether this type was already processed
        for(int j = 0; j < i; j++) {
            if(strcmp(b[i].type, b[j].type) == 0) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            count = 0;

            printf("\nType: %s\n", b[i].type);

            for(int j = 0; j < n; j++) {
                if(strcmp(b[i].type, b[j].type) == 0) {
                    count++;
                    printf("  %s\n", b[j].name);
                }
            }

            printf("Total Books: %d\n", count);
        }
    }
}

// Function to display author details
void authorDetails(struct book b[], int n) {
    int found = 0;

    printf("\nAuthor Details:\n");

    for(int i = 0; i < n; i++) {
        int alreadyPrinted = 0;

        for(int j = 0; j < i; j++) {
            if(strcmp(b[i].author, b[j].author) == 0) {
                alreadyPrinted = 1;
                break;
            }
        }

        if(alreadyPrinted == 0) {
            found = 1;
            printf("\nAuthor Name: %s\n", b[i].author);
            printf("Books written:\n");

            for(int j = 0; j < n; j++) {
                if(strcmp(b[i].author, b[j].author) == 0) {
                    printf("- %s\n", b[j].name);
                }
            }
        }
    }

    if(found == 0) {
        printf("No authors found.\n");
    }
}

// Function to search a book
void searchBook(struct book b[], int n) {
    int choice, found = 0;
    char key[50];

    printf("\nSearch Book By:\n");
    printf("1. Author Name\n");
    printf("2. Book Name\n");
    printf("3. Publisher Name\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();

    printf("Enter search name: ");
    readString(key, sizeof(key));

    for(int i = 0; i < n; i++) {
        int match = 0;

        if(choice == 1 && strcmp(b[i].author, key) == 0)
            match = 1;

        else if(choice == 2 && strcmp(b[i].name, key) == 0)
            match = 1;

        else if(choice == 3 && strcmp(b[i].publisher, key) == 0)
            match = 1;

        if(match) {
            found = 1;

            printf("\nBook Found!\n");
            printf("Book ID: %d\n", b[i].id);
            printf("Book Name: %s\n", b[i].name);
            printf("Author: %s\n", b[i].author);
            printf("Publisher: %s\n", b[i].publisher);
            printf("Type: %s\n", b[i].type);
        }
    }

    if(found == 0) {
        printf("\nNo matching books found.\n");
    }
}

int main() {
    struct book b[MAX];
    int n, choice;

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    if(n < 1 || n > MAX) {
        printf("Invalid number of books.\n");
        return 0;
    }

    // Reading book details
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of Book %d:\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);
        getchar();

        printf("Enter Book Name: ");
        readString(b[i].name, sizeof(b[i].name));

        printf("Enter Author Name: ");
        readString(b[i].author, sizeof(b[i].author));

        printf("Enter Publisher Name: ");
        readString(b[i].publisher, sizeof(b[i].publisher));

        printf("Enter Book Type: ");
        readString(b[i].type, sizeof(b[i].type));
    }

    // Menu-driven operations
    do {
        printf("\n\n===== BOOK LIBRARY MENU =====\n");
        printf("1. Display All Books\n");
        printf("2. Display Types of Books and Count\n");
        printf("3. Display Author Details\n");
        printf("4. Search a Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                displayBooks(b, n);
                break;

            case 2:
                bookTypes(b, n);
                break;

            case 3:
                authorDetails(b, n);
                break;

            case 4:
                searchBook(b, n);
                break;

            case 5:
                printf("Exiting Book Library.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}
