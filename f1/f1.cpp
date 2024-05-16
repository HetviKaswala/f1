#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996) 
// Define the struct to store flight information
typedef struct {
    char* destination;
    char* date;
} FlightInfo;

void fillFlightInfo(FlightInfo* flight, const char* destination, const char* date);
void printFlightInfo(FlightInfo flights[], int count);

int main() {
    FlightInfo flights[10];
    char destination[31], date[31];

    // Prompt the user for input
    printf("Please enter the destination and date for 10 flights.\n");
    printf("For each flight, enter the destination on the first line and the date on the second line.\n\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter destination for flight %d: ", i + 1);
        fgets(destination, 31, stdin);
        destination[strcspn(destination, "\n")] = '\0'; // Remove newline character

        printf("Enter date for flight %d: ", i + 1);
        fgets(date, 31, stdin);
        date[strcspn(date, "\n")] = '\0'; // Remove newline character

        fillFlightInfo(&flights[i], destination, date);
    }

    printf("\nFlight Information:\n");
    printFlightInfo(flights, 10);

    // Free the allocated memory
    free(flights->destination);
    free(flights->date);


    return 0;
}
void fillFlightInfo(FlightInfo* flight, const char* destination, const char* date) {
    // Allocate memory for the destination and date strings
    if (flight->destination = (char*)malloc(strlen(destination) + 1)) {
        strncpy(flight->destination, destination, 31);
    }
    if (flight->date = (char*)malloc(strlen(date) + 1)) {
        strncpy(flight->date, date, 31);
    }
    // Copy the destination and date strings to the struct

}

// Function to display the flight information
void printFlightInfo(FlightInfo flights[], int count) {
    for (int i = 0; i < count; i++) {
        printf("%-35s%-35s\n", flights[i].destination, flights[i].date);
    }
}