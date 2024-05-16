/*
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996) 
// for storing the flight information the struct is created. 
struct FlightInfo
{
    char* destination;
    char* date;
};
// Function prototype
void fillFlightInfo(FlightInfo* flight, const char* destination, const char* date);
void printFlightInfo(FlightInfo flights[], int counting);

int main()
{
    FlightInfo flights[10] = { 0 };
    char destination[31] = { 0 };
    char date[31] = { 0 };

    printf("Please enter the destination and date for 10 flights.\n");// printing 
    printf("For each flight, enter the destination on the first line and the date on the second line.\n\n");
    // printing destination and date on different lines.

    for (int i = 0; i < 10; i++) // to input information for 10 entry of the flight. 
    {
        printf("Enter destination for flight %d: ", i + 1);
        fgets(destination, 31, stdin);
        destination[strcspn(destination, "\n")] = '\0'; // to remove new line character.

        printf("Enter date for flight %d: ", i + 1);
        fgets(date, 31, stdin);
        date[strcspn(date, "\n")] = '\0'; // to remove new line character.

        fillFlightInfo(&flights[i], destination, date);
    }

    printf("\nFlight Information:\n");
    printFlightInfo(flights, 10);
    // to free memory allocating for next flight information to store.
    free(flights->destination);
    free(flights->date);
    return 0;
}
// to fill information for the singlr flight.
void fillFlightInfo(FlightInfo* flight, const char* destination, const char* date)
{
    if (flight->destination = (char*)malloc(strlen(destination) + 1)) 
    {
        // copying destination to allocate the memory. 
        strncpy(flight->destination, destination, 31);
    }
    if (flight->date = (char*)malloc(strlen(date) + 1))
    {
        // copying date to allocate the memory. 
        strncpy(flight->date, date, 31);
    }
}
// printing the flights information 
void printFlightInfo(FlightInfo flights[], int counting) 
{
    for (int i = 0; i < counting; i++) {
        printf("%-35s%-35s\n", flights[i].destination, flights[i].date);// printing destination and date in the coloumns. 
    }
}