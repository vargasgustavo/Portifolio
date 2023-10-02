#include <iostream>

#include "lib.cpp"

using namespace std;

void cadastraCliente(){
    cout << endl << "CADASTRO DE CLIENTES" << endl;

    cout << endl << "Digite o ID do cliente: ";cin >> c.id;
    cout << endl << "Digite o nome do cliente: ";c.nomeComp = leStr();
    cout << endl << "Digite o email do cliente: ";c.email = leStr();
    cout << endl << "Digite o numero do celular do cliente: ";cin >> c.celular;

    cout << endl;
    cout << "CLIENTE CADASTRADO!" << endl;

}

void listarCliente(){
    cout << "LISTANDO CLIENTE ..." << endl;

    cout << endl << "ID do cliente: " << c.id << endl;
    cout << endl << "Nome do cliente: " << c.nomeComp << endl;
    cout << endl << "E-mail do cliente: " << c.email << endl;
    cout << endl << "Numero do celular do cliente: " << c.celular << endl;
    
}
