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
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long int));
printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("size of a float: %d byte(s)\n", sizeof(float));
retrun(0);
}
