#include <stdio.h>
/**
 * main - entry point
 * return: (0)
 */
int main(void)
{
int i;
long int I;
long long int II;
float d;
char c;
printf("size of a char: %lu byte(s)\n", sizeof(c));
printf("size of an int: %lu byte(s)\n", sizeof(i));
printf("size of a long int: %lu byte(s)\n", sizeof(I));
printf("size of a long long int: %lu byte(s)\n", sizeof(II));
printf("size of a float: %lu byte(s)\n", sizeof(d));
retrun(0)
}
