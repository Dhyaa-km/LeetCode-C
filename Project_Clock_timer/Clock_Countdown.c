#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>  // used in sleep function

// show current time 
void digitalClock() {
    while (1) {
        time_t t;
        struct tm *current;

        time(&t);                  // Get current time
        current = localtime(&t);   // Convert to local time

        system("clear");

        printf("==== DIGITAL CLOCK ====\n");
        printf("Current Time: %02d:%02d:%02d\n",
               current->tm_hour, current->tm_min, current->tm_sec);

        sleep(1);  // Wait for 1 second
    }
}

// countdown timer
void countdownTimer(int hours, int minutes, int seconds) {
    int total = hours * 3600 + minutes * 60 + seconds;

    while (total >= 0) {
        system("clear");  

        int h = total / 3600;
        int m = (total % 3600) / 60;
        int s = total % 60;

        printf("==== COUNTDOWN TIMER ====\n");
        printf("Remaining: %02d:%02d:%02d\n", h, m, s);

        sleep(1);
        total--;
    }

    printf("\n Time's up!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n=== CLOCK MENU ===\n");
        printf("1. Show Digital Clock\n");
        printf("2. Countdown Timer\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            digitalClock();  // Infinite until Ctrl+C
        } else if (choice == 2) {
            int h, m, s;
            printf("Enter hours: ");
            scanf("%d", &h);
            printf("Enter minutes: ");
            scanf("%d", &m);
            printf("Enter seconds: ");
            scanf("%d", &s);
            countdownTimer(h, m, s);
        } else if (choice == 0) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
