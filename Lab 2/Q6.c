#include <stdio.h>
struct Distance {
    int feet;
    int inches;
};
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    if (result.inches >= 12) {
        result.inches -= 12;
        result.feet++;
    }
    return result;
}
int main() {
    struct Distance distance1, distance2, sum;
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inches);
    printf("Enter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inches);
    sum = addDistances(distance1, distance2);
    printf("Sum of distances: %d feet %d inches\n", sum.feet, sum.inches);
    return 0;
}
