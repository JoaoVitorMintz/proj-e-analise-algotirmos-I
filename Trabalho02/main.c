#include <stdio.h>
#include <string.h> 
#include <time.h>
#include <stdlib.h>


typedef struct Dados {
    int ano;
    char nomeCompleto[30];
    char disciplina[15];
    float medFinal;
} Dados;

void gerarNome(char *nome);
void gerarDisc(char *disc);
void gerarEntrada(Dados alunos[], int n);
void bubbleSort(Dados entrada[]);
void algoritmoSort(Dados entrada[]);


int main() {
    // Variáveis:
    int escolha;
    int quantidade;
    Dados *Alunos = NULL;

    // Criar valores randômicos:
    srand(time(NULL));


    // Loop do programa para escolha:
    while (1) {
        printf("~-------------- Menu --------------~");
        printf("\n1) Gerar entrada aleatoria (entrada.csv)\n2) Ordenar por nota (Bubble Sort)\n3) Ordenar por nota (outro algoritmo sort)\n4) Sair\n");
        printf("~----------------------------------------~");
        printf("\n--> ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("\nIndique a quantidade de alunos: ");
            scanf("%d", &quantidade);

            if (quantidade <= 0) {
                printf("\nERRO: Quantidade inválida!");
                continue;
            }

            // Aloca dinâmicamente espaço para salvar o número de alunos: 
            Alunos = (Dados*)malloc(quantidade * sizeof(Dados));

            if (!Alunos) {
                printf("\nERRO: Falha na alocacao de memoria!");
                return 1;
            }

            gerarEntrada(Alunos, quantidade);

            // Libera o espaço alocado para salver informações dos alunos:
            free(Alunos);
        }

        else if (escolha == 2) {
            printf("\nOdenando por nota (Bubble Sort):\n");
            //bubbleSort(Alunos);
        }
        
        else if (escolha == 3) {
            printf("\nOrdenando por nota ():\n"); // Inserir algoritmo sort aqui!!!!!!
            //algoritmoSort(Alunos);
        }

        else if (escolha == 4) {
            printf("\nPrograma finalizado!");
            break;
        }

        else {
            printf("\nNenhuma opcao selecionada, escolha novamente:\n");
        }
    }

    return 0;

}

// Função para escolher entre 10 nomes e assim, "criar" um aluno novo:
void gerarNome(char *nome) {
    char *nomes[] = {"Joao", "Maria", "Pedro", "Mohammed", "Julia", "Giovanni", "Yan", "Jamil", "Jessica", "Sofia"};
    int num = rand() % 1000;
    sprintf(nome, "%s%d", nomes[rand() % 10], num); // Usaddo sprintf para concatenar nome com numero aleatorio
}

// Função para escolher entre as 3 disciplinas pedidads pelo professor:
void gerarDisc(char *disc) {
    char *disciplina[] = {"Matematica", "Portugues", "Geografia"};
    strcpy(disc, disciplina[rand() % 3]); // Copia o nome da disciplina entre as 3 opções
}

// Função que gera o arquivo "entrada.csv" com ano, nome, disciplina e nota randômicamente
void gerarEntrada(Dados alunos[], int n) {
    FILE *entrada = fopen("entrada.csv", "w");
    if (!entrada) {
        printf("Erro ao criar o arquivo de entrada!\n");
    }

    for (int i = 0; i < n; i++) {
        alunos[i].ano = 2000 + rand() % 24; // Soma o valor 2000 a um número entre 0 e 23 para dar o ano
        gerarNome(alunos[i].nomeCompleto);
        gerarDisc(alunos[i].disciplina);
        alunos[i].medFinal = (float)(rand() % 101) / 10.0f; // Gera uma nota de 0 a 10

        fprintf(entrada, "%d,%s,%s,%.2f\n",
            alunos[i].ano,
            alunos[i].nomeCompleto,
            alunos[i].disciplina,
            alunos[i].medFinal);
    }
    fclose(entrada);
    printf("Arquivo 'entrada.csv' gerado com sucesso!\n\n");
}