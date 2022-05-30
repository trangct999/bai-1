#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int integer1; /* 10 */
int integer2; /* 20 */
int sum; /*integer1 + integer2 */

printf( "Enter first integer\n"); /*prompt*/
scanf("%d", &integer1);

printf( "Enter first integer\n");
scanf("%d", &integer2);
sum = integer1 + integer2;

printf("Sum is %d\n", sum); 
	return 0;
}
