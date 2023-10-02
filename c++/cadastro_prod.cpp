#include <iostream>

#include "lib.cpp"

using namespace std;

void cadastraProduto(){
    cout << endl << "CADASTRO DE LIVROS" << endl;

    cout << endl << "Digite o ID do livro: ";cin >> p.id;
    cout << endl << "Digite a descricao do livro: ";p.descricao = leStr();
    cout << endl << "Digite o valor unitario do livro: ";cin >> p.valorUnit;
    cout << endl << "Digite a quantidade do livro: ";cin >> p.qtde;

    cout << endl;
    cout << "LIVRO CADASTRADO!" << endl;

}

void listarProduto(){
    cout << "LISTANDO LIVRO ..." << endl;

    cout << endl << "ID do livro: " << p.id << endl;
    cout << endl << "Descricao do livro: " << p.descricao << endl;
    cout << endl << "Valor unitario do livro: " << p.valorUnit << endl;
    cout << endl << "Quantidade do livro: " << p.qtde << endl;
    
}
