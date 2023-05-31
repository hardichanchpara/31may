#include<stdio.h>

cal()
{
	int a,b,n;
	do{
		printf("\nprees 0 exit");
		printf("\nprees 1 to addition");
		printf("\nprees 2 to substraction");
		printf("\nprees 3 to maltiplication");
		printf("\nprees 4 to divison");
		printf("\nprees 5 to modulas");
		printf("\nenter value of A=");
		scanf("%d",&a);
		printf("enter value of B=");
		scanf("%d",&b);
		printf("enter value of N=");
		scanf("%d",&n);
		
		switch(n)
		{
			case 1:
				printf("addition of a+b=%d",a+b);
			    break;
			case 2:
				printf("substraction of a-b=%d",a-b);
				break;
			case 3:
				printf(" maltiplication of a+b=%d",a*b);
				break;
			case 4:
				printf("divison of a+b=%d",a/b);
				break;
			case 5:
				printf("modulas of a+b=%d",a%b);
				break;
			case 6:
				printf("exit");
				break;
		}
	}while(n==0);
}
main()
{
	cal();
}
