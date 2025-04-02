#include <stdio.h>

int main () {


    struct ficha_aluno {
        char nome[40];
        int numero;
        float nota;
    }; // Definição da struct

    struct ficha_aluno aluno;

    printf("\n-------------- Cadastro do Aluno --------------\n\n\n");
    printf("Nome do aluno...........: ");
    fgets(aluno.nome, 40, stdin);

    printf("Digite o numero do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Informe a nota do aluno.: ");
    scanf("%f", &aluno.nota);



    printf("\n\n------------ Lendo dados da Struct ------------\n\n");
    printf("\nNome do aluno...........: %s", aluno.nome);
    printf("Numero do aluno.........: %d", aluno.numero);
    printf("\nNota do aluno...........: %.2f", aluno.nota);
    return 0;
}