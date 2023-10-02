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
    
    for (int i = 1; i <= 3; i++) {
        printf("Tentativa %d de 3.\n", i);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d.\n", chute);
   
        int acertou = (chute == numerosecreto);

        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
			break;
        } else {

            int maior = (chute > numerosecreto);

            if (maior) {
                printf("Seu chute foi maior que o número secreto!\n");
            } else {
                printf("Seu chute foi menor que o número secreto!\n");
            }
        }
    }

	printf("Fim de jogo!\n");
   
    return 0;
}
