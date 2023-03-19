/*
Todas as respostas couberam no prompt quando testei na minha máquina (cmd w11).

Cada questão está em uma função, as respostas estão em suas respectivas funções com nome q[numero da questão]

Usei iso-c90 pois é o que está sendo ensinado na faculdade, mas poderia ter utilizado Java e C#
por estar estudando por conta própria, ou até uma linguagem que ainda não utilizei caso pesquisasse
as palavras reservadas e exemplos simples das mesmas, a lógica é universal.
*/

#include <stdio.h>
#include <locale.h>

void q1(){
	int INDICE = 13, SOMA = 0, K;

	while(K < INDICE){
	K = K + 1;
	SOMA = SOMA + K;
	}
	printf("Questão 1: %d\n", SOMA);
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
	printf("\nQuestão 2: ");
	if(atual > informado)
		printf("não ");
	printf("pertence a sequência de fibonacci\n");
}

void q3(){
	printf("\nQuestão 3:\n");
	/* a)*/
	{
		int N = 1;
		int i;
		for(i = 0; i < 5; i++, N += 2){/* i define a posição na sequência, não o numero em si*/
		}
		printf("a) O próximo número desta sequência é: %d\n", N);
		printf("e a lógica é próximo N = N atual + 2\n");
	}{/*b)*/
		int N = 1;
		int i;
		for(i = 0; i < 7; i++, N *= 2){/* i define a posição na sequência, não o numero em si*/
		}
		printf("b) O próximo número desta sequência é: %d\n", N);
		printf("e a lógica é próximo N = N atual * 2\n");
	}{/*c)*/
		int i;
		for(i = 0; i < 7; i++){/* i define a posição na sequência, não o numero em si*/
		}
		printf("c) O próximo número desta sequência é: %d\n", i*i);
		printf("e a lógica é próximo N = i ao quadrado\n");
	}{/*d)*/
		int N = 1;
		int i;
		for(i = 1; i <= 5; i++){/* i define a posição na sequência, não o numero em si*/
			N += i * 8;
		}
		printf("d) O próximo número desta sequência é: %d\n", N);
		printf("e a lógica é próximo N = N anterior mais 8 * quantos numeros estão na lista até o anterior\n");
	}{/*e)*/
		int N = 0;
		int anterior = 1;
		int maisAntigo = 0;
		int i;
		for(i = 0; i < 7; i++){/* i define a posição na sequência, não o numero em si*/
			N = anterior + maisAntigo;
			maisAntigo = anterior;
			anterior = N;
		}
		printf("e) O próximo número desta sequência é: %d\n", N);
		printf("e a lógica é próximo N = numero anterior + numero anterior ao anterior\n");
	}{/*f)*/
		printf("f) O próximo número desta sequência é: 200\ne a lógica é próximo N = próximo numero");
		printf("começado com a letra D.");
	}
    
}

void q4(){
	printf("\nQuestão 4:\n");
	printf("Quando se cruzam na rodovia estão os dois a mesma distância de Ribeirão Preto,");
	printf(" dado que estão no mesmo ponto\ngeograficamente. Apesar dessa parte ser irrelevante a questão");
	printf(" (assim como a seção IMPORTANTE já que é uma\nquestão de lógica e não matemática,");
	printf(" digo isso como elogio, não critica, é uma excelente distração tirando o\nfoco da atenção");
	printf(" da questão em sí. Ambos estarão mais próximos de França do que de ribeirão preto.\n");
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
	printf("\nQuestão 5\n");
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
