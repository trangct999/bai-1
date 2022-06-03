#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	int r;
	int sum;
	printf ("nhap so a: ");
	scanf ("%d",&a);
	
	printf ("nhap vào so b: ");
	scanf("%d, &b");
	sum=a+b;
	r=sum%2;
	if(r==0)
	{printf ("%d la so chan", sum);
	}
	if(r!=0)
	{printf ("%d la so le", sum);
	}
		

	return 0;
}
