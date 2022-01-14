 #include<stdio.h>

int main() {

    /*FILE *myfile;
    //char tobe = 'N';
    //char tobe[10];
    myfile = fopen("Tomi.txt", "r");

    //printf("%d", fputc(tobe, myfile));
    //tobe  = fgetc(myfile);
    //printf("%c", tobe);
    //fputs(tobe, myfile);
    //fgets(tobe, 10, myfile);
    int pos = ftell(myfile);
    printf("%d", pos);
    fclose(myfile);*/

    FILE *myfile;

    char firstname[20];
    char lastname[20];
    char space[2] = " ";
    char choice[2];
    char saveDetails[2];

    void enterData() {
        puts("Enter your details.");
        puts("1. Enter your first name:");
        gets(firstname);
        puts("\n2. Enter your last name:");
        gets(lastname);
        puts("Do you want to save this details? Y/N");
        gets(saveDetails);
        if(strcmp(saveDetails, "Y") || strcmp(saveDetails, "y")  == 0) {
            myfile = fopen("user.txt", "a");
            fputs(firstname, myfile);
            fputs(space, myfile);
            fputs(lastname, myfile);
            fclose(myfile);
            puts("Your details have been saved!");
        } else {
            puts("details not saved.");
            enterData();
        }
    }

    void viewData() {
        myfile = fopen("user.txt" , "r");
        printf("Your details are %s", fgets(firstname, 20, myfile));
    }

    puts("1. Enter data.");
    puts("2. View data");
    gets(choice);
    if(strcmp(choice, "1") == 0) {
        enterData();

    } else if(strcmp(choice, "2") == 0) {
        viewData();
    }



    return 0;
}
