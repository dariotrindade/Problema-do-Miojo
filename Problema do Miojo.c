#include <stdio.h>
#include <locale.h>

int main(void) {

int tempoMiojo, tempoAmpuleta1, tempoAmpuleta2, ta1, ta2, possivel = 1, tempoFinal = 0;

printf("Informe o tempo de preparo do miojo em minutos: ");
scanf("%d", &tempoMiojo);
printf("Informe o tempo da Ampuleta 1 em minutos: ");
scanf("%d", &tempoAmpuleta1);
printf("Informe o tempo da Ampuleta 2 em minutos: ");
scanf("%d", &tempoAmpuleta2);

while (tempoAmpuleta1 < tempoMiojo || tempoAmpuleta2 < tempoMiojo){
	printf("\nTempo da(s) ampulheta(s) menor que o tempo de preparo do miojo.\nInsira tempos maiores ou iguais ao tempo de preparo do miojo.");
	printf("\n\nInforme o tempo da Ampuleta 1 em minutos: ");
	scanf("%d", &tempoAmpuleta1);
	printf("Informe o tempo da Ampuleta 2 em minutos: ");
	scanf("%d", &tempoAmpuleta2);
} 

ta1 = tempoAmpuleta1;
ta2 = tempoAmpuleta2;

int mdc(int a, int b) {

    int resto;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return a;
}

if ((tempoMiojo % mdc(ta1, ta2))){
    possivel = 0;
    }

if(possivel){
	while(1){
		if (ta2 < ta1){
			tempoFinal = tempoFinal + ta2;
			if (ta2 == tempoMiojo)
				break;
			ta1 = ta1 - ta2;
			ta2 = tempoAmpuleta2;
		}
		else {
			tempoFinal = tempoFinal + ta1;
			if (ta1 == tempoMiojo)
				break;
			ta2 = ta2 - ta1;
			ta1 = tempoAmpuleta1;
		}
	}
	printf("\nO tempo mínimo gasto para o miojo ficar pronto em minutos foi: %d", tempoFinal, setlocale(LC_ALL,""));
} 
else
	printf("\nNão é possível cozinhar o miojo no tempo exato com as ampulhetas disponíveis.", setlocale(LC_ALL,""));

return 0;
}
