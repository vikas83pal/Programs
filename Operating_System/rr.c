#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int bt[n], at[n], tat[n], wt[n], tq, sq = 0, rem_bt[n], temp;
    float avgtat = 0, avgwt = 0;
    
    for (int i = 0; i < n; i++) {
        printf("Enter the burst time of process P%d: ", i + 1); // Adjusted process numbering
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the arrival time of process P%d: ", i + 1); // Adjusted process numbering
        scanf("%d", &at[i]);
    }
    
    printf("Enter the time quantum: ");
    scanf("%d", &tq);

    while (1) {
        int cnt = 0; // Reset count of completed processes
        for (int i = 0; i < n; i++) {
            if (rem_bt[i] == 0) {
                cnt++;
                continue;
            }
            if (rem_bt[i] > tq) {
                rem_bt[i] -= tq;
                sq += tq; // Increment total time
            } else {
                sq += rem_bt[i]; // Increment total time by remaining burst time
                tat[i] = sq - at[i]; // Calculate turnaround time
                rem_bt[i] = 0;
            }
        }
        if (cnt == n) { // All processes completed
            break;
        }
    }

    printf("Process\tBt\tAt\tTat\tWt\n");
    for (int i = 0; i < n; i++) {
        wt[i] = tat[i] - bt[i];
        avgwt += wt[i];
        avgtat += tat[i];
        printf("%d\t%d\t%d\t%d\t%d\n", i + 1, bt[i], at[i], tat[i], wt[i]); // Adjusted process numbering
    }
    avgwt /= n;
    avgtat /= n;
    printf("Average Waiting Time is %f\n", avgwt);
    printf("Average Turnaround Time is %f\n", avgtat);

    return 0;
}
