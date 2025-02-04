#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>

#define RANDOM_LENGTH 16
#define TIME_LENGTH 20

char *str = NULL;

void signal_handle(int sig) {
    printf("\nCaught signal %d. Exiting...\n", sig);
    free(str);
    exit(0);
}

char *randomString()
{
    char *str = (char *)calloc(RANDOM_LENGTH, sizeof(char));

    for (int i = 0; i < RANDOM_LENGTH; i++){
        str[i] = rand() % (122 - 65 + 1) + 65;
    }

    return str;
}

void generateLog(){
    char timeStr[TIME_LENGTH];

    if(str == NULL){
        str = randomString();
    }

    // Get current time
    time_t now = time(NULL); // unix time format which is a number
    struct tm *timeinfo = localtime(&now); // converts unix time into meaning ful structure
    strftime(timeStr, TIME_LENGTH, "%Y-%m-%d_%H:%M:%S", timeinfo); // formats the structure
    // displaying log
    printf("%s %s\n", timeStr, str);
}

int main(int argc, char* argv[]){
    srand(time(NULL)); // disable seeding, random everytime
    setbuf(stdout, NULL);
    signal(SIGINT, signal_handle);

    while(1){
        generateLog();
        sleep(5);
    }

    // free
    free(str);
    return 0;
}