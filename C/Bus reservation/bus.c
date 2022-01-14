#include<stdio.h>
struct customer{
    char destination[2];//destination chosen
    char time[2]; // time chosen
    char seats[3];// number of seats bought
};
void anthony() {
    FILE *busReserve;
    struct customer user;
    puts("What time would you like to board the bus?");
    puts("From Ketu - Anthony, bus will be avaliable at these times: 9:00am, 1:00pm & 5:00pm");
    puts("Press 1 for 9:00am.");
    puts("Press 2 for 1:00pm.");
    puts("Press 3 for 5:00pm.");
    puts("Press * to cancel.");
    gets(user.time);

    //busReserve = fopen("BusReservation.txt", "r");

    if(strcmp(user.time, "1") == 0) {
    puts("How many seats would you like to purchase?");
    gets(user.seats);
        busReserve = fopen("BusReservation.txt", "a");
        //fputs("/n", busReserve);
        fputs("Time: 9:00am\t", busReserve);
        fputs("Destination: Anthony\t", busReserve);
        fputs("seat.no: ", busReserve);
        fputs(user.seats, busReserve);
        //create random number for them to access reservation details.
        fputs("\n", busReserve);
        fclose(busReserve);
        puts("space reserved.");
    } else if(strcmp(user.time, "2") == 0) {
        puts("How many seats would you like to purchase?");
        gets(user.seats);
            busReserve = fopen("BusReservation.txt", "a");
            //fputs("/n", busReserve);
            fputs("Time: 1:00pm\t", busReserve);
            fputs("Destination: Anthony\t", busReserve);
            fputs("seat.no: ", busReserve);
            fputs(user.seats, busReserve);
            //create random number for them to access reservation details.
            fputs("\n", busReserve);
            fclose(busReserve);
            puts("space reserved.");
    } else if(strcmp(user.time, "3") == 0) {
        puts("How many seats would you like to purchase?");
        gets(user.seats);
            busReserve = fopen("BusReservation.txt", "a");
            //fputs("/n", busReserve);
            fputs("Time: 5:00pm\t", busReserve);
            fputs("Destination: Anthony\t", busReserve);
            fputs("seat.no: ", busReserve);
            fputs(user.seats, busReserve);
            //create random number for them to access reservation details.
            fputs("\n", busReserve);
            fclose(busReserve);
            puts("space reserved.");
    } else if(strcmp(user.time, "*") == 0) {
        puts("Thank you!");
    } else {
        puts("Invalid choice.");
        puts("Try again.");
        anthony();
    }
}
void ketu() {
    FILE *busReserve;
    struct customer user;
    puts("What time would you like to board the bus?");
    puts("From Anthony - Ketu, bus will be avaliable at these times: 11:00am, 3:00pm & 7:00pm");
    puts("Press 1 for 11:00am.");
    puts("Press 2 for 3:00pm.");
    puts("Press 3 for 7:00pm.");
    puts("Press * to cancel.");
    gets(user.time);

    //busReserve = fopen("BusReservation.txt", "r");

    if(strcmp(user.time, "1") == 0) {
    puts("How many seats would you like to purchase?");
    gets(user.seats);
        busReserve = fopen("BusReservation.txt", "a");
        //fputs("/n", busReserve);
        fputs("Time: 11:00am\t", busReserve);
        fputs("Destination: Ketu\t", busReserve);
        fputs("seat.no: ", busReserve);
        fputs(user.seats, busReserve);
        //create random number for them to access reservation details.
        fputs("\n", busReserve);
        fclose(busReserve);
        puts("space reserved.");
    } else if(strcmp(user.time, "2") == 0) {
        puts("How many seats would you like to purchase?");
        gets(user.seats);
            busReserve = fopen("BusReservation.txt", "a");
            //fputs("/n", busReserve);
            fputs("Time: 3:00pm\t", busReserve);
            fputs("Destination: Ketu\t", busReserve);
            fputs("seat.no: ", busReserve);
            fputs(user.seats, busReserve);
            //create random number for them to access reservation details.
            fputs("\n", busReserve);
            fclose(busReserve);
            puts("space reserved.");
    } else if(strcmp(user.time, "3") == 0) {
        puts("How many seats would you like to purchase?");
        gets(user.seats);
            busReserve = fopen("BusReservation.txt", "a");
            //fputs("/n", busReserve);
            fputs("Time: 7:00pm\t", busReserve);
            fputs("Destination: Ketu\t", busReserve);
            fputs("seat.no: ", busReserve);
            fputs(user.seats, busReserve);
            //create random number for them to access reservation details.
            fputs("\n", busReserve);
            fclose(busReserve);
            puts("space reserved.");
    } else if(strcmp(user.time, "*") == 0) {
        puts("Thank you!");
    } else {
        puts("Invalid choice.");
        puts("Try again.");
        ketu();
    }
}
int main() {

    FILE *busReserve;
    struct customer user;
    puts("Bus Reservation.");
    //puts("The bus has 20 seats only.");
    puts("You can only board this bus if going from Ketu or Anthony.");
    puts("Bus goes from Ketu - Anthony & Anthony - Ketu.");
    puts("You should arrive at your destination in an hour or less. Without heavy traffic delay.");

    puts("Where would you be heading to?");
    puts("Press 1 to Anthony.");
    puts("Press 2 to Ketu.");
    puts("Press * to cancel.");
    gets(user.destination);
    if(strcmp(user.destination, "1") == 0) {
        anthony();
    } else if(strcmp(user.destination, "2") == 0) {
        ketu();
    } else if(strcmp(user.destination, "*") == 0) {
        puts("Thank you!");
    } else {
        puts("Try again");
        puts("Kindly pick a location.");
        main();
    }

    return 0;
}
