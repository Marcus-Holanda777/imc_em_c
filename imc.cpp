#include <stdio.h>
#include <stdlib.h>

#define MAXIMOLETRA 27

typedef struct // tabela do IMC
{
	
	char imc[MAXIMOLETRA];
	char classificacao[MAXIMOLETRA];
	
}Tabela; // nome dos registros


int main()
{
    float peso;
    float altura;
    float IMC;
    int i;

    printf("--> CALCULADORA IMC <--\n");

    printf("\nDigite seu peso: ");

    scanf("%f", &peso);

    printf("\nDigite sua altura: ");

    scanf("%f", &altura);

    IMC = peso / (altura * altura);
    
    // adicionando os registros -- array de 4 posições
    Tabela tabs[6] = {
	  {"Menor do que 18,5", "Abaixo do peso"},
	  {"Entre 18,5 e 24,9", "Peso normal"},
	  {"Entre 25 e 29,9", "Acima do peso (sobrepeso)"},
	  {"Entre 30 e 34,9", "Obesidade I"},
	  {"Entre 35 e 39,9", "Obesidade II"},
	  {"Maior do que 40", "Obesidade III"},
	};	
    
    // NOME DAS COLUNAS
    printf("\n\n| %*s | %*s |\n", -MAXIMOLETRA, "IMC", -MAXIMOLETRA, "Clasificacao");
    
    // leitura da tabela
    for(i=0;i<6;i++)	
	{
		printf("| %*s |", -MAXIMOLETRA, tabs[i].imc);
		printf(" %*s |", -MAXIMOLETRA, tabs[i].classificacao);
		printf("\n");
	};
	
	
	printf("\n>> Seu IMC: %.2f , ", IMC);
	
	// avaliacao do IMC
	if(IMC < 18.5)
	{
		printf("%s", "Abaixo do peso");
		
	}
	else if(IMC <= 24.9)
	{
		printf("%s", "Peso normal");	
	}
	else if(IMC <= 29.9)
	{
		printf("%s", "Acima do peso (sobrepeso)");	
	}
	else if(IMC <= 34.9)
	{
		printf("%s", "Obesidade I");	
	}
	else if(IMC <= 39.9)
	{
		printf("%s", "Obesidade II");	
	}
	else
	{
		printf("%s", "Obesidade III");
	};
    
    
    return 0;
}
