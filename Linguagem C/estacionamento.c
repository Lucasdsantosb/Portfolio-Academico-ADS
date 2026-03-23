#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao,vagasTotais = 10,vagas = 10,vagasOcupadas = 0;
     printf("Aluno: Lucas dos Santos Bezerra\n");
     printf("Matricula: 0023304\n");
     printf("Aluno: Everton Gabriel Cunha de Oliveira\n");
     printf("Matricula:0023937\n");
    while (opcao != 4){
        printf("\n ======== ESTACIONAMENTO ========\n"); // menu principal do código
        printf("1 - Registrar entrada de veiculo\n");
        printf("2 - Registrar saida de veiculo\n");
        printf("3 - Mostrar vagas\n");
        printf("4 - Sair.\n");
        printf("Escolha a opção: ");
        
        //mensagem de erro caso a entrada do usúario não seja um número (pesquisamos e usamos auxilio de IA para poder fazer esse trecho)
        if (scanf("%d", &opcao) != 1) { 
            printf("Erro: Digite apenas números!\n");
            while (getchar() != '\n');
            continue;
        }
        //opcao 1
        if(opcao == 1){ //caso o número de vagas ocupadas seja maior que 10 terá a saída de que não há vagas
            if (vagas < 1){
                printf("NAO HA VAGAS!");
            }else{
                printf("Entrada registrada"); //caso esteja dentro do limite de vagas, a entrada será registrada
            vagasOcupadas++;
            vagas--;
        }
        
        //opcao 2
        }else if(opcao == 2){ //caso o número de vagas ocupadas seja menor que 0 terá a saída de que o estacionamento está vazio
            if(vagas >= 10){
                printf("Estacionamento vazio");
            }else{
                printf("Saida registrada");
                vagasOcupadas--;
                vagas++;
            }
            
        //opcao 3     
        }else if(opcao == 3){ //mostra o status atuais do sistema
           printf("Total de vagas: %d\n",vagasTotais);
            pri ntf("Vagas disponíveis: %d\n", vagas);
            printf("Vagas ocupadas: %d",vagasOcupadas);
        
        //opcao 4
        }else if(opcao == 4){ //finaliza o programa
            printf("Obrigado por usar o estacionammento!");
        }else{
            printf("Opção inválida!");
        }
    
    }
    return 0;
}