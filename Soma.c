#include <stdio.h>
#include <conio.h>
#include <locale.h>

int soma ( int a, int b) {
	return(a+b);
}

main (){
	int x,y;
	printf ("Digite um valor:");
	scanf("%d",&x);
	printf ("Digite um segundo valor:");
	scanf("%d",&y);
	
	printf ("A soma dos valores e %d", soma(x,y));
	
	getch();
	return 0;
}
