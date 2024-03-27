#include<stdio.h>

int main() {
    int n;
    printf("Enter The Number Of Processes:");
    scanf("%d", &n);
    int p[n], at[n], bt[n], ct[n], tat[n], wt[n], temp;
    float avgtat = 0, avgwt = 0;

    // Input arrival time and burst time for each process
    for (int i = 0; i < n; i++) {
        printf("Enter The Arrival Time of p%d:", i);
        scanf("%d", &at[i]);
        printf("Enter The Burst Time of p%d:", i);
        scanf("%d", &bt[i]);
        p[i] = i; // Process ID
    }

    // Sort processes based on their arrival time
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (at[j] > at[j+1]) {
                // Swap arrival time
                temp = at[j];
                at[j] = at[j+1];
                at[j+1] = temp;
                // Swap burst time
                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = temp;
                // Swap process ID
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }

    // Calculate completion time (ct)
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += bt[i];
        ct[i] = sum;
    }

    // Calculate turnaround time (tat) and waiting time (wt)
    for (int i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i];
        avgtat += tat[i];
        wt[i] = tat[i] - bt[i];
        avgwt += wt[i];
    }

    avgtat /= n; // Calculate average turnaround time
    avgwt /= n; // Calculate average waiting time

    // Print process details
    printf("Process\tAt\tBt\tCt\tTat\twt\n");
    for (int i = 0; i < n; i++) {
        printf("p%d\t%d\t%d\t%d\t%d\t%d\n", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    // Print average turnaround time and average waiting time
    printf("Average Turnaround Time: %.2f\n", avgtat);
    printf("Average Waiting Time: %.2f\n", avgwt);

    return 0;
}

