#include "person.hpp"

int main()
{
    vector<personPF> listPF;
    vector<personPJ> listPJ;
    LoadDatabase("Database.dat", listPF, listPJ);



    cout << endl << "MY PAPA'S COMPANY - SIG " << endl;
    cout << "1 - Add PF..." << endl;
    cout << "2 - Add Pj..." << endl;
    cout << "3 - remove PF by Index..." << endl;
    cout << "4 - remove PJ by Index..." << endl;
    cout << "5 - Print names in ascending order" << endl;
    cout << "6 - Exit " << endl;


    int menu;
    cin >> menu;

    switch (menu)
    {
    case 1:
    {
         
         personPF pX;
         cout << "Escreva o nome: " << endl;
         getline(cin, pX.nome);
         cout << "Escreva o nome da mãe: " << endl;
         getline(cin, pX.nomeMae);
         cout << "Escreva o CPF: " << endl;
         getline(cin, pX.CPF);
         cout << "Escreva o endereço: " << endl;
         getline(cin, pX.endereco);
         cout << "Escreva o telefone: " << endl;
         getline(cin, pX.telefone);
         listPF.push_back(pX);
         
    }
    case (2):
    {
        personPJ pZ;
         cout << "Escreva a razão social da empresa: " << endl;
         getline(cin, pZ.razaoSocial);
         cout << "Escreva o cnpj: " << endl;
         getline(cin, pZ.cnpj);
         cout << "Escreva o endereço: " << endl;
         getline(cin, pZ.endereco);
         cout << "Escreva o telefone: " << endl;
         getline(cin, pZ.telefone);
         cout << "Escreva o capital social: " << endl;
         cin >> pZ.capitalSocial;
         listPJ.push_back(pZ);


    }
    case (3):
    {
        /* c*/
    }
    case (4):
    {
        /* c*/
    }
    case (5):
    {
        /* c*/
    }
    case (6):
    {
        return 1;
    }
    
    

    personPF p1;
    p1.nome = "Antonio Sobieranski";
    p1.nomeMae = "Eva";
    p1.CPF = "000.000.000-99";
    p1.endereco = "Rua das Camelias, 333";
    p1.telefone = "(48) 0000-0000";
    listPF.push_back(p1);


    personPF p2;
    //cout << "Digite mais uma PF: " << endl;
    //cout << "Nome : ";
    //cin >> p2.nome;
    //cin.ignore();
    getline(cin, p2.nome);
    p2.nomeMae = "None";
    p2.CPF = "000.000.000-99";
    p2.endereco = "Rua do key key key, 333";
    p2.telefone = "(48) 0000-0000";
    listPF.push_back(p2);


    personPJ p3;
    p3.razaoSocial = "Sorvetes Maravilha";
    p3.cnpj = "000.000.000-99";
    p3.endereco = "Rua das Camelias, 333";
    p3.telefone = "(48) 0000-0000";
    p3.capitalSocial = 50000;
    listPJ.push_back(p3);

    SaveDatabase("Database.dat", listPF, listPJ);


    

    

    //vector<string> listaUnificada;
    //for();
    //for();

    //std::sort();
    //cout <<




    return 0;
}
