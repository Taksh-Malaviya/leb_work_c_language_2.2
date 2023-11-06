#include<stdio.h>
#include<conio.h>
void main()
{
	
	int cs,c,maths,eng,html,dbms,js,ic;
	float sum=0;
clrscr();

	printf("enter value CS = :");
	scanf("%d",&cs);
		printf("enter value C = :");
	scanf("%d",&c);
		printf("enter value Maths = :");
	scanf("%d",&maths);
		printf("enter value Eng = :");
	scanf("%d",&eng);
		printf("enter value Html = :");
	scanf("%d",&html);
		printf("enter value Dbms = :");
	scanf("%d",&dbms);
		printf("enter value Js = :");
	scanf("%d",&js);
		printf("enter value Ic = :");
	scanf("%d",&ic);
	
	
	
	sum=cs+c+maths+eng+html+dbms+js+ic;

printf("sum %f",sum/400*100);

getch();
}
