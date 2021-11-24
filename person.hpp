#ifndef PERSON_H
#define PERSON_H


#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

struct personPF
{
    string nome;
    string nomeMae;
    string CPF;
    string endereco;
    string telefone;
};

struct personPJ
{
    string razaoSocial;
    string cnpj;
    string endereco;
    string telefone;
    size_t capitalSocial;
};

bool SaveDatabase(string filename, const vector<personPF> &listPF, const vector<personPJ> &listPJ);

bool LoadDatabase(string filename, vector<personPF> &listPF, vector<personPJ> &listPJ);

#endif
