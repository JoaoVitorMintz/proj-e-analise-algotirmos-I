#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dados {
    int semestre;  // Armazena o semestre do aluno
    char turma;  // Armazena a turma do aluno
    char periodo;  // Armazena o período (M/V/N)
    char nomeCompleto[100];  // Armazena o nome completo
    char disciplina[50];  // Armazena o nome da disciplina
    float mediaFinal;  // Armazena a média final
} Dados;

void ordenarNome(Dados alunos[], int numAlunos) {  // Ordena alunos por nome (ordem alfabética)
    for (int i = 0; i < numAlunos - 1; i++) {  // Loop para percorrer o array
        for (int j = 0; j < numAlunos - i - 1; j++) {  // Loop para comparações
            if (strcmp(alunos[j].nomeCompleto, alunos[j + 1].nomeCompleto) > 0) {  // Compara nomes
                Dados temp = alunos[j];  // Faz a troca se necessário
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

void ordenarSemestre(Dados alunos[], int numAlunos) {  // Ordena alunos por semestre (crescente)
    for (int i = 0; i < numAlunos - 1; i++) {  // Loop externo
        for (int j = 0; j < numAlunos - i - 1; j++) {  // Loop interno
            if (alunos[j].semestre > alunos[j + 1].semestre) {  // Compara semestres
                Dados temp = alunos[j];  // Troca se necessário
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

void ordSemestreTurmaPerDiscNome(Dados alunos[], int numAlunos) {  // Ordena por múltiplos critérios
    for (int i = 0; i < numAlunos - 1; i++) {  // Loop externo
        for (int j = 0; j < numAlunos - i - 1; j++) {  // Loop interno
            int deveTrocar = 0;  // Flag para controle de troca

            if (alunos[j].semestre > alunos[j+1].semestre) {  // Compara semestre
                deveTrocar = 1;
            }
            else if (alunos[j].semestre == alunos[j+1].semestre) {  // Se semestres iguais
                if (alunos[j].turma > alunos[j+1].turma) {  // Compara turma
                    deveTrocar = 1;
                }
                else if (alunos[j].turma == alunos[j+1].turma) {  // Se turmas iguais
                    if (alunos[j].periodo > alunos[j+1].periodo) {  // Compara período
                        deveTrocar = 1;
                    }
                    else if (alunos[j].periodo == alunos[j+1].periodo) {  // Se períodos iguais
                        int cmpDisc = strcmp(alunos[j].disciplina, alunos[j+1].disciplina);  // Compara disciplina
                        if (cmpDisc > 0) {
                            deveTrocar = 1;
                        }
                        else if (cmpDisc == 0) {  // Se disciplinas iguais
                            if (strcmp(alunos[j].nomeCompleto, alunos[j+1].nomeCompleto) > 0) {  // Compara nome
                                deveTrocar = 1;
                            }
                        }
                    }
                }
            }

            if (deveTrocar) {  // Executa troca se necessário
                Dados temp = alunos[j];
                alunos[j] = alunos[j+1];
                alunos[j+1] = temp;
            }
        }
    }
}

void ordDisciplinaMedFinal(Dados alunos[], int numAlunos) {  // Ordena por disciplina e média (decrescente)
    for (int i = 0; i < numAlunos - 1; i++) {  // Loop externo
        for (int j = 0; j < numAlunos - i - 1; j++) {  // Loop interno
            int deveTrocar = 0;  // Flag para troca
            int cmpDisciplina = strcmp(alunos[j].disciplina, alunos[j + 1].disciplina);  // Compara disciplinas

            if (cmpDisciplina > 0) {  // Ordena disciplina alfabeticamente
                deveTrocar = 1;
            }
            else if (cmpDisciplina == 0) {  // Se disciplinas iguais
                if (alunos[j].mediaFinal < alunos[j + 1].mediaFinal) {  // Ordena por média decrescente
                    deveTrocar = 1;
                }
            }

            if (deveTrocar) {  // Executa troca
                Dados temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

void ordPeriodoSemestreTurmaDiscNome(Dados alunos[], int numAlunos) {  // Ordena por múltiplos critérios
    for (int i = 0; i < numAlunos - 1; i++) {  // Loop externo
        for (int j = 0; j < numAlunos - i - 1; j++) {  // Loop interno
            int deveTrocar = 0;  // Flag para troca

            if (alunos[j].periodo > alunos[j + 1].periodo) {  // Compara período
                deveTrocar = 1;
            }
            else if (alunos[j].periodo == alunos[j + 1].periodo) {  // Se períodos iguais
                if (alunos[j].semestre > alunos[j + 1].semestre) {  // Compara semestre
                    deveTrocar = 1;
                }
                else if (alunos[j].semestre == alunos[j + 1].semestre) {  // Se semestres iguais
                    if (alunos[j].turma > alunos[j + 1].turma) {  // Compara turma
                        deveTrocar = 1;
                    }
                    else if (alunos[j].turma == alunos[j + 1].turma) {  // Se turmas iguais
                        int cmp_disciplina = strcmp(alunos[j].disciplina, alunos[j + 1].disciplina);  // Compara disciplina
                        if (cmp_disciplina > 0) {
                            deveTrocar = 1;
                        }
                        else if (cmp_disciplina == 0) {  // Se disciplinas iguais
                            if (strcmp(alunos[j].nomeCompleto, alunos[j + 1].nomeCompleto) > 0) {  // Compara nome
                                deveTrocar = 1;
                            }
                        }
                    }
                }
            }

            if (deveTrocar) {  // Executa troca
                Dados temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

void salvarResultado(Dados alunos[], int numAlunos, int opcao) {  // Salva resultados em arquivo CSV
    char nomeArquivo[20];  // Nome do arquivo de saída
    sprintf(nomeArquivo, "saida_opcao%d.csv", opcao);  // Gera nome do arquivo

    FILE *saida = fopen(nomeArquivo, "w");  // Abre arquivo para escrita
    if (!saida) {  // Verifica erro
        printf("Erro ao criar arquivo de saida!\n");
        return;
    }

    for (int i = 0; i < numAlunos; i++) {  // Escreve dados no arquivo
        fprintf(saida, "%d,%c,%c,%s,%s,%.2f\n",
                alunos[i].semestre,
                alunos[i].turma,
                alunos[i].periodo,
                alunos[i].nomeCompleto,
                alunos[i].disciplina,
                alunos[i].mediaFinal);
    }
    fclose(saida);  // Fecha arquivo
    printf("Arquivo 'saida.csv' gerado com sucesso!\n");  // Mensagem de confirmação
}

int main() {
    Dados alunos[1000];  // Array para armazenar alunos
    int numAlunos = 0;  // Contador de alunos

    FILE *arquivo = fopen("entrada.csv", "r");  // Abre arquivo de entrada
    if (!arquivo) {  // Verifica erro
        printf("Erro ao abrir o arquivo 'entrada.csv'.\n");
        printf("Certifique-se de que o arquivo existe no diretório.\n");
        return 1;
    }

    char linha[256];  // Buffer para ler linhas
    while (fgets(linha, sizeof(linha), arquivo)) {  // Lê cada linha
        linha[strcspn(linha, "\n")] = '\0';  // Remove \n
        if (sscanf(linha, "%d,%c,%c,%[^,],%[^,],%f",  // Parse dos dados
                   &alunos[numAlunos].semestre,
                   &alunos[numAlunos].turma,
                   &alunos[numAlunos].periodo,
                   alunos[numAlunos].nomeCompleto,
                   alunos[numAlunos].disciplina,
                   &alunos[numAlunos].mediaFinal) == 6) {
            numAlunos++;  // Incrementa contador
        }
        if (numAlunos >= 1000) break;  // Limite máximo
    }
    fclose(arquivo);  // Fecha arquivo

    printf("Dados carregados com sucesso! %d registros encontrados.\n\n", numAlunos);  // Confirmação

    int opcao;  // Variável para opção do menu
    while (1) {  // Loop do menu
        printf("\tMENU:\n");  // Exibe menu
        printf("1. Ordenar por nome\n");
        printf("2. Ordenar por semestre\n");
        printf("3. Ordenar por semestre, turma, periodo, disciplina e nome\n");
        printf("4. Ordenar por disciplina e media final (decrescente)\n");
        printf("5. Ordenar por periodo, semestre, turma, disciplina e nome\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {  // Lê opção
            printf("Entrada invalida! Digite um número.\n");  // Trata erro
            while (getchar() != '\n');  // Limpa buffer
            continue;
        }

        switch (opcao) {  // Executa opção escolhida
            case 1:
                ordenarNome(alunos, numAlunos);
            salvarResultado(alunos, numAlunos, 1);
            break;
            case 2:
                ordenarSemestre(alunos, numAlunos);
            salvarResultado(alunos, numAlunos, 2);
            break;
            case 3:
                ordSemestreTurmaPerDiscNome(alunos, numAlunos);
            salvarResultado(alunos, numAlunos, 3);
            break;
            case 4:
                ordDisciplinaMedFinal(alunos, numAlunos);
            salvarResultado(alunos, numAlunos, 4);
            break;
            case 5:
                ordPeriodoSemestreTurmaDiscNome(alunos, numAlunos);
            salvarResultado(alunos, numAlunos, 5);
            break;
            case 6:
                printf("Programa encerrado.\n");
            return 0;
            default:
                printf("Opcao invalida! Tente novamente.\n");
            continue;
        }
    }

    return 0;
}