#include <stdio.h>

int main() {
    int oxygen[3][3];  
    int sum[3] = {0};  
    int highest_avg = 0;
    int trainee_count = 0;
    for (int round = 0; round < 3; round++) {
        for (int trainee = 0; trainee < 3; trainee++) {
            scanf("%d", &oxygen[trainee][round]);

        
            if (oxygen[trainee][round] < 1 || oxygen[trainee][round] > 100) {
                printf("INVALID INPUT\n");
                return 0;  
            }
        }
    }
    for (int trainee = 0; trainee < 3; trainee++) {
        sum[trainee] = oxygen[trainee][0] + oxygen[trainee][1] + oxygen[trainee][2];
        int avg = sum[trainee] / 3;  
        if (avg > highest_avg) {
            highest_avg = avg;  
        }
    }
    if (highest_avg < 70) {
        printf("All trainees are unfit.\n");
        return 0;
    }
    for (int trainee = 0; trainee < 3; trainee++) {
        int avg = sum[trainee] / 3; 
        if (avg == highest_avg) {
            printf("Trainee Number : %d\n", trainee + 1);
        }
    }

    return 0;
}