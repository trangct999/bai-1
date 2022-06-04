#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	float a,b,c,d, kq1, kq2,kq3;
	printf ("Nhap i \n");
	scanf ("%d", &i);
	
	printf ("Nhap a: \n");
	scanf ("%f", &a);
	
	printf ("Nhap b: \n");
	scanf ("%f", &b);
	
	printf ("Nhap c: \n");
	scanf ("%f", &c);
	
	printf ("Nhap d: \n");
	scanf ("%f", &d);
	
	kq1=++i%7;
	kq2=5*(c-3+d);
	kq3=a*(b+c/d)-22;
	printf ("Ket qua 1: %d \n", kq1);
	printf ("Ket qua 1: %d \n", kq1);
	printf ("Ket qua 1: %d \n", kq1);

	
	
	
	
	return 0;
}
