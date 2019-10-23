#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>


typedef struct cham{
    char titu[50];
    char des[200];
    char dat[10];
    char autoria[50];
    char mgs[300];
}cham;

cham cham_rede,cham_inter,cham_mgs;

void admin();
void cliente();
void ch();
void msg();

int main(){

    setlocale(LC_ALL,"Portuguese");

    char login[100];
    char senha[100];

    printf("Sistema de Gerenciamento de Chamados da Alana�s Corporation.\n");
    printf("Digite o seu login: ");scanf("%s",&login);
    printf("Digite sua senha: ");scanf("%s",&senha);
    system("cls");

    if((strcmp (senha,"admin") == 0 ) && (strcmp (login,"admin") == 0 )){
        printf("[Login de administrador].\n\n");
        admin();
    }
    else{
        printf("[Login de usu�rio]\n\n");
        cliente();
}
    return 0;
}

void admin(){


printf("BEM-VINDO AO GERENCIAMENTO DE REDE!\n");


/* Visualizar os chamados abertos e finalizados

Chamar todos os chamados que foram abertos e que foram finalizados!

Armazenar os chamados em um vetor ou variavel para que possa ser chamada depois.

*/

/*Enviar mensagens para o cliente

Enviar mensagens do andamento dos chamados.

*/

/*Armazenar o chamado e fazer altera��o do seu valor

Fazer o chamado ser alterado em seu valor aqui.

*/



}



void cliente(){

    printf("BEM-VINDO AO M�DULO DO CLIENTE!\n");

    int chamado;

    printf("\nVoc� precisa criar um chamado?\nEst� tendo algum problema com nossas solu��es?\n\n");
    printf("Segue abaixo os tipos de chamado que voc� pode abrir: \n- Chamados relacionados � internet: Considera��es relacionadas � problemas de conex�o e outros. \n- Chamados relacionados � servi�os de rede: Dispositivos de rede, problemas em servi�o de seguran�a e outros.\n");

    while(chamado!=3){

        printf("\nSelecione:\n[1]Para abrir um novo chamado\n[2]Para enviar mensagem ao suporte\n[3]Para sair\nSua escolha: ");fflush(stdin);scanf("%d", &chamado);

        if(chamado==1){
            ch();
        }
        else if(chamado==2){
            msg();
        }
        else{
           printf("Op��o n�o reconhecida.");
        }
    }

    system("cls");
}


void ch(){

    int i;

    srand(time(NULL));
    printf("\nNovo chamado n�mero: ");
    for (i=0; i <8; i++){
        printf("%d",rand() % 8);
    }
    printf("\nDigite o t�tulo do seu chamado: ");fflush(stdin);scanf("%s",&cham_rede.titu);
    printf("D� uma descri��o do seu chamado: ");fflush(stdin);scanf("%s",&cham_rede.des);
    printf("Entre com a data do seu chamado: ");fflush(stdin);scanf("%s",&cham_rede.dat);
    printf("Digite o nome do requerente do chamado: ");fflush(stdin);scanf("%s",&cham_rede.autoria);

}

void msg(){

    printf("\nAqui voc� poder� enviar uma mensagem de feedback para o nosso suporte, e informar como est� o processo.");
    printf("\n>");scanf("%s",&cham_rede.mgs);

}



//Inserir uma struct, para que o chamado volte e seja apresentado o status e o cliente consiga enviar uma mensagem para o suporte dando feedback do que est� acontecendo





/* Receber as mensagens do suporte aqui */



