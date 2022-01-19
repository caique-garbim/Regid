#include <stdio.h>      //BIBLIOTECA PADRÃO DE INPUT E OUTPUT
#include <windows.h>    //BIBLIOTECA PARA EXIBIR AS MSG BOX
#include <stdlib.h>     //BIBLIOTECA PARA EXECUTAR COMANDOS DO SISTEMA WINDOWS
#include <stdbool.h>    //BIBLIOTECA PARA O USO DE BOOLEANS

void main() {

    //VARIÁVEIS
    char usuario[21] = "admin";      //credenciais de acesso
    char senha[21] = "admin";        //credenciais de acesso
    char usuario1[21];               //entrada
    char senha1[21];                 //entrada
    bool login_efetuado = false;     //condição do login

    //PERSONALIZAÇÃO DA JANELA
    system("color 0F");                 //define as cores
    system("mode 51,20");               //define o tamanho da janela
    SetConsoleTitle("Regid - Login");   //define o titulo da janela
    system("cls");                      //limpa a tela

    //ANIMAÇÃO DE ABERTURA DO REGID
    system("color 04");
    printf("\n\n\n\n\n\n\n");
    printf("                        ÚÄ¿\n");
    printf("                        ÀÄÙ\n");
    printf("\n\n\n\n\n\n\n");
    Sleep(100);
    system("cls");
    printf("\n\n\n\n\n\n");
    printf("                        ÚÄ¿\n");
    printf("                        ³`³\n");
    printf("                        ³ ³\n");
    printf("                        ÀÄÙ\n");
    printf("\n\n\n\n\n\n");
    Sleep(100);
    system("cls");
    printf("\n\n\n\n\n");
    printf("                        ÚÄ¿\n");
    printf("                        ³8³\n");
    printf("                        ³`³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ÀÄÙ\n");
    printf("\n\n\n\n\n");
    Sleep(100);
    system("cls");
    printf("\n\n\n\n");
    printf("                        ÚÄ¿\n");
    printf("                        ³8³\n");
    printf("                        ³8³\n");
    printf("                        ³`³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ÀÄÙ\n");
    printf("\n\n\n\n");
    Sleep(100);
    system("cls");
    printf("\n\n\n");
    printf("                        ÚÄ¿\n");
    printf("                        ³.³\n");
    printf("                        ³8³\n");
    printf("                        ³8³\n");
    printf("                        ³`³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³q³\n");
    printf("                        ÀÄÙ\n");
    printf("\n\n\n");
    Sleep(100);
    system("cls");
    printf("\n\n");
    printf("                        ÚÄ¿\n");
    printf("                        ³ ³\n");
    printf("                        ³.³\n");
    printf("                        ³8³\n");
    printf("                        ³8³\n");
    printf("                        ³`³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³q³\n");
    printf("                        ÀÄÙ\n");
    printf("                        ÚÄ¿\n");
    printf("\n\n");
    Sleep(100);
    system("cls");
    printf("\n                        ÚÄ¿\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³.³\n");
    printf("                        ³8³\n");
    printf("                        ³8³\n");
    printf("                        ³`³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³q³\n");
    printf("                        ÀÄÙ\n");
    printf("                        ÚÄ¿\n");
    printf("                        ÀÄÙ\n\n");
    Sleep(100);
    system("cls");
    printf("                        ÚÄ¿\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³.³\n");
    printf("                        ³8³\n");
    printf("                        ³8³\n");
    printf("                        ³`³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³ ³\n");
    printf("                        ³q³\n");
    printf("                        ÀÄÙ\n");
    printf("                        ÚÄ¿\n");
    printf("                        ³ ³\n");
    printf("                        ÀÄÙ\n");
    Sleep(100);
    system("color 09");
    system("cls");
    printf("                      ÚÄÄÄÄÄ¿\n");
    printf("                      ³     ³\n");
    printf("                      ³     ³\n");
    printf("                      ³     ³\n");
    printf("                      ³. .d8³\n");
    printf("                      ³8 88'³\n");
    printf("                      ³. 88.³\n");
    printf("                      ³' `88³\n");
    printf("                      ³     ³\n");
    printf("                      ³   d8³\n");
    printf("                      ³     ³\n");
    printf("                      ³aique³\n");
    printf("                      ÀÄÄÄÄÄÙ\n");
    printf("                      ÚÄÄÄÄÄ¿\n");
    printf("                      ³de pa³\n");
    printf("                      ÀÄÄÄÄÄÙ\n");
    Sleep(100);
    system("cls");
    printf("                   ÚÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("                   ³           ³\n");
    printf("                   ³           ³\n");
    printf("                   ³           ³\n");
    printf("                   ³88b. .d8888³\n");
    printf("                   ³ood8 88'  `³\n");
    printf("                   ³ ... 88.  .³\n");
    printf("                   ³88P' `8888P³\n");
    printf("                   ³          .³\n");
    printf("                   ³      d8888³\n");
    printf("                   ³           ³\n");
    printf("                   ³r Caique Ga³\n");
    printf("                   ÀÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("                   ÚÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("                   ³ro de pacie³\n");
    printf("                   ÀÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    Sleep(100);
    system("cls");
    printf("                ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("                ³                 ³\n");
    printf("                ³                 ³\n");
    printf("                ³                 ³\n");
    printf("                ³d8888b. .d8888b. ³\n");
    printf("                ³8ooood8 88'  `88 ³\n");
    printf("                ³8.  ... 88.  .88 ³\n");
    printf("                ³88888P' `8888P88 ³\n");
    printf("                ³             .88 ³\n");
    printf("                ³         d8888P  ³\n");
    printf("                ³                 ³\n");
    printf("                ³ por Caique Garbi³\n");
    printf("                ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("                ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("                ³istro de paciente³\n");
    printf("                ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    Sleep(100);
    system("cls");
    printf("             ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("             ³                       ³\n");
    printf("             ³                    oo ³\n");
    printf("             ³b                      ³\n");
    printf("             ³' .d8888b. .d8888b. dP ³\n");
    printf("             ³. 88ooood8 88'  `88 88 ³\n");
    printf("             ³8 88.  ... 88.  .88 88 ³\n");
    printf("             ³P `88888P' `8888P88 dP ³\n");
    printf("             ³                .88    ³\n");
    printf("             ³            d8888P   ve³\n");
    printf("             ³                       ³\n");
    printf("             ³ido por Caique Garbim -³\n");
    printf("             ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("             ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("             ³registro de pacientes c³\n");
    printf("             ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    Sleep(100);
    system("cls");
    printf("          ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("          ³                             ³\n");
    printf("          ³8ba                    oo    ³\n");
    printf("          ³ `8b                         ³\n");
    printf("          ³a8P' .d8888b. .d8888b. dP .d8³\n");
    printf("          ³`8b. 88ooood8 88'  `88 88 88'³\n");
    printf("          ³  88 88.  ... 88.  .88 88 88.³\n");
    printf("          ³  dP `88888P' `8888P88 dP `88³\n");
    printf("          ³                   .88       ³\n");
    printf("          ³               d8888P   versÆ³\n");
    printf("          ³                             ³\n");
    printf("          ³olvido por Caique Garbim - 00³\n");
    printf("          ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("          ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("          ³de registro de pacientes com ³\n");
    printf("          ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    Sleep(100);
    system("cls");
    printf("       ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("       ³                                   ³\n");
    printf("       ³8888ba                    oo       ³\n");
    printf("       ³    `8b                            ³\n");
    printf("       ³aaaa8P' .d8888b. .d8888b. dP .d888b³\n");
    printf("       ³   `8b. 88ooood8 88'  `88 88 88'  `³\n");
    printf("       ³     88 88.  ... 88.  .88 88 88.  .³\n");
    printf("       ³     dP `88888P' `8888P88 dP `88888³\n");
    printf("       ³                      .88          ³\n");
    printf("       ³                  d8888P   versÆo 1³\n");
    printf("       ³                                   ³\n");
    printf("       ³envolvido por Caique Garbim - 00000³\n");
    printf("       ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("       ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("       ³ma de registro de pacientes com COV³\n");
    printf("       ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    Sleep(100);
    system("cls");
    printf("    ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("    ³                                         ³\n");
    printf("    ³ 888888ba                    oo       dP ³\n");
    printf("    ³ 88    `8b                            88 ³\n");
    printf("    ³a88aaaa8P' .d8888b. .d8888b. dP .d888b88 ³\n");
    printf("    ³ 88   `8b. 88ooood8 88'  `88 88 88'  `88 ³\n");
    printf("    ³ 88     88 88.  ... 88.  .88 88 88.  .88 ³\n");
    printf("    ³ dP     dP `88888P' `8888P88 dP `88888P8 ³\n");
    printf("    ³                         .88             ³\n");
    printf("    ³                     d8888P   versÆo 1.0 ³\n");
    printf("    ³                                         ³\n");
    printf("    ³Desenvolvido por Caique Garbim - 0000000 ³\n");
    printf("    ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("    ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("    ³stema de registro de pacientes com COVID-³\n");
    printf("    ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    Sleep(100);
    system("cls");
    printf(" ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf(" ³                                               ³\n");
    printf(" ³    888888ba                    oo       dP    ³\n");
    printf(" ³    88    `8b                            88    ³\n");
    printf(" ³   a88aaaa8P' .d8888b. .d8888b. dP .d888b88    ³\n");
    printf(" ³    88   `8b. 88ooood8 88'  `88 88 88'  `88    ³\n");
    printf(" ³    88     88 88.  ... 88.  .88 88 88.  .88    ³\n");
    printf(" ³    dP     dP `88888P' `8888P88 dP `88888P8    ³\n");
    printf(" ³                            .88                ³\n");
    printf(" ³                        d8888P   versÆo 1.0    ³\n");
    printf(" ³                                               ³\n");
    printf(" ³   Desenvolvido por Caique Garbim - 0000000    ³\n");
    printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf(" ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf(" ³ Sistema de registro de pacientes com COVID-19 ³\n");
    printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    Sleep(100);
    system("cls");
    //FIM DA ANIMAÇÃO

    //CABEÇALHO DO LOGIN
    system("color 0F");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³                                                 ³\n");
    printf("³     888888ba                    oo       dP     ³\n");
    printf("³     88    `8b                            88     ³\n");
    printf("³    a88aaaa8P' .d8888b. .d8888b. dP .d888b88     ³\n");
    printf("³     88   `8b. 88ooood8 88'  `88 88 88'  `88     ³\n");
    printf("³     88     88 88.  ... 88.  .88 88 88.  .88     ³\n");
    printf("³     dP     dP `88888P' `8888P88 dP `88888P8     ³\n");
    printf("³                             .88                 ³\n");
    printf("³                         d8888P   versÆo 1.0     ³\n");
    printf("³                                                 ³\n");
    printf("³    Desenvolvido por Caique Garbim - 0000000     ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³  Sistema de registro de pacientes com COVID-19  ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");

    //SISTEMA DE LOGIN admin:admin
    while(!login_efetuado){
        printf("\n                USUµRIO  ");
        gets(usuario1); //GETS considera o ENTER para prosseguir

        printf("                SENHA    ");
        gets(senha1);   //GETS considera o ENTER para prosseguir

        //COMPARA OS INPUTS COM AS VARIÁVEIS QUE CONTÉM AS CREDENCIAIS CORRETAS
        if (strcmp(usuario, usuario1) == 0 && strcmp(senha, senha1) == 0){
            login_efetuado = true;
            tela2();
        }
        //CASO OS INPUTS NÃO CORRESPONDEREM
        else
            MessageBox (NULL, "LOGIN INVÁLIDO!\n\nPerdeu o acesso? Entre em contato com o suporte.\n\nsuporte: suporte@site.com.br" , "LOGIN INVÁLIDO", 5);
            main();
        }
    return 0;
}

//LOGIN EFETUADO
void tela2() {

    //VARIÁVEIS
    char input_controle[2]; //entrada do usuário

    //PERSONALIZAÇÃO DA JANELA
    system("color F0");                     //define as cores
    system("mode 56,18");                   //define o tamanho da janela
    SetConsoleTitle("Regid - Controle");    //define o titulo da janela
    system("cls");                          //limpa a tela

    //ANIMAÇÃO DE ABERTURA DA JANELA
    system("color 04");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                           ÍÍ                           \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                          ÍÍÍÍ                          \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                         ÍÍÍÍÍÍ                         \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                        ÍÍÍÍÍÍÍÍ                        \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                       ÍÍÍÍÍÍÍÍÍÍ                       \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                      ÍÍÍÍÍÍÍÍÍÍÍÍ                      \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                     ÍÍÍÍÍÍÍÍÍÍÍÍÍÍ                     \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                    ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ                    \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                   ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ                   \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                  ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ                  \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                 ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ                 \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("                ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ                \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("               ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ               \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("               ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ               \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("              ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ              \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("             ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ             \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("            ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ            \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("           ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ           \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("          ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ          \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("         ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ         \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("        ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ        \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("       ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ       \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("      ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ      \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("     ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ     \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("    ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ    \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("   ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ   \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("  ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ  \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf(" ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ \n");
    printf("\n\n\n\n\n\n");
    Sleep(20);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("\n\n\n\n\n\n");
    Sleep(100);
    system("color 09");
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("ºººººÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙººººº\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("\n\n\n\n\n");
    Sleep(100);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("ººººº³ 3  CONSULTAR CADASTRO DO GRUPO DE RISCO   ³ººººº\n");
    printf("ºººººÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙººººº\n");
    printf("ºººººººººººººººººººººººººººººººººººººººººººººººººººººººº\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("\n\n\n\n");
    Sleep(100);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("ººººº³ 2  CONSULTAR CADASTRO GERAL               ³ººººº\n");
    printf("ººººº³ 3  CONSULTAR CADASTRO DO GRUPO DE RISCO   ³ººººº\n");
    printf("ºººººÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙººººº\n");
    printf("ºººººººººººººººººººººººººººººººººººººººººººººººººººººººº\n");
    printf("ºººººÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ººººº\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("\n\n\n");
    Sleep(100);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\n\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("ººººº³ 1  CADASTAR NOVO PACIENTE                 ³ººººº\n");
    printf("ººººº³ 2  CONSULTAR CADASTRO GERAL               ³ººººº\n");
    printf("ººººº³ 3  CONSULTAR CADASTRO DO GRUPO DE RISCO   ³ººººº\n");
    printf("ºººººÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙººººº\n");
    printf("ºººººººººººººººººººººººººººººººººººººººººººººººººººººººº\n");
    printf("ºººººÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ººººº\n");
    printf("ººººº³ 4  FAZER LOGOUT                           ³ººººº\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("\n\n");
    Sleep(100);
    system("cls");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("\nÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("ºººººÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ººººº\n");
    printf("ººººº³ 1  CADASTAR NOVO PACIENTE                 ³ººººº\n");
    printf("ººººº³ 2  CONSULTAR CADASTRO GERAL               ³ººººº\n");
    printf("ººººº³ 3  CONSULTAR CADASTRO DO GRUPO DE RISCO   ³ººººº\n");
    printf("ºººººÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙººººº\n");
    printf("ºººººººººººººººººººººººººººººººººººººººººººººººººººººººº\n");
    printf("ºººººÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ººººº\n");
    printf("ººººº³ 4  FAZER LOGOUT                           ³ººººº\n");
    printf("ºººººÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙººººº\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n\n");
    Sleep(100);
    //FIM DA ANIMAÇÃO

    //CABEÇALHO DO CONTROLE
    system("cls");
    system("color 0F");
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³               ESCOLHA A OP€ÇO DESEJADA               ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf("ºººººººººººººººººººººººººººººººººººººººººººººººººººººººº\n");
    printf("ºººººÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ººººº\n");
    printf("ººººº³ 1  CADASTAR NOVO PACIENTE                 ³ººººº\n");
    printf("ººººº³ 2  CONSULTAR CADASTRO GERAL               ³ººººº\n");
    printf("ººººº³ 3  CONSULTAR CADASTRO DO GRUPO DE RISCO   ³ººººº\n");
    printf("ºººººÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙººººº\n");
    printf("ºººººººººººººººººººººººººººººººººººººººººººººººººººººººº\n");
    printf("ºººººÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ººººº\n");
    printf("ººººº³ 4  FAZER LOGOUT                           ³ººººº\n");
    printf("ºººººÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙººººº\n");
    printf("ºººººººººººººººººººººººººººººººººººººººººººººººººººººººº\n");
    printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
    printf(" OP€ÇO  ");
    gets(input_controle); //ENTRADA DA OPÇÃO DESEJADA

    //RECONHECE A OPÇÃO DIGITADA E LEVA À PAGINA DESEJADA
    if (strcmp(input_controle, "1") == 0) {;
        //OPÇÃO 1 - LEVA AO FURMULÁRIO
        cadastro_novo_paciente();
    }
    if (strcmp(input_controle, "2") == 0) {
        //OPÇÃO 2 - LEVA À TELA COM CADASTRO GERAL DE PACIENTES
        consultar_cadastro_geral();
    }
    if (strcmp(input_controle, "3") == 0) {
        //OPÇÃO 3 - LEVA À TELA COM CADASTRO PACIENTES DO GRUPO DE RISCO
        consultar_cadastro_grupo();
    }
    if (strcmp(input_controle, "4") == 0) {
        //OPÇÃO 4 - O LOGOUT RETORNA À TELA DE LOGIN
        main();
    }
    //MENSAGEM DE ERRO CASO A ENTRADA FOR INVÁLIDA
    else {
        MessageBox (NULL, "Opção inválida.\n\nEscolha a opção desejada e digite o número correspondente." , "OPÇÃO INVÁLIDA", 1);
        tela2();
    }
    return 0;
}

//OPÇÃO 1 - CADASTRO DE NOVO PACIENTE
void cadastro_novo_paciente() {

    //VARIÁVEIS PONTEIRO PARA OS ARQUIVOS
    FILE *lista_de_pacientes;
    FILE *pacientes_gp_de_risco;

    //VARIÁVEIS DO FORMULÁRIO
    char nome_paciente[51];                 //nome do paciente: max 50 caracteres
    char cpf_paciente[16];                  //cpf do paciente: max 15 caracteres
    char telefone_paciente[16];             //telefone do paciente: max 15 caracteres
    char rua_endereco_paciente[51];         //rua do paciente: max 50 caracteres
    char nr_endereco_paciente[11];          //numero da casa do paciente: max 10 caracteres
    char cidade_endereco_paciente[21];      //cidade do paciente: max 20 caracteres
    char estado_endereco_paciente[21];      //estado do paciente: max 20 caracteres
    char cep_endereco_paciente[16];         //cep do paciente: max 15 caracteres
    int dia_nascimento_paciente;            //dia do nascimento do paciente
    int mes_nascimento_paciente;            //mes de nascimento do paciente
    int ano_nascimento_paciente;            //ano de nascimento do paciente
    char email_paciente[51];                //email do paciente: max 51 caracteres
    int dia_diagnostico_paciente;           //dia do diagnostico do paciente
    int mes_diagnostico_paciente;           //mes do diagnostico do paciente
    int ano_diagnostico_paciente;           //ano do diagnostico do paciente
    char comorbidade_paciente[51];          //comorbidade do paciente: max 50 caracteres
    bool grupo_de_risco = false;            //condição da comorbidade

    //VARIAVEIS DA IDADE DO PACIENTE (COMPARA AS DATAS DO NASCIMENTO COM DIAGNÓSTICO)
    int idade_dia, idade_mes, idade_ano;

    //VARIÁVEL DE INPUT
    char input_formulario[11];              //entrada do usuário
    char buffer[100];                       //armazenar valor caso ocorra estouro de buffer

    //PERSONALIZAÇÃO DA JANELA
    system("color 1F");                     //define as cores
    system("mode 60,62");                   //define o tamanho da janela
    SetConsoleTitle("Regid - Formulario");  //define o titulo da janela
    system("cls");                          //limpa a tela

    //CABEÇALHO DO FORMULÁRIO
    printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³ PREENCHA OS CAMPOS PARA REALIZAR O CADASTRO DO PACIENTE  ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf(" [*] PREENCHIMENTO OBRIGATàRIO\n\n");
    printf("            ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("            ³          DADOS PESSOAIS          ³\n");
    printf("            ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n\n");

    printf("   [*] NOME COMPLETO: ");
    gets(nome_paciente);

    //VERIFICA SE FOI INSERIDO UM NOME VÁLIDO PELO TAMANHO DA STRING
    if(strlen(nome_paciente) < 5) {
        MessageBox(NULL, "Nome inválido.\n\nO preenchimento do nome completo é obrigatório.\n\nExemplo: Fulano de Souza" , "NOME INVÁLIDO", 1);
        cadastro_novo_paciente();
    }

    printf("   [*] CPF: ");
    gets(cpf_paciente);

    //VERIFICA SE FOI INSERIDO UM CPF VÁLIDO PELO TAMANHO DA STRING
    if(strlen(cpf_paciente) < 11) {
        MessageBox(NULL, "CPF inválido.\n\nO preenchimento do CPF é obrigatório.\n\nExemplo: 11122233344 ou 111.222.333-44" , "CPF INVÁLIDO", 1);
        cadastro_novo_paciente();
    }

    printf("\n");
    printf("            ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("            ³  DATA DE NASCIMENTO DO PACIENTE  ³\n");
    printf("            ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");

    printf("\n   [*] DIA: ");
    scanf("%d", &dia_nascimento_paciente);

    //CASO FOR INSERIDO UM DIA INVÁLIDO
    if(dia_nascimento_paciente > 31 || dia_nascimento_paciente < 1) {
        MessageBox(NULL, "Valor inválido.\n\nPreencha o dia corretamente (de 01 à 31)." , "VALOR INVÁLIDO", 1);
        gets(buffer); //armazenar valor estourado
        cadastro_novo_paciente();
    }

    printf("   [*] MÒS: ");
    scanf("%d", &mes_nascimento_paciente);

    //CASO FOR INSERIDO UM MÊS INVÁLIDO
    if(mes_nascimento_paciente > 12 || mes_nascimento_paciente < 1) {
        MessageBox(NULL, "Valor inválido.\n\nPreencha o mês corretamente (de 01 à 12)." , "VALOR INVÁLIDO", 1);
        gets(buffer); //armazenar valor estourado
        cadastro_novo_paciente();
    }

    printf("   [*] ANO: ");
    scanf("%d", &ano_nascimento_paciente);

    //CASO FOR INSERIDO UM ANO INVÁLIDO
    if(ano_nascimento_paciente > 2021 || ano_nascimento_paciente < 1900) {
        MessageBox(NULL, "Valor inválido.\n\nPreencha o ano corretamente (de 1900 à 2021)." , "VALOR INVÁLIDO", 1);
        gets(buffer); //armazenar valor estourado
        cadastro_novo_paciente();
    }

    printf("\n");
    printf("            ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("            ³        ENDERE€O RESIDENCIAL      ³\n");
    printf("            ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n\n");
    printf("   NOME DA RUA/AV: ");

    gets(buffer); //armazenar valor estourado
    gets(rua_endereco_paciente);

    printf("   NéMERO: ");
    gets(nr_endereco_paciente);

    printf("   CIDADE: ");
    gets(cidade_endereco_paciente);

    printf("   ESTADO: ");
    gets(estado_endereco_paciente);

    printf("   [*] CEP: ");
    gets(cep_endereco_paciente);

    //VERIFICA SE FOI INSERIDO UM CEP VÁLIDO PELO TAMANHO DA STRING
    if(strlen(cep_endereco_paciente) < 8) {
        MessageBox(NULL, "CEP inválido.\n\nO preenchimento do CEP é obrigatório.\n\nExemplo: 12345678 ou 12345-678" , "CEP INVÁLIDO", 1);
        cadastro_novo_paciente();
    }

    printf("\n");
    printf("            ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("            ³              CONTATO             ³\n");
    printf("            ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");

    printf("\n   TELEFONE OU CELULAR: ");
    gets(telefone_paciente);

    printf("   E-MAIL: ");
    gets(email_paciente);

    printf("\n");
    printf("            ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("            ³ DATA DO DIAGNàSTICO DO PACIENTE  ³\n");
    printf("            ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");

    printf("\n   [*] DIA: ");
    scanf("%d", &dia_diagnostico_paciente);

    //CASO FOR INSERIDO UM DIA INVÁLIDO
    if(dia_diagnostico_paciente > 31 || dia_diagnostico_paciente < 1) {
        MessageBox(NULL, "Valor inválido.\n\nPreencha o dia corretamente (de 01 à 31)." , "VALOR INVÁLIDO", 1);
        gets(buffer); //armazenar valor estourado
        cadastro_novo_paciente();
    }

    printf("   [*] MÒS: ");
    scanf("%d", &mes_diagnostico_paciente);

    //CASO FOR INSERIDO UM MES INVÁLIDO
    if(mes_diagnostico_paciente > 12 || mes_diagnostico_paciente < 1) {
        MessageBox(NULL, "Valor inválido.\n\nPreencha o mês corretamente (de 01 à 12)." , "VALOR INVÁLIDO", 1);
        gets(buffer); //armazenar valor estourado
        cadastro_novo_paciente();
    }

    printf("   [*] ANO: ");
    scanf("%d", &ano_diagnostico_paciente);

    //CASO FOR INSERIDO UM ANO INVÁLIDO
    if(ano_diagnostico_paciente > 2021 || ano_diagnostico_paciente < 2019) {
        MessageBox(NULL, "Valor inválido.\n\nPreencha o ano corretamente (de 2019 à 2021)." , "VALOR INVÁLIDO", 1);
        gets(buffer); //armazenar valor estourado
        cadastro_novo_paciente();
    }

    //REALIZA O CALCULO DA IDADE COM BASE NAS DATAS: NASCIMENTO E DIAGNÓSTICO
    idade_ano = ano_diagnostico_paciente - ano_nascimento_paciente;
    idade_mes = mes_diagnostico_paciente - mes_nascimento_paciente;
    idade_dia = dia_diagnostico_paciente - dia_nascimento_paciente;

    if(mes_diagnostico_paciente < mes_nascimento_paciente) {
        idade_ano = idade_ano - 1;
    }
    if(dia_diagnostico_paciente < dia_nascimento_paciente) {
        idade_mes = idade_mes - 1;
    }
    if(idade_dia < 1) {
        idade_dia = idade_dia + 30;
    }
    if(idade_ano > 65) {
        MessageBox(NULL, "O paciente no presente formulário está presente no GRUPO DE RISCO.\n\nO paciente possui idade superior a 65 anos.\n", "AVISO", 1);
        grupo_de_risco = true; //o paciente está no grupo de risco
    }

    printf("\n");
    printf("            ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("            ³       INFORMA€åES ADICIONAIS     ³\n");
    printf("            ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");

    printf("\n   [*] POSSUI COMORBIDADE? QUAL?\n  (SE NÇO HOUVER, APENAS PRESSIONE 'enter'): ");
    gets(buffer); //armazenar valor estourado
    gets(comorbidade_paciente);

    //VERIFICA A RESPOSTA DA COMORBIDADE: SE FOR DIGITADO ALGO, O SISTEMA CONSIDERA QUE POSSUI
    if (strlen(comorbidade_paciente) > 1) {
        MessageBox(NULL, "O paciente no presente formulário está presente no GRUPO DE RISCO.\n\nVocê informou que o paciente possui comorbidade.","AVISO",1);
        grupo_de_risco = true; //o paciente está no grupo de risco
    }

    //RODAPÉ DO FORMULÁRIO
    system("color 0F"); //define as cores
    printf("\nÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
    printf("³  PARA CONFIRMAR O CADASTRO DIGITE 'confirmar'.          ³\n");
    printf("³                                                          ³\n");
    printf("³  PARA CANCELAR O CADASTRO DIGITE 'cancelar'.            ³\n");
    printf("³                                                          ³\n");
    printf("³  PARA CORRIGIR O CADASTRO DIGITE 'corrigir'.            ³\n");
    printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
    printf(" DIGITE  ");
    gets(input_formulario);

    if (strcmp(input_formulario, "confirmar") == 0) {

        //ABRE OS ARQUIVOS APONTADOS PARA GRAVAÇÃO/ESCRITA

        //lista geral de todos os pacientes cadastrados
        lista_de_pacientes = fopen("TODOS_OS_PACIENTES.txt", "a");

        //lista dos pacientes reconhecidos no grupo de risco
        pacientes_gp_de_risco = fopen("PACIENTES_GRUPO_DE_RISCO.txt", "a");

        //INFORMAÇÕES GRAVADAS NO ARQUIVO (TODOS OS PACIENTES CADASTRADOS)
        fprintf(lista_de_pacientes, "DADOS PESSOAIS\n");
        fprintf(lista_de_pacientes, "- NOME COMPLETO: %s\n", nome_paciente);
        fprintf(lista_de_pacientes, "- CPF: %s\n", cpf_paciente);
        fprintf(lista_de_pacientes, "- IDADE: %d\n", idade_ano);
        fprintf(lista_de_pacientes, "DATA DE NASCIMENTO DO PACIENTE\n");
        fprintf(lista_de_pacientes, "- DIA: %d\n", dia_nascimento_paciente);
        fprintf(lista_de_pacientes, "- MES: %d\n", mes_nascimento_paciente);
        fprintf(lista_de_pacientes, "- ANO: %d\n", ano_nascimento_paciente);
        fprintf(lista_de_pacientes, "ENDERECO RESIDENCIAL\n");
        fprintf(lista_de_pacientes, "- NOME DA RUA/AV: %s\n", rua_endereco_paciente);
        fprintf(lista_de_pacientes, "- NUMERO: %s\n", nr_endereco_paciente);
        fprintf(lista_de_pacientes, "- CIDADE: %s\n", cidade_endereco_paciente);
        fprintf(lista_de_pacientes, "- ESTADO: %s\n", estado_endereco_paciente);
        fprintf(lista_de_pacientes, "- CEP: %s\n", cep_endereco_paciente);
        fprintf(lista_de_pacientes, "CONTATO\n");
        fprintf(lista_de_pacientes, "- TELEFONE OU CELULAR: %s\n", telefone_paciente);
        fprintf(lista_de_pacientes, "- E-MAIL: %s\n", email_paciente);
        fprintf(lista_de_pacientes, "DATA DO DIAGNÓSTICO DO PACIENTE\n");
        fprintf(lista_de_pacientes, "- DIA: %d\n", dia_diagnostico_paciente);
        fprintf(lista_de_pacientes, "- MES: %d\n", mes_diagnostico_paciente);
        fprintf(lista_de_pacientes, "- ANO: %d\n", ano_diagnostico_paciente);
        fprintf(lista_de_pacientes, "INFORMACOES ADICIONAIS\n");
        fprintf(lista_de_pacientes, "- COMORBIDADE: %s\n", comorbidade_paciente);
        fprintf(lista_de_pacientes, "-------------------------------------------------------\n");

        //INFORMAÇÕES GRAVADAS NO ARQUIVO (SOMENTE OS PACIENTES DO GRUPO DE RISCO)
        if(grupo_de_risco == true) {
            fprintf(pacientes_gp_de_risco, "- CEP: %s\n", cep_endereco_paciente);
            fprintf(pacientes_gp_de_risco, "- IDADE: %d\n", idade_ano);
            fprintf(pacientes_gp_de_risco, "-------------------------------------------------------\n");
        }

        //FECHA OS ARQUIVOS APONTADOS PARA GRAVAÇÃO
        fclose(lista_de_pacientes);
        fclose(pacientes_gp_de_risco);

        //MENSAGEM DE CADASTRO REALIZADO
        MessageBox(NULL, "Cadastro realizado com sucesso." , "SUCESSO", 1);
        tela2();
    }
    if (strcmp(input_formulario, "cancelar") == 0) {
        //RETORNA À TELA ANTERIOR
        MessageBox(NULL, "Cadastro cancelado." , "CANCELADO", 1);
        tela2();
    }
    if (strcmp(input_formulario, "corrigir") == 0) {
        //LIMPA O FORMULARIO
        MessageBox(NULL, "Formulário resetado para correção." , "RESETADO", 1);
        cadastro_novo_paciente();
    }
    else {
        //CASO O USUÁRIO NÃO DIGITAR CORRETAMENTE
        MessageBox(NULL, "Opção inválida.\n\nVerifique as opções existentes e digite exatamente igual ao exemplo.\n\nVerifique se o CAPS LOCK está ativado e desabilite." , "OPÇÃO INVÁLIDA", 1);
        cadastro_novo_paciente();
    }
    return 0;
}

//OPÇÃO 2 - CONSULTAR CADASTRO GERAL
void consultar_cadastro_geral() {

    //VARIÁVEL PONTEIRO PARA O ARQUIVO
    FILE *lista_de_pacientes;

    //ABRE O ARQUIVO APONTADO PARA CONSULTA/LEITURA
    lista_de_pacientes = fopen("TODOS_OS_PACIENTES.txt", "r");

    //VERIFICA SE O ARQUIVO EXISTE
    if(lista_de_pacientes == NULL) {
        MessageBox(NULL, "Não existem pacientes cadastrados.\n" , "NÃO EXISTE", 1);
        tela2();
    }

    //SE O ARQUIVO FOI ENCONTRADO SERÁ ABERTO PARA O USUÁRIO
    else {
        //PERSONALIZAÇÃO DA JANELA
        system("color 0F");                                    //define as cores
        system("mode 55,80");                                  //define o tamanho da janela
        SetConsoleTitle("Regid - Consulta Cadastro Geral");    //define o titulo da janela
        system("cls");                                         //limpa a tela

        system("type TODOS_OS_PACIENTES.txt");

        //FECHA O ARQUIVO APONTADO PARA LEITURA
        fclose(lista_de_pacientes);
        system("pause");
        tela2();
    }
    return 0;
}

//OPÇÃO 3 - CONSULTAR CADASTRO DE PACIENTES DO GRUPO DE RISCO
void consultar_cadastro_grupo() {

    //VARIÁVEL PONTEIRO PARA O ARQUIVO
    FILE *pacientes_gp_de_risco;

    //ABRE O ARQUIVO APONTADO PARA CONSULTA/LEITURA
    pacientes_gp_de_risco = fopen("PACIENTES_GRUPO_DE_RISCO.txt", "r");

    //VERIFICA SE O ARQUIVO EXISTE
    if(pacientes_gp_de_risco == NULL) {
        MessageBox(NULL, "Não existem pacientes do grupo de risco cadastrados.\n" , "NÃO EXISTE", 1);
        tela2();
    }

    //SE O ARQUIVO FOI ENCONTRADO SERÁ ABERTO PARA O USUÁRIO
    else {
        //PERSONALIZAÇÃO DA JANELA
        system("color 0F");                                    //define as cores
        system("mode 55,80");                                  //define o tamanho da janela
        SetConsoleTitle("Regid - Consulta Grupo de Risco");    //define o titulo da janela
        system("cls");                                         //limpa a tela

        system("type PACIENTES_GRUPO_DE_RISCO.txt");

        //FECHA O ARQUIVO APONTADO PARA LEITURA
        fclose(pacientes_gp_de_risco);
        system("pause");
        tela2();
    }
    return 0;
}
