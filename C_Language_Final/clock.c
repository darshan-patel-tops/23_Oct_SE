#include <stdio.h>
#include <windows.h>  // For Windows-based systems; you can replace this with a suitable sleep function on other platforms

int main() {
    int hours, minutes, seconds;

    printf("Simple Digital Clock\n");

    for (;;) {
        for (hours = 0; hours < 24; hours++) {
            for (minutes = 0; minutes < 60; minutes++) {
                for (seconds = 0; seconds < 60; seconds++) {
                    system("cls");  // Clear the screen (Windows-specific, adapt for other platforms)

                    printf("Digital Clock\n");
                    printf("%02d:%02d:%02d", hours, minutes, seconds);

                    // Sleep for one second (Windows-specific, adapt for other platforms)
                    Sleep(1000);
                }
            }
        }
    }

    return 0;
}
