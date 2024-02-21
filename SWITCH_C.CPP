#include<stdio.h>
#include<conio.h>
void main()
{
	char ops;
	int a,b;
clrscr();
printf("SELECT OPERATION [ + | - | x | / ] \n");
scanf("%c",&ops);
printf("\n A= ");
scanf("%d",&a);
printf("\n B= ");
scanf("%d",&b);

switch(ops){
case '+':
	printf("%d + %d = %d",a,b,a+b);
	break;
case '-':
	printf("%d - %d = %d",a,b,a-b);
	break;
case 'x':
	printf("%d x %d = %d",a,b,a*b);
	break;
case '/':
	printf("%d / %d = %d",a,b,a/b);
	break;
default:
	printf("enter valid operation");
	break;
}
getch();
}