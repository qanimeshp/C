#include <stdio.h>
void getTemperatures(int temps[], int n, int i) {
    if (i == n)  
        return;

    printf("Enter temperature for day %d: ", i + 1);
    scanf("%d", &temps[i]);
    if (temps[i] < -50 || temps[i] > 50) {
        printf("Invalid temperature. Please enter a value between -50 and 50.\n");
        getTemperatures(temps, n, i);  
        return;
    }

    getTemperatures(temps, n, i + 1);  
}

void classifydays(int temps[], int n, int i, int *hot , int *warm , int *cold){
    if (i == n)   
        return;

    if (temps[i] >= 30)
        (*hot)++;
    else if (temps[i] >= 20)
        (*warm)++;
    else
        (*cold)++;

    classifydays(temps, n, i + 1, hot, warm, cold); 
}
void displaysummary(int hot, int warm, int cold, int step) {
    if (step == 0) {
        printf("\n--- Weather Summary ---\n");
        displaysummary(hot, warm, cold, 1);  
        return;
    }

    if (step == 1)
        printf("Hot Days  : %d\n", hot);
    else if (step == 2)
        printf("Warm Days : %d\n", warm);
    else if (step == 3)
        printf("Cold Days : %d\n", cold);
    else
        return;  

    displaysummary(hot, warm, cold, step + 1); 
}
void minimum(int temps[], int n, int *min, int i) {
    if (i == n)   
        return;

    if (temps[i] < *min)
        *min = temps[i];

    minimum(temps, n, min, i + 1); 
}
void maximum(int temps[], int n, int i, int *max) {
    if (i == n)   
        return;

    if (temps[i] > *max)
        *max = temps[i];

    maximum(temps, n, i + 1, max);
}
void average(int temps[], int n, float *avg, int i, int sum) {
    if (i == n) {
        *avg = (float)sum / n; 
        return;
    }

    sum += temps[i];
    average(temps, n, avg, i + 1, sum); 
}


int main() {
    int n=7;
    int temps[100];  

    getTemperatures(temps, n, 0);

    int hot = 0, warm = 0, cold = 0;
    classifydays(temps, n, 0, &hot, &warm, &cold);

    displaysummary(hot, warm, cold, 0);

    int min = temps[0];
    minimum(temps, n, &min, 0);

    int max = temps[0];
    maximum(temps, n, 0, &max);;

    float avg;
    average(temps, n, &avg, 0, 0);

    printf("\nMinimum Temperature: %d°C\n", min);
    printf("Maximum Temperature: %d°C\n", max);
    printf("Average Temperature: %.2f°C\n", avg);

    return 0;
}