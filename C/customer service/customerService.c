#include<stdio.h>
#include<string.h>

struct customers {
    char accountNumber[11];
    char language[2]; //language chosen
    char acctNum[11];
    char choice[2]; //what they want to do.
    char reset[2];// reset password or pin
    char oldPassword[50];
    char newPassword1[50];
    char newPassword2[50];
    char another[2];
    int oldPin, newPin1, newPin2;
};

int main() {


        struct customers user1;

        int beginning() {

            puts("How may we help you?");
            puts("Press 1 to listen in English.");
            puts("Press 2 to listen in Yoruba.");
            puts("Press 3 to listen in Pidgin.");
            puts("Press * to cancel.");
            gets(user1.language);

            if(strcmp(user1.language, "1") == 0) {
                puts("Enter your account number, as it'll be used to make any request.");
                gets(user1.acctNum);

                int english() {
                    puts("To reset your password/pin, press 1");
                    puts("To check your account balance, press 2");
                    puts("To request for monthly statement, press 3.");
                    puts("To report fraud, press 4");
                    puts("For other enquiries, press 5.");
                    puts("press * to cancel");
                    gets(user1.choice);
                    if(strcmp(user1.choice, "1") == 0) {
                        puts("Press 1 to reset password.");
                        puts("Press 2 to reset pin.");
                        gets(user1.reset);
                        if(strcmp(user1.reset, "1") == 0) {
                            int changePassword() {
                                puts("Enter old password: ");
                                gets(user1.oldPassword);
                                puts("Enter new password: ");
                                gets(user1.newPassword1);
                                puts("Enter new password again: ");
                                gets(user1.newPassword2);
                                if(strcmp(user1.newPassword1, user1.newPassword2) == 0) {
                                    puts("Password Successfully changed");
                                    puts("Want to make another transaction?");
                                    puts("Press 1 for yes.");
                                    puts("Press 2 for no.");
                                    gets(user1.another);
                                    if(strcmp(user1.another, "1") == 0) {
                                        english();
                                    } else {
                                        puts("Thank you for banking with us.");
                                        return 0;
                                    }
                                } else {
                                    puts("Passwords don't match.");
                                    changePassword();
                                }
                            }
                            changePassword();
                        }
                        else if(strcmp(user1.reset, "2") == 0) {
                            int changePin() {
                                puts("Enter old pin: ");
                                scanf("%d", &user1.oldPin);
                                puts("Enter new pin: ");
                                scanf("%d", &user1.newPin1);
                                puts("Enter new pin again: ");
                                scanf("%d", &user1.newPin2);
                                    if(user1.newPin1 == user1.newPin2) {
                                        puts("Pin Successfully changed");
                                        puts("Want to make another transaction?");
                                        puts("Press 1 for yes.");
                                        puts("Press 2 for no.");
                                        gets(user1.another);
                                        if(strcmp(user1.another, "1") == 0) {
                                            english();
                                        } else {
                                            puts("Thank you for banking with us.");
                                            return 0;
                                        }
                                    }
                                    else {
                                        puts("Pins don't match.");
                                        changePin();
                                    }
                            }
                            changePin();
                        }
                        else {
                            puts("Invalid choice!");
                            return 0;
                        }
                    }
                    else if(strcmp(user1.choice, "2") == 0) {
                        puts("You have 2,000 naira in your account.");
                        puts("Want to make another transaction?");
                        puts("Press 1 for yes.");
                        puts("Press 2 for no.");
                        gets(user1.another);
                        if(strcmp(user1.another, "1") == 0) {
                            english();
                        } else {
                            puts("Thank you for banking with us.");
                            return 0;
                        }
                    }
                    else if(strcmp(user1.choice, "3") == 0) {
                        puts("Your monthly statement will be spent to your email within 24 hours.");
                        puts("Want to make another transaction?");
                        puts("Press 1 for yes.");
                        puts("Press 2 for no.");
                        gets(user1.another);
                        if(strcmp(user1.another, "1") == 0) {
                            english();
                        } else {
                            puts("Thank you for banking with us.");
                            return 0;
                        }
                    }
                    else if(strcmp(user1.choice, "4") == 0) {
                        puts("You will be redirected to speak to our customer care agent.");
                        puts("Want to make another transaction?");
                        puts("Press 1 for yes.");
                        puts("Press 2 for no.");
                        gets(user1.another);
                        if(strcmp(user1.another, "1") == 0) {
                            english();
                        } else {
                            puts("Thank you for banking with us.");
                            return 0;
                        }
                    }
                    else if(strcmp(user1.choice, "5") == 0) {
                        puts("You will be redirected to speak to our customer care agent.");
                        puts("Want to make another transaction?");
                        puts("Press 1 for yes.");
                        puts("Press 2 for no.");
                        gets(user1.another);
                        if(strcmp(user1.another, "1") == 0) {
                            english();
                        } else {
                            puts("Thank you for banking with us.");
                            return 0;
                        }
                    }
                    else if(strcmp(user1.choice, "*") == 0) {
                        puts("Thank you for banking with us.");
                        return 0;
                    }
                }
                english();
                return 0;
            }
            else if(strcmp(user1.language, "2") == 0) {
                puts("In Yoruba");
            }
            else if(strcmp(user1.language, "3") == 0) {
                puts("In Pidgin");
            }
            else if(strcmp(user1.language, "*") == 0) {
                puts("Thank you for banking with us.");
                return 0;
            }
            else {
                puts("Invalid choice!");
                beginning();
            }

            return 0;
        }

        puts("Welcome to Alat.");
        puts("A digital interactive bank by Wema.");
        puts("This call is being monitored and recorded.");
        beginning();
    return 0;

}



