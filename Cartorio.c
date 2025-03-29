#include <stdio.h> //biblioteca de comunica��o com o usu�rio 
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h> //biblioteca respons�vel por cuidar dos string

int registro() //Fun��o respons�vel por cadastrar usu�rios do sistema
{
	//Inicio cria��o de vari�veis/string
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //Final da cria��o de vari�veis/string
    
    printf("Digite o CPF a ser castrado: "); //Coletando informa��es do usu�rio
    scanf("%s", cpf); //%s refere-se aos string
    
    strcpy(arquivo, cpf); //repospons�vel por copiar os valores da string
    
    FILE *file; //Cria o arquivo
    file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
    fprintf(file,cpf); // Salvo o valor da v�riavel
    fclose(file); // fecha o arquivo
    
    file = fopen(arquivo, "a"); //Abre o arquivo e coloca pontos/caracteres
    fprintf(file, "," );
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: "); //Digite os dados
    scanf("%s", nome); //Digitando o seu nome
    
    file = fopen(arquivo, "a"); //Abre outro arquivo/ coloca as informa��es
    fprintf(file, nome); //Coleta das informa��es
    fclose(file); //fecha a p�gina
	
	printf("Digite o sobrenome a ser castrado: "); //
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a"); //Abre a sintaxe do c�digo 
	fprintf(file, sobrenome); //Digite o seu nome
	fclose(file); //fecha a p�gina
	
	file = fopen(arquivo, "a"); //Abre a estrutura para escrever
    fprintf(file, "," ); //coloque a base de pontos
    fclose(file); //fechando o arquivo do sobrenome e coleta das informa��es
    
    printf("Digite o cargo a ser castrado: "); //Digitando as informa��es 
    scanf("%s",cargo); //direcionamento a biblioteca, banco de dados na parte do gerenciamento
    
    file = fopen (arquivo, "a"); //Abre o aquivo 
    fprintf(file,cargo); //informa��es recebidas
    fclose(file); //fecha o arquivo
	
	system("pause");
	   


}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
    char cpf[40];
    char conteudo[200];
    
    
    printf("Digite o cpf a ser consultado: ");
    scanf("%s",cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    	printf("N�o foi poss�vel abrir o arquivo, n�o foi localizado!. \n");
	}

    while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio!: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	} 
 
    system("pause"); 
 


}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL )
	{
		printf("O usu�rio foi deletado do sistema!.\n");
		printf("Prossiga ao menu...! \n");
		system("pause");
		
		
	}
	
}


int main()
    {
	int opcao=0; //Definindo vari�veis 
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	   
	    system("cls"); //repons�vel por limpar a tela
	   
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
    
        printf ("### Cart�rio da EBAC ###\n\n"); //Inicio do menu
        printf ("Escolha a op��o desejada no menu:\n\n");
        printf ("\t1 - Registrar nomes \n");
        printf ("\t2 - Consultar nomes \n");
        printf ("\t3 - Deletar nomes \n\n");
        printf ("\t4 - Sair do sistema \n\n");
        printf ("Esse software � de livre uso dos alunos \n:");
        printf ("\tEsse � o primeiro projeto desenvolvido da Ebac:)");
        printf ("\tLucas Mikael (criador dos c�digos)");
        printf ("\tOp��o: "); // Fim do menu
    
        scanf("%d", &opcao); //armazenamento a escolha do usu�rio
    
        system("cls");
		
		 
        
        switch(opcao) // Inicio da sele��o do menu
        {
        	case 1:
            registro(); 
            break;
            
            case 2:
            consulta();
		    break;
		    
		    case 3:
		    deletar();
	        break;
	        
	        case 4:
	        printf ("\tObrigado por utilizar o nosso sistema! \n");
	        return 0;
	        break;
			
			default:
			printf("Essa op��o n�o se encontra! \n");
		    system("pause");
			break;	
            	
		}   //Final/fim da sele��o

        
	       
	
   }
}
