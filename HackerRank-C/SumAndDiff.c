#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 int a, b;
 float c, d;

 scanf("%d %d", &a, &b);
 scanf("%f %f", &c, &d);

 // operations(variable) for int

 int sumInt = a + b;
 int diffInt= a - b;

 // operations(var) for float

 float sumFloat = c + d;
 float diffFloat = c - d;

 // print out

 printf("%d %d\n", sumInt, diffInt);
 printf("%.1f %.1f\n", sumFloat, diffFloat);

 return 0;

 return 0;
}
