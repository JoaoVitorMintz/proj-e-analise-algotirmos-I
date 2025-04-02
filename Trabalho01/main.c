#include <stdio.h>
#include <stdlib.h>
#include <String.h>

typedef struct Dados{
    int semestre;
    char turma;
    char periodo;
    char nomeCompleto[100];
    char disciplina[50];
    float mediaFinal;
}; // Definição da Struct

struct Dados alunos[1000];

// Protótipos de função:
void variaveisStructCsv(const char *arquivo, int tam);
void ordenarNome(const char *arquivo);
void ordenarSemestre(const char *arquivo);
void ordenarSem_Turm_Disc_Nome(const char *arquivo);
void ordenarDisc_MedFinal(const char *arquivo);
void ordenarPer_Sem_Turm_Disc_Nome(const char *arquivo);


int main() {
    int opcao = 0;
    int numAlunos = 0;

    // Abrindo arquivo de entrada e verificando se há algum erro ao abri-lo
    FILE *arquivo = fopen("entrada.csv", "r");
    if(arquivo == NULL) {
        printf("Erro ao abrir arquivo.");
        exit(1);
    }
    
    // Definindo um número de linhas para o arquivo CSV:
    char linha[256];
    
    while(fgets(linha, sizeof(linha), arquivo)) {
        // Remove o caractere de nova linha se existir
        linha[strcspn(linha, "\n")] = '\0';
        
        // Parse da linha
        int camposLidos = sscanf(linha, "%d,%c,%c,%[^,],%[^,],%f",
                                &alunos[numAlunos].semestre,
                                &alunos[numAlunos].turma,
                                &alunos[numAlunos].periodo,
                                alunos[numAlunos].nomeCompleto,
                                alunos[numAlunos].disciplina,
                                &alunos[numAlunos].mediaFinal);
        
        if(camposLidos == 6) {
            (numAlunos)++;
        } else {
            printf("Erro ao ler linha: %s\n", linha);
        }
        
        if(numAlunos >= 1000) {
            printf("Atingido o limite máximo de alunos (1000)\n");
            break;
        }
    }
    
    fclose(arquivo);


    while(opcao != 4) {
        int opcao;
        printf("------ MENU ------");
        printf("\n1.Ordenar por nome\n2.Ordenar por semestre, turma, periodo, disciplica e nome\n3.Ordenar por periodo, semestre, turma, disciplina e nome\n4.Ordenar por disciplina e média final (decrescente)\n5.Ordenar por período, semestre, turma, disciplina e nome\n6.SAIR\n>>> ");
        scanf("%d", &opcao);


        if(opcao == 1) {
            printf("a");
        }

        else if(opcao == 2) {
            printf("a");
        }

        else if(opcao == 3) {
            printf("a");
        }

        else if(opcao == 4) {
            printf("a");
        }

        else if(opcao == 5) {
            printf("a");
        }

        else if(opcao == 6) {
            break;
        }

        else {
            printf("ERRO: ESCOLHA NÃO EXISTENTE!");
        }
    }

    printf("\n\nPrograma finalizado!");

    fclose(arquivo);
    return 0;
}
