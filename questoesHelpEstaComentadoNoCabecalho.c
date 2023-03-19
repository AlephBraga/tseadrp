/*
Todas as respostas couberam no prompt quando testei na minha m�quina (cmd w11).

Cada quest�o est� em uma fun��o, as respostas est�o em suas respectivas fun��es com nome q[numero da quest�o]

Usei iso-c90 pois � o que est� sendo ensinado na faculdade, mas poderia ter utilizado Java e C#
por estar estudando por conta pr�pria, ou at� uma linguagem que ainda n�o utilizei caso pesquisasse
as palavras reservadas e exemplos simples das mesmas, a l�gica � universal.
*/

#include <stdio.h>
#include <locale.h>

void q1(){
	int INDICE = 13, SOMA = 0, K;

	while(K < INDICE){
	K = K + 1;
	SOMA = SOMA + K;
	}
	printf("Quest�o 1: %d\n", SOMA);
}

void q2(){
	int atual = 0;
	int anterior = 1;
	int maisAntigo = 0;
	int informado = 8;
	while(atual < informado){
		atual = anterior + maisAntigo;
		maisAntigo = anterior;
		anterior = atual;
	}
	printf("\nQuest�o 2: ");
	if(atual > informado)
		printf("n�o ");
	printf("pertence a sequ�ncia de fibonacci\n");
}

void q3(){
	printf("\nQuest�o 3:\n");
	/* a)*/
	{
		int N = 1;
		int i;
		for(i = 0; i < 5; i++, N += 2){/* i define a posi��o na sequ�ncia, n�o o numero em si*/
		}
		printf("a) O pr�ximo n�mero desta sequ�ncia �: %d\n", N);
		printf("e a l�gica � pr�ximo N = N atual + 2\n");
	}{/*b)*/
		int N = 1;
		int i;
		for(i = 0; i < 7; i++, N *= 2){/* i define a posi��o na sequ�ncia, n�o o numero em si*/
		}
		printf("b) O pr�ximo n�mero desta sequ�ncia �: %d\n", N);
		printf("e a l�gica � pr�ximo N = N atual * 2\n");
	}{/*c)*/
		int i;
		for(i = 0; i < 7; i++){/* i define a posi��o na sequ�ncia, n�o o numero em si*/
		}
		printf("c) O pr�ximo n�mero desta sequ�ncia �: %d\n", i*i);
		printf("e a l�gica � pr�ximo N = i ao quadrado\n");
	}{/*d)*/
		int N = 1;
		int i;
		for(i = 1; i <= 5; i++){/* i define a posi��o na sequ�ncia, n�o o numero em si*/
			N += i * 8;
		}
		printf("d) O pr�ximo n�mero desta sequ�ncia �: %d\n", N);
		printf("e a l�gica � pr�ximo N = N anterior mais 8 * quantos numeros est�o na lista at� o anterior\n");
	}{/*e)*/
		int N = 0;
		int anterior = 1;
		int maisAntigo = 0;
		int i;
		for(i = 0; i < 7; i++){/* i define a posi��o na sequ�ncia, n�o o numero em si*/
			N = anterior + maisAntigo;
			maisAntigo = anterior;
			anterior = N;
		}
		printf("e) O pr�ximo n�mero desta sequ�ncia �: %d\n", N);
		printf("e a l�gica � pr�ximo N = numero anterior + numero anterior ao anterior\n");
	}{/*f)*/
		printf("f) O pr�ximo n�mero desta sequ�ncia �: 200\ne a l�gica � pr�ximo N = pr�ximo numero");
		printf("come�ado com a letra D.");
	}
    
}

void q4(){
	printf("\nQuest�o 4:\n");
	printf("Quando se cruzam na rodovia est�o os dois a mesma dist�ncia de Ribeir�o Preto,");
	printf(" dado que est�o no mesmo ponto\ngeograficamente. Apesar dessa parte ser irrelevante a quest�o");
	printf(" (assim como a se��o IMPORTANTE j� que � uma\nquest�o de l�gica e n�o matem�tica,");
	printf(" digo isso como elogio, n�o critica, � uma excelente distra��o tirando o\nfoco da aten��o");
	printf(" da quest�o em s�. Ambos estar�o mais pr�ximos de Fran�a do que de ribeir�o preto.\n");
}

void q5(){
	int tamanhoInverter = 10; /* TEM QUE TER MESMO NUMERO QUE  char inverter[N]; */
	char inverter[10] = "0123456789"; /* TEM QUE TER MESMO NUMERO QUE int tamanhoInverter; */
	int i;
	int j = tamanhoInverter / 2;
	char temp[1];
	for(i = 0; i < j; i++){
		temp[0] = inverter[i];
		inverter[i] = inverter[tamanhoInverter - i];
		inverter[tamanhoInverter - i] = temp[0];
	}
	printf("\nQuest�o 5\n");
	fflush(stdin);
	for(i = 0; i <= tamanhoInverter; i++){
		printf("%c", inverter[i]);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	q1();
	q2();
	q3();
	q4();
	q5();
	return 0;
}
