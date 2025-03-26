#include <stdio.h>
#include <stdlib.h>
#include <String.h>

typedef struct {
    int semestre;
    char turma;
    char periodo;
    char nomeCompleto[100];
    char disciplina[50];
    float mediaFinal;
} Dados;

// Protótipos de função:
void ordenarNome(const char *arquivo, Dados alunos[]);













int main() {
    Dados alunos[1000];
    int numAlunos = 0;
    int opcao = 0;

    FILE *arquivo;
    char linhas[1000000];
    int numLinhas = 0;


    // Abrindo arquivo de entrada e verificando se há algum erro ao abri-lo
    arquivo = fopen("entrada.csv", "r");
    if(arquivo == NULL) {
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    // Calcular quantas linhas o arquivo tem para determinar tamanho dos vetores variáveis do struct:
    while(fgets(linhas, sizeof(linhas), arquivo) != NULL) {
        numLinhas++;
    }

    while(opcao != 4) {
        printf("------ MENU ------");
        printf("\n1.Ordenar por nome\n2.Ordenar por semestre, turma, periodo, disciplica e nome\n3.Ordenar por periodo, semestre, turma, disciplina e nome\n4.SAIR\n>>> ");
        scanf("d", &opcao);

        if(opcao != 1 || opcao != 2 || opcao != 3 || opcao != 4) {
            printf("\nERRO: NENHUMA OPÇÃO ESCOLHIDA!");
        }

        if(opcao == 1) {
            OrdenarNOME(&arquivo, alunos);
        }
    }



    fclose(arquivo);
    return 0;
}