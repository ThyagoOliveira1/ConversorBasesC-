#include <iostream>
#include <stdlib.h>
#include <locale.h>
#define tam 41

using namespace std;

int main()
{
    //biblioteca adicionada para poder utilizar os caracteres especias da Língua Portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Variavel que guarada a opção selecionada pelo usuário no menu
    int opcao;

    // "do" é a uma condição de repetição, então enquanto o usuario não selecionar "0", o menu continuara reproduzindo na tela.
    do{

    //função dada para apagar o funções executadas anteriormente.
    system("clear||cls");

    //Menu de opçãoes de entrada para o usuario selecionar
    cout << "======================================" <<endl;
    cout << "      #Calculadora de Bases#" << endl;
    cout << "======================================" <<endl;
    cout << "\n[1] - Conversão de DECIMAL para BINÁRIO" << endl;
    cout << "\n[2] - Conversão de BINÁRIO para DECIMAL" << endl;
    cout << "\n[0] - CANCELAR" <<endl;
    cout << "\n======================================" <<endl;
    cout << "\nDigite o valor correspondente a correção que você deseja realizar:" << endl;

    //leitura da opção escolhida pelo usuário
    cin >> opcao;
    system("clear||cls");

    //aplicação de um switch, que fornece a possibilidade de uma construção mais lógica para o algorítmo, seguindo a lógica do menu
    switch(opcao){

        //o primeiro caso se refere a conversão de um número decimal em um número binário, que será inserido em um array
        case 1:

                //Variaveis que serão utilizadas no case 1, sendo que [tam] foi definido no início do algoritmo como  [tam] = 41
                int opcao, decimal,result, binario[tam], aux;

                cout << "======================================" <<endl;
                cout << "      #Calculadora de Bases#" << endl;
                cout << "======================================" <<endl;

                //campo em que o usuário irá digitar o número decimal que ele deseja converter em número binário
                cout << "\nDigite um número em DECIMAL: " <<endl;
                cin >> decimal;

                /*utilização do comando for para a construção de um looping que irá executar as condições para que
                um número decimal seja transformado em um número binário*/
                for(aux= tam-1; aux>=0; aux--){
                    binario[aux] = (decimal % 2)== 0 ? 0 : 1;
                    decimal = decimal / 2;
                }

                /*construção de um looping que irá receber a conversão dos números decimais em binários e exibir
                o resultado para o usuário*/
                cout<< "\nO número em BINÁRIO é: " <<endl;
                for(aux=0; aux < tam; aux++){
                cout << binario[aux];
                    if((aux%4)==0){
                        cout << ("\t");
                    }
                }

                cout << "\n" << endl;

                //comando utilizado para o usuari conferir o resultado, antes de voltar para o menu principal
                system("pause");

        //comando break utilizado em toda terminação de um caso switch após o mesmo ser realizado
        break;

        //o segundo caso se refere a conversão de um número decimal em um número binário
        case 2:

                //Variaveis que serão utilizadas
                int numero,resultado, resto = 0;
                int digito[8];//Array

                cout << "======================================" <<endl;
                cout << "      #Calculadora de Bases#" << endl;
                cout << "======================================" <<endl;

                //campo em que o usuário irá digitar o número binario que ele deseja converter em decimal
                cout<< "Digite um número em BINÁRIO: " <<endl;
                cin >> numero;

                //esse operador serve para separa os numero binarios em digitos
                for(int i=0; i< 8; i++){
                    digito[i] = numero % 10;
                    numero = numero / 10;
                }

                //esse operador vai contruir o resultado
                for(int i=8; i>=0; i--){
                    resultado = (resto * 2) + digito[i];
                    resto = resultado;
                }

                //Comando de saida do resultado
                cout<< "\nO numero em DECIMAL é: " <<endl;
                cout<< resultado <<endl;

                system("pause");

        //comando break utilizado em toda terminação de um caso switch após o mesmo ser realizado
        break;


        }//fim do switch

    }while(opcao != 0);//fim do "do"

}
