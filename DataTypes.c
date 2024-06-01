#include<stdio.h> /* include the standard input/output library */

void main(){ /* define the main function */
    int a = 10; /* declare an integer variable 'a' and initialize it with 10 */
    float b = 10.5; /* declare a float variable 'b' and initialize it with 10.5 */
    double c = 10.5; /* declare a double variable 'c' and initialize it with 10.5 */
    char d = 'a'; /* declare a character variable 'd' and initialize it with 'a' */

    printf("%d\n",a); /* print the value of 'a' using the %d format specifier */
    printf("%f\n",b); /* print the value of 'b' using the %f format specifier */
    printf("%lf\n",c); /* print the value of 'c' using the %lf format specifier */
    printf("%c\n",d); /* print the value of 'd' using the %c format specifier */

    a = 20; /* assign a new value of 20 to 'a' */
    printf("%d\n",a); /* print the new value of 'a' using the %d format specifier */
}