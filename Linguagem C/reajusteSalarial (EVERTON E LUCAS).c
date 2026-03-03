#include <stdio.h> //biblioteca de entrada e saída
#include <stdlib.h> //biblioteca de funções de alocação na memória

int main(){
    printf("Lucas dos Santos Bezerra. Matricula: 0023304\nEverton Gabriel Cunha de Oliveira. Matricula: 0023937\n");
    printf("__________________________________________________\n");
    printf("\nSeja Bem-Vindo(a) a nossa ferramenta interna de calculo de reajuste salarial!\n");
    printf("__________________________________________________\n");
    
    char nome[100];
    float salario;
    int tempoDeEmpresa;
    float salarioAjustado;
    int percentual;
    
    //Solicitar ao usuário
    printf("Digite seu nome: \n");
    scanf("%s",nome);
    printf("Digite seu salario atual: \n");
    scanf("%f",&salario);
    printf("Digite seu tempo de empresa (em anos): \n");
    scanf("%d",&tempoDeEmpresa);
    
    //Aplicar regras ao reajuste
    if (tempoDeEmpresa < 1){
        salarioAjustado = salario * 1.05;
        percentual = 5;
    } else if (tempoDeEmpresa >= 1 && tempoDeEmpresa < 5){
        salarioAjustado = salario * 1.10;
        percentual = 10;
    } else if (tempoDeEmpresa >= 5){
        salarioAjustado = salario * 1.15;
        percentual = 15;
    }
    
    //Calculo
    float aumento = salarioAjustado - salario;
    
    //Exibir
    printf("Nome: %s\n", nome);
    printf("Salário antigo: %.2f\n",salario);
    printf("Foi apilcado um percentual de %d%\n",percentual);
    printf("Você recebeu %.2f de aumento!\n", aumento);
    printf("Seu salario atual é: %.2f\n", salarioAjustado);
    
}  
    

