#include<stdio.h>

int main() {
    int n;
    printf("Enter The Number Of Process:");
    scanf("%d", &n);

    int bt[n], tat[n], wt[n], tq, sq = 0, rem_bt[n], temp;
    float avgtat = 0, avgwt = 0;
    
    for (int i = 0; i < n; i++) {
        printf("Enter The Burst Time Of Process P%d: ", i);
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];
    }
    
    printf("Enter The Time Quantum :");
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
                temp = rem_bt[i];
                rem_bt[i] = 0;
                sq += temp; // Increment total time
                tat[i] = sq; // Calculate turnaround time
            }
        }
        if (cnt == n) { // All processes completed
            break;
        }
    }

    printf("Process\tBt\tTat\tWt\n");
    for (int i = 0; i < n; i++) {
        wt[i] = tat[i] - bt[i];
        avgwt += wt[i];
        avgtat += tat[i];
        printf("%d\t%d\t%d\t%d\n", i, bt[i], tat[i], wt[i]);
    }
    avgwt /= n;
    avgtat /= n;
    printf("Average Waiting Time Is %f\n", avgwt);
    printf("Average Turnaround Time Is %f\n", avgtat);

    return 0;
}

