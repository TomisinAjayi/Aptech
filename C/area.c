#include<stdio.h>

int main() {

    int length;
    int breadth;
    int height;
    int area;

    printf("Calculate the area of a cuboid.\n");
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);
    printf("Enter the height: ");
    scanf("%d", &height);

    area = 2 * (length*breadth + length*height + breadth*height);

    printf("The area of the cuboid is %d", area);


    return 0;
}
