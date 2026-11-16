
#include <stdio.h>
#include <string.h>

struct Questao {
    int quantidadeSubmissoes;
    int resolvida;
    int tempoResolucao;
};

struct Equipe {
    char nome[51];
    char instituicao[51];
    char integrantes[3][101];
    Questao questoes[14];
};


int main() {

    Equipe equipes[5000];

    int quantidadeEquipes = 0;
    int opcao = 0;

    // Menu principal
    while (opcao != 5) {

        printf("\n===== MARATONA DE PROGRAMACAO =====\n");
        printf("1 - Cadastrar equipe\n");
        printf("2 - Buscar equipes por instituicao\n");
        printf("3 - Registrar submissao\n");
        printf("4 - Exibir placar\n");
        printf("5 - Encerrar programa\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Opcao de cadastro selecionada.\n");
                break;

            case 2:
                printf("Opcao de busca selecionada.\n");
                break;

            case 3:
                printf("Opcao de submissao selecionada.\n");
                break;

            case 4:
                printf("Opcao de placar selecionada.\n");
                break;

            case 5:
                printf("Encerrando programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}