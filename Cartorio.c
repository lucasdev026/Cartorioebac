#include <stdio.h> //biblioteca de comunicação com o usuário 
#include <stdlib.h> //biblioteca de alocação de espaço de memória 
#include <locale.h> //biblioteca de alocações de texto por região 
#include <string.h> //biblioteca responsável por cuidar dos string

int registro() //Função responsável por cadastrar usuários do sistema
{
	//Inicio criação de variáveis/string
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //Final da criação de variáveis/string
    
    printf("Digite o CPF a ser castrado: "); //Coletando informações do usuário
    scanf("%s", cpf); //%s refere-se aos string
    
    strcpy(arquivo, cpf); //reposponsável por copiar os valores da string
    
    FILE *file; //Cria o arquivo
    file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
    fprintf(file,cpf); // Salvo o valor da váriavel
    fclose(file); // fecha o arquivo
    
    file = fopen(arquivo, "a"); //Abre o arquivo e coloca pontos/caracteres
    fprintf(file, "," );
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: "); //Digite os dados
    scanf("%s", nome); //Digitando o seu nome
    
    file = fopen(arquivo, "a"); //Abre outro arquivo/ coloca as informações
    fprintf(file, nome); //Coleta das informações
    fclose(file); //fecha a página
	
	printf("Digite o sobrenome a ser castrado: "); //
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a"); //Abre a sintaxe do código 
	fprintf(file, sobrenome); //Digite o seu nome
	fclose(file); //fecha a página
	
	file = fopen(arquivo, "a"); //Abre a estrutura para escrever
    fprintf(file, "," ); //coloque a base de pontos
    fclose(file); //fechando o arquivo do sobrenome e coleta das informações
    
    printf("Digite o cargo a ser castrado: "); //Digitando as informações 
    scanf("%s",cargo); //direcionamento a biblioteca, banco de dados na parte do gerenciamento
    
    file = fopen (arquivo, "a"); //Abre o aquivo 
    fprintf(file,cargo); //informações recebidas
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
    	printf("Não foi possível abrir o arquivo, não foi localizado!. \n");
	}

    while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário!: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	} 
 
    system("pause"); 
 


}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL )
	{
		printf("O usuário foi deletado do sistema!.\n");
		printf("Prossiga ao menu...! \n");
		system("pause");
		
		
	}
	
}


int main()
    {
	int opcao=0; //Definindo variáveis 
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	   
	    system("cls"); //reponsável por limpar a tela
	   
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
    
        printf ("### Cartório da EBAC ###\n\n"); //Inicio do menu
        printf ("Escolha a opção desejada no menu:\n\n");
        printf ("\t1 - Registrar nomes \n");
        printf ("\t2 - Consultar nomes \n");
        printf ("\t3 - Deletar nomes \n\n");
        printf ("\t4 - Sair do sistema \n\n");
        printf ("Esse software é de livre uso dos alunos \n:");
        printf ("\tEsse é o primeiro projeto desenvolvido da Ebac:)");
        printf ("\tLucas Mikael (criador dos códigos)");
        printf ("\tOpção: "); // Fim do menu
    
        scanf("%d", &opcao); //armazenamento a escolha do usuário
    
        system("cls");
		
		 
        
        switch(opcao) // Inicio da seleção do menu
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
			printf("Essa opção não se encontra! \n");
		    system("pause");
			break;	
            	
		}   //Final/fim da seleção

        
	       
	
   }
}
