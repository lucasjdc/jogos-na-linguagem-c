#include <stdio.h>
#include <stdlib.h>

int main() {
    
	system("chcp 65001");   // coloca o prompt de comando em UTF-8
	system("cls");          // limpa a tela

	printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;
    printf("\nQual é o seu chute?\n");
    scanf("%d", &chute);
    printf("Seu chute foi %d.\n", chute);
    if (chute == numerosecreto) {
    	printf("Parabéns! Você acertou!\n");
    	printf("Jogue de novo, você é um bom jogador!\n");
    } else {
    	if (chute > numerosecreto) {
    		printf("Seu chute foi maior que o número secreto!\n");
    	}
    	
    	if (chute < numerosecreto) {
    		printf("Seu chute foi menor que o número secreto!\n");
    	}
    }

    return 0;
}