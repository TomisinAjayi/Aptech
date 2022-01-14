#include<stdio.h>
#include<string.h>

int main() {

    FILE *myBooks;

    char choice[2];
    char name[60];
    char author[50];
    char save[2];
    int bookId = 0;

    puts("Welcome to the library.");
    puts("Press 1 to add a book.");
    puts("Press 2 to borrow a book.");
    puts("Press 3 to return a book.");
    puts("Press 4 to view books.");
    puts("Press * to cancel");
    gets(choice);

    if(strcmp(choice, "1") == 0) {
        puts("Name of Book:");
        gets(name);
        puts("Name of Book Author:");
        gets(author);
        puts("Do you want to save this book? Y/N");
        gets(save);
        if(strcmp(save, "Y") || strcmp(save, "y") == 0) {
            myBooks = fopen("libraryBooks.txt", "a");
            int x = fgetw(bookId, myBooks);
            x += 1;
            fputw(x, myBooks);
            fputs(" ", myBooks);
            fputs("Name of Book: ", myBooks);
            fputs(name, myBooks);
            fputs("\n", myBooks);
            fputs("Author: ", myBooks);
            fputs(author, myBooks);
            fputs("\n", myBooks);
            puts("Book saved successfully!");
            fclose(myBooks);
        } else {
            puts("Book not saved.");
        }
    } else if(strcmp(choice, "2") == 0) {
        //borrow a book, create file for student that borrowed book, the name and author.and date borrowed.
    } else if(strcmp(choice, "3") == 0) {
        //return a borrowed book.
    } else if(strcmp(choice, "4") == 0) {
        myBooks = fopen("libraryBooks.txt", "r");
        printf("%s", fgets(name, 60, myBooks));
        printf("%s", fgets(author, 50, myBooks));
        fclose(myBooks);
    }

    return 0;
}
