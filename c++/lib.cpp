#ifndef _LIB_CPP_

#define _LIB_CPP_

#include <iostream>
#include <string>
using namespace std;

string leStr(){
    string text;
    getline(cin, text);
    if (text[0] == '\0')
        getline(cin, text);
    return text;
}

typedef struct{
    int id;
    string descricao;
    float valorUnit;
    int qtde;
} produto;
produto p;

typedef struct{
    int id;
    string nomeComp;
    string email;
    int celular;
} cliente;
cliente c;

typedef struct{
    int id;
    string nomeComp;
    string email;
    int celular;
    int RG;
} funcionario;
funcionario f;

#endif
