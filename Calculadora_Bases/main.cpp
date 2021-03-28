#include <iostream>
#include <stdlib.h>
#include <locale.h>
#define tam 41

using namespace std;

int main()
{
    //biblioteca adicionada para poder utilizar os caracteres especias da L�ngua Portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Variavel que guarada a op��o selecionada pelo usu�rio no menu
    int opcao;

    // "do" � a uma condi��o de repeti��o, ent�o enquanto o usuario n�o selecionar "0", o menu continuara reproduzindo na tela.
    do{

    //fun��o dada para apagar o fun��es executadas anteriormente.
    system("clear||cls");

    //Menu de op��oes de entrada para o usuario selecionar
    cout << "======================================" <<endl;
    cout << "      #Calculadora de Bases#" << endl;
    cout << "======================================" <<endl;
    cout << "\n[1] - Convers�o de DECIMAL para BIN�RIO" << endl;
    cout << "\n[2] - Convers�o de BIN�RIO para DECIMAL" << endl;
    cout << "\n[0] - CANCELAR" <<endl;
    cout << "\n======================================" <<endl;
    cout << "\nDigite o valor correspondente a corre��o que voc� deseja realizar:" << endl;

    //leitura da op��o escolhida pelo usu�rio
    cin >> opcao;
    system("clear||cls");

    //aplica��o de um switch, que fornece a possibilidade de uma constru��o mais l�gica para o algor�tmo, seguindo a l�gica do menu
    switch(opcao){

        //o primeiro caso se refere a convers�o de um n�mero decimal em um n�mero bin�rio, que ser� inserido em um array
        case 1:

                //Variaveis que ser�o utilizadas no case 1, sendo que [tam] foi definido no in�cio do algoritmo como  [tam] = 41
                int opcao, decimal,result, binario[tam], aux;

                cout << "======================================" <<endl;
                cout << "      #Calculadora de Bases#" << endl;
                cout << "======================================" <<endl;

                //campo em que o usu�rio ir� digitar o n�mero decimal que ele deseja converter em n�mero bin�rio
                cout << "\nDigite um n�mero em DECIMAL: " <<endl;
                cin >> decimal;

                /*utiliza��o do comando for para a constru��o de um looping que ir� executar as condi��es para que
                um n�mero decimal seja transformado em um n�mero bin�rio*/
                for(aux= tam-1; aux>=0; aux--){
                    binario[aux] = (decimal % 2)== 0 ? 0 : 1;
                    decimal = decimal / 2;
                }

                /*constru��o de um looping que ir� receber a convers�o dos n�meros decimais em bin�rios e exibir
                o resultado para o usu�rio*/
                cout<< "\nO n�mero em BIN�RIO �: " <<endl;
                for(aux=0; aux < tam; aux++){
                cout << binario[aux];
                    if((aux%4)==0){
                        cout << ("\t");
                    }
                }

                cout << "\n" << endl;

                //comando utilizado para o usuari conferir o resultado, antes de voltar para o menu principal
                system("pause");

        //comando break utilizado em toda termina��o de um caso switch ap�s o mesmo ser realizado
        break;

        //o segundo caso se refere a convers�o de um n�mero decimal em um n�mero bin�rio
        case 2:

                //Variaveis que ser�o utilizadas
                int numero,resultado, resto = 0;
                int digito[8];//Array

                cout << "======================================" <<endl;
                cout << "      #Calculadora de Bases#" << endl;
                cout << "======================================" <<endl;

                //campo em que o usu�rio ir� digitar o n�mero binario que ele deseja converter em decimal
                cout<< "Digite um n�mero em BIN�RIO: " <<endl;
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
                cout<< "\nO numero em DECIMAL �: " <<endl;
                cout<< resultado <<endl;

                system("pause");

        //comando break utilizado em toda termina��o de um caso switch ap�s o mesmo ser realizado
        break;


        }//fim do switch

    }while(opcao != 0);//fim do "do"

}
