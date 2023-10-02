#include <iostream>

#include "lib.cpp"

using namespace std;

void cadastraFuncionario(){
    cout << endl << "CADASTRO DE FUNCIONARIOS" << endl;

    cout << endl << "Digite o ID do funcionario: ";cin >> f.id;
    cout << endl << "Digite o nome do funcionario: ";f.nomeComp = leStr();
    cout << endl << "Digite o RG do funcionario: ";cin >> f.RG;
    cout << endl << "Digite o email do funcionario: ";f.email = leStr();
    cout << endl << "Digite o numero do celular do funcionario: ";cin >> f.celular;

    cout << endl;
    cout << "FUNCIONARIO CADASTRADO!" << endl;

}

void listarFuncionario(){
    cout << "LISTANDO FUNCIONARIO ..." << endl;

    cout << endl << "ID do funcionario: " << f.id << endl;
    cout << endl << "Nome do funcionario: " << f.nomeComp << endl;
    cout << endl << "RG do funcionario: " << f.RG << endl;
    cout << endl << "E-mail do funcionario: " << f.email << endl;
    cout << endl << "Numero do celular do funcionario: " << f.celular << endl;

}
