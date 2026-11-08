#include <stdio.h>


float calcul(int grades[], int n) {
    int sum = 0;
    int j = 0;

    while (j < n) {
        sum += grades[j];
        j++;
    }

    return (float)sum / n;
}

int main() {
    int n;
    printf("Number of grades: ");
    scanf("%d", &n);
    if (n < 0 || n >= 10) {
        printf("Error ...");
        return 1;
    }
    int grades[n];

    int i = 0;
    while (i < n) {
        printf("\nGrade n° %d: ", i+1);
        scanf("%d", &grades[i]);
        i++;
    }

    float average = calcul(grades, n);
    printf("Average Grade is %.2f.", average);

    return 0;
}