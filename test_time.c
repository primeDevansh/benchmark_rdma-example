#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

// void delay(int number_of_ms) {
//     clock_t start_time = clock();

//     // looping till required time is not achieved
//     while (clock() < start_time + number_of_ms);
// }

int main() {
    struct timeval t1, t2;
    double elapsedTime;

    gettimeofday(&t1, NULL);
    usleep(1000);
    gettimeofday(&t2, NULL);

    elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
    elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms
    printf("\nElapsed time for delay is : %.8f ms\n", elapsedTime);
    return 0;
}