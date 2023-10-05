#include <iostream>

#include "lib.cpp"
#include "cadastro_prod.cpp"
#include "cadastro_cli.cpp"
#include "cadastro_fun.cpp"

using namespace std;

int main(){
    int opc = 0;
    do{
        cout << endl << "-----------------------------";
        cout << endl << "|    LIVRARIA DO SEU JOSE   |";
        cout << endl << "-----------------------------";
        cout << endl << "| 1 - CADASTRAR LIVRO       |";
        cout << endl << "| 2 - CADASTRAR FUNCIONARIO |";
        cout << endl << "| 3 - CADASTRAR CLIENTE     |";
        cout << endl << "| 4 - LISTAR LIVRO          |";
        cout << endl << "| 5 - LISTAR FUNCIONARIO    |";
        cout << endl << "| 6 - LISTAR CLIENTE        |";
        cout << endl << "-----------------------------";

        cout << endl << endl << "OPCAO: ";
        cin >> opc;

        switch (opc){
            case 1:
                cadastraProduto();
                break;
            case 2:
                cadastraFuncionario();
                break;
            case 3:
                cadastraCliente();
                break;
            case 4:
                listarProduto();
                break;
            case 5:
                listarFuncionario();
                break;
            case 6:
                listarCliente();
                break;
            
            default:
                cout << endl << "ESTA OPCAO NAO EXISTE";
                break;
        }
    }while (opc != 0);
}
