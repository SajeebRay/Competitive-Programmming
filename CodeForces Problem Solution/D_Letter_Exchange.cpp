#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_MEMBERS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100
#define MAX_NAME_LENGTH 100
#define MAX_ADDRESS_LENGTH 100
#define MAX_CONTACT_LENGTH 15

struct Book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    char publisher[MAX_NAME_LENGTH];
    char ISBN[15];
};

struct Member {
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    char contact[MAX_CONTACT_LENGTH];
    struct Book* issuedBooks[MAX_BOOKS];
    int numIssuedBooks;
};

struct Library {
    struct Book books[MAX_BOOKS];
    struct Member members[MAX_MEMBERS];
    int numBooks;
    int numMembers;
};

// Function prototypes
void addBook(struct Library* library);
void addMember(struct Library* library);
void issueBook(struct Library* library);
void returnBook(struct Library* library);
void renewBook(struct Library* library);
void searchBook(struct Library* library);
void viewBooks(struct Library* library);
void viewMembers(struct Library* library);

int main() {
    struct Library library;
    library.numBooks = 0;
    library.numMembers = 0;

    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Add Member\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Renew Book\n");
        printf("6. Search Book\n");
        printf("7. View All Books\n");
        printf("8. View All Members\n");
        printf("9. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(&library);
                break;
            case 2:
                addMember(&library);
                break;
            case 3:
                issueBook(&library);
                break;
            case 4:
                returnBook(&library);
                break;
            case 5:
                renewBook(&library);
                break;
            case 6:
                searchBook(&library);
                break;
            case 7:
                viewBooks(&library);
                break;
            case 8:
                viewMembers(&library);
                break;
            case 9:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 9);

    return 0;
}

void addBook(struct Library* library) {
    if (library->numBooks == MAX_BOOKS) {
        printf("Maximum number of books reached.\n");
        return;
    }

    struct Book newBook;
    printf("Enter book title: ");
    scanf(" %[^\n]", newBook.title);
    printf("Enter book author: ");
    scanf(" %[^\n]", newBook.author);
    printf("Enter book publisher: ");
    scanf(" %[^\n]", newBook.publisher);
    printf("Enter book ISBN: ");
    scanf(" %[^\n]", newBook.ISBN);

    library->books[library->numBooks] = newBook;
    library->numBooks++;
    printf("Book added successfully.\n");
}

void addMember(struct Library* library) {
    if (library->numMembers == MAX_MEMBERS) {
        printf("Maximum number of members reached.\n");
        return;
    }

    struct Member newMember;
    printf("Enter member name: ");
    scanf(" %[^\n]", newMember.name);
    printf("Enter member address: ");
    scanf(" %[^\n]", newMember.address);
    printf("Enter member contact number: ");
    scanf(" %[^\n]", newMember.contact);

    newMember.numIssuedBooks = 0;
    library->members[library->numMembers] = newMember;
    library->numMembers++;
    printf("Member added successfully.\n");
}

void issueBook(struct Library* library) {
    if (library->numBooks == 0 || library->numMembers == 0) {
        printf("No books or members available.\n");
        return;
    }

    int memberIndex, bookIndex;
    printf("Enter member index: ");
    scanf("%d", &memberIndex);
    printf("Enter book index: ");
    scanf("%d", &bookIndex);

    if (memberIndex < 0 || memberIndex >= library->numMembers) {
        printf("Invalid member index.\n");
        return;
    }

    if (bookIndex < 0 || bookIndex >= library->numBooks) {
        printf("Invalid book index.\n");
        return;
    }

    struct Member* member = &library->members[memberIndex];
    struct Book* book = &library->books[bookIndex];

    if (member->numIssuedBooks == MAX_BOOKS) {
        printf("Member has reached the maximum limit of issued books.\n");
        return;
    }

    if (member->issuedBooks[member->numIssuedBooks] != NULL) {
        printf("Member already has an issued book.\n");
        return;
    }

    member->issuedBooks[member->numIssuedBooks] = book;
    member->numIssuedBooks++;

    printf("Book '%s' issued to member '%s'.\n", book->title, member->name);
}

void returnBook(struct Library* library) {
    if (library->numMembers == 0) {
        printf("No members available.\n");
        return;
    }

    int memberIndex;
    printf("Enter member index: ");
    scanf("%d", &memberIndex);

    if (memberIndex < 0 || memberIndex >= library->numMembers) {
        printf("Invalid member index.\n");
        return;
    }

    struct Member* member = &library->members[memberIndex];

    if (member->numIssuedBooks == 0) {
        printf("Member has no issued books.\n");
        return;
    }

    int bookIndex;
    printf("Enter book index: ");
    scanf("%d", &bookIndex);

    if (bookIndex < 0 || bookIndex >= member->numIssuedBooks) {
        printf("Invalid book index.\n");
        return;
    }

    struct Book* book = member->issuedBooks[bookIndex];
    member->issuedBooks[bookIndex] = NULL;

    printf("Book '%s' returned by member '%s'.\n", book->title, member->name);
}

void renewBook(struct Library* library) {
    if (library->numMembers == 0) {
        printf("No members available.\n");
        return;
    }

    int memberIndex;
    printf("Enter member index: ");
    scanf("%d", &memberIndex);

    if (memberIndex < 0 || memberIndex >= library->numMembers) {
        printf("Invalid member index.\n");
        return;
    }

    struct Member* member = &library->members[memberIndex];

    if (member->numIssuedBooks == 0) {
        printf("Member has no issued books.\n");
        return;
    }

    int bookIndex;
    printf("Enter book index: ");
    scanf("%d", &bookIndex);

    if (bookIndex < 0 || bookIndex >= member->numIssuedBooks) {
        printf("Invalid book index.\n");
        return;
    }

    // Renew book (perform additional logic if needed)
    printf("Book renewed successfully.\n");
}

void searchBook(struct Library* library) {
    if (library->numBooks == 0) {
        printf("No books available.\n");
        return;
    }

    char searchTitle[MAX_TITLE_LENGTH];
    printf("Enter book title to search: ");
    scanf(" %[^\n]", searchTitle);

    int found = 0;
    for (int i = 0; i < library->numBooks; i++) {
        if (strcmp(library->books[i].title, searchTitle) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", library->books[i].title);
            printf("Author: %s\n", library->books[i].author);
            printf("Publisher: %s\n", library->books[i].publisher);
            printf("ISBN: %s\n", library->books[i].ISBN);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void viewBooks(struct Library* library) {
    if (library->numBooks == 0) {
        printf("No books available.\n");
        return;
    }

    printf("Books:\n");
    for (int i = 0; i < library->numBooks; i++) {
        printf("%d. %s by %s\n", i, library->books[i].title, library->books[i].author);
    }
}

void viewMembers(struct Library* library) {
    if (library->numMembers == 0) {
        printf("No members available.\n");
        return;
    }

    printf("Members:\n");
    for (int i = 0; i < library->numMembers; i++) {
        printf("%d. %s\n", i, library->members[i].name);
    }
}
