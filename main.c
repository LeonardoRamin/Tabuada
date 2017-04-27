#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cont, tab;
	for(cont=92;cont<=105;cont++){
		for(tab=15;tab<=17;tab++){
			printf("%i*%i=%i\n",cont,tab,cont*tab);
		}
	}
	return 0;
}
