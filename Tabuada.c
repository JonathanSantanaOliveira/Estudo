#include <stdio.h>
#include <conio.h>


main()
{
	int n, numero;
	system("cls"); system("title tabuada"); system("color 2b");
	printf("Qual tabuada deseja consultar?\n\n");
	scanf("%d",&numero);
	printf("\n");
	n=1;
	while(n<=10)
	{
		printf("\t%d x %d = %d\n",numero,n,numero*n);
		n=n+1;
	}
	
printf ("\n");
putchar("\n");

system("pause");
return(0);

}
