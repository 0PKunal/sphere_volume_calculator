#include <stdio.h>
#include <math.h>

int main() {
    // Get input from User
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Declaration of Variables
    double pi = 3.14159;
    double volume;
    volume = (4.0/3.0) * pi * pow(radius, 3);
    
    //Print the Answer
    printf("The Answer of a sphere with radius %.2f is %.2lf cubic units\n", radius, volume);
    
    return 0;
}