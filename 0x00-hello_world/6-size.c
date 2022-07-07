#include <stdio.h>
/**
 * main - prints the size of various types
 * return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
int i;
long int l;
long long int ll;
float d;
char c;
printf("size of a char: %lu byte(s)\n", sizeof(c));
printf("size of an int: %lu byte(s)\n", sizeof(i));
printf("size of a long int: %lu byte(s)\n", sizeof(l));
printf("size of a long long int: %lu byte(s)\n", sizeof(ll));
printf("size of a float: %lu byte(s)\n", sizeof(d));
retrun(0);
}
