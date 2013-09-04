#include <stdio.h>
#include <conio.h>

	int main(){
		int r; // RAIZ
		int a; // CONSTANTE MULTIPLICATIVA
		int c; // CONSTANTE ADITIVA
		int m; // MODULO
        int i;
        printf("Raiz:\t");
        scanf("%d",&r);
        printf("\nConstante multiplicativa:\t");
        scanf("%d",&a);
        printf("\nConstante aditiva:\t");
        scanf("%d",&c);
        printf("\nModulo:\t");
        scanf("%d",&m);
		printf(" r = ( a * r +c)mod m ");

		for( i=0; i<=50; i++){

			r = (a*r+c)%m;
			printf(" %i - ( %i * %i + %i )mod %i \n", i, a, r, c, m);
		}



		return 0;
	}
	//jonathan covarrubias saldaña

