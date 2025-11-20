#include <stdio.h>

int main() {
    int phy, chem, bio, math, comp;
    float percentage;

    printf("Enter marks for five subjects (out of 100):\n");

    printf("Physics: ");
    scanf("%d", &phy);

    printf("Chemistry: ");
    scanf("%d", &chem);

    printf("Biology: ");
    scanf("%d", &bio);

    printf("Mathematics: ");
    scanf("%d", &math);

    printf("Computer: ");
    scanf("%d", &comp);

    int total_marks = phy + chem + bio + math + comp;
    percentage = total_marks / 5.0;

    printf("\n----------------------------------\n");
    printf("Your Percentage: %f\n", percentage);

    printf("Your Grade: ");
    if (percentage >= 90) {
        printf("A \n");
    } else if (percentage >= 80) {
        printf("B\n");
    } else if (percentage >= 70) {
        printf("C\n");
    } else if (percentage >= 60) {
        printf("D\n");
    } else if (percentage >= 40) {
        printf("E\n");
    } else {
        printf("F \n");
    }
    printf("----------------------------------\n");

    return 0;
}