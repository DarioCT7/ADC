#include <stdio.h>
#include <unistd.h>

void showLoading(int barLength)  // [##################]   100% Done...!
{
    for (int percent = 1; percent <= 100; percent++)
    {
        int num_char = (percent * barLength) / 100;  
        printf("\r[");
        for (int i = 0; i < num_char; i++)
            printf("#");
        for (int i = num_char; i < barLength; i++)
            printf(" ");
        printf("] %d %%", percent);
        usleep(10000);  // Sleep for 10 milliseconds
        fflush(stdout); // Asegúrate de que la salida se muestre inmediatamente
    }
    printf(" Done...!\n");
}

void showSpinner()
{
    const char *spinner = "|/-\\";
    for (int i = 0; i < 100; i++)
    {
        printf("\r%c  %d %%  ", spinner[i % 4], i );
        fflush(stdout); // Asegúrate de que la salida se muestre inmediatamente
        usleep(100000); // Sleep for 100 milliseconds
    }
}