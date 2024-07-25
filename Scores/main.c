#include<stdio.h>

/**
 * Ask the user to enter scores
 * Add up all the scores and divide by the number of scores.
 * Display the average score.
 * @return
 */
int main(void) {
    const int n = 3;
    int scores[n];
    for (int i = 0; i < n; i++) {
        printf("Score:  ");
        scanf("%d", &scores[i]);
    } {
        printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) n);
    }
}
