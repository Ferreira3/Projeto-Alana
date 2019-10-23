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

    printf("Sistema de Gerenciamento de Chamados da Alana’s Corporation.\n");
    printf("Digite o seu login: ");scanf("%s",&login);
    printf("Digite sua senha: ");scanf("%s",&senha);
    system("cls");

    if((strcmp (senha,"admin") == 0 ) && (strcmp (login,"admin") == 0 )){
        printf("[Login de administrador].\n\n");
        admin();
    }
    else{
        printf("[Login de usuário]\n\n");
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

/*Armazenar o chamado e fazer alteração do seu valor

Fazer o chamado ser alterado em seu valor aqui.

*/



}



void cliente(){

    printf("BEM-VINDO AO MÓDULO DO CLIENTE!\n");

    int chamado;

    printf("\nVocê precisa criar um chamado?\nEstá tendo algum problema com nossas soluções?\n\n");
    printf("Segue abaixo os tipos de chamado que você pode abrir: \n- Chamados relacionados à internet: Considerações relacionadas à problemas de conexão e outros. \n- Chamados relacionados à serviços de rede: Dispositivos de rede, problemas em serviço de segurança e outros.\n");

    while(chamado!=3){

        printf("\nSelecione:\n[1]Para abrir um novo chamado\n[2]Para enviar mensagem ao suporte\n[3]Para sair\nSua escolha: ");fflush(stdin);scanf("%d", &chamado);

        if(chamado==1){
            ch();
        }
        else if(chamado==2){
            msg();
        }
        else{
           printf("Opção não reconhecida.");
        }
    }

    system("cls");
}


void ch(){

    int i;

    srand(time(NULL));
    printf("\nNovo chamado número: ");
    for (i=0; i <8; i++){
        printf("%d",rand() % 8);
    }
    printf("\nDigite o título do seu chamado: ");fflush(stdin);scanf("%s",&cham_rede.titu);
    printf("Dê uma descrição do seu chamado: ");fflush(stdin);scanf("%s",&cham_rede.des);
    printf("Entre com a data do seu chamado: ");fflush(stdin);scanf("%s",&cham_rede.dat);
    printf("Digite o nome do requerente do chamado: ");fflush(stdin);scanf("%s",&cham_rede.autoria);

}

void msg(){

    printf("\nAqui você poderá enviar uma mensagem de feedback para o nosso suporte, e informar como está o processo.");
    printf("\n>");scanf("%s",&cham_rede.mgs);

}



//Inserir uma struct, para que o chamado volte e seja apresentado o status e o cliente consiga enviar uma mensagem para o suporte dando feedback do que está acontecendo





/* Receber as mensagens do suporte aqui */



