#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{

	float a; /* tong so buoi hoc*/
	float b; /* so buoi di hoc thuc te*/
	float c;
	float h,i,k; /*diem thi LT,TH,BTL*/
	printf("Tong so buoi hoc a: \n");
	scanf("%f",&a);
	
	printf("So buoi di hoc thuc te b: \n");
	scanf("%f",&b);
	
	c=b/a;
	if (c >= 0.25)
	    {
		printf("Duoc thi\n");
	
		
		printf("Nhap diem LT, Nhap diem TH, Nhap diem BTL \n");
		  scanf("%f%f%f",&h,&i,&k);
		  
		if(h>=8)
		{
			printf("Qua ly thuyet\n");
		}	
		else
		{
			printf("Truot ly thuyet\n");
		}
		if(i>=6)
		{	
			printf("Qua thuc hanh\n");
		}	
		else
		{
			printf("Truot thuc hanh\n");
		}
		if(k>=4)
		{	
			printf("Qua BTL\n");
		}	
		else
		{
			printf("Truot BTL\n");
		}
	}
	else
	{
		printf("Hoc sinh hoc lai\n");
	}
	
	
	return 0;

	return 0;
}
