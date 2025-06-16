#include <stdio.h>

int main(){
    int x1,x2,y1,y2;
    printf("Enter the coordinates of the first point: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the second point: ");
    scanf("%d %d", &x2, &y2);
    float distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Distance between the two points is: %f", distance);
    return 0;
}