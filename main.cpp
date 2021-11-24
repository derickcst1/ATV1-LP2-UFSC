#include "person.hpp"

int main()
{
    vector<personPF> listPF;
    vector<personPJ> listPJ;
    vector<string> listaUnificada;
    LoadDatabase("Database.dat", listPF, listPJ);

    int menu;
    while (menu != 6){

    cout << endl << "MY PAPA'S COMPANY - SIG " << endl;
    cout << "1 - Add PF..." << endl;
    cout << "2 - Add Pj..." << endl;
    cout << "3 - remove PF by Index..." << endl;
    cout << "4 - remove PJ by Index..." << endl;
    cout << "5 - Print names in ascending order" << endl;
    cout << "6 - Exit " << endl;

    SaveDatabase("Database.dat", listPF, listPJ);
    
    cin >> menu;

    
    switch (menu)
    {
    case 1:
    {
         cin.ignore();
         personPF pX;
         cout << "Adicionando PF" << endl;
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
         listaUnificada.push_back(pX.nome);
         cout << "salvo!!" << endl;
         break;
    }
    case (2):
    {
         cin.ignore();
        personPJ pZ;
        cout << "Adicionando PJ" << endl;
         cout << "Escreva a razão social da empresa: " << endl;
         getline(cin, pZ.razaoSocial);
         cout << "Escreva o cnpj: " << endl;
         getline(cin, pZ.cnpj);
         cout << "Escreva o endereço: " << endl;
         getline(cin, pZ.endereco);
         cout << "Escreva o telefone: " << endl;
         getline(cin, pZ.telefone);
         cout << "Escreva o capital social: " << endl;
         size_t tmp;
         cin >> tmp;
         pZ.capitalSocial = tmp;
         listPJ.push_back(pZ);
         listaUnificada.push_back(pZ.razaoSocial);
        break;
    }
    case (3):
    {
       cout << "insira o número da PF que deseja remover" << endl;
       int PF;
       cin >> PF;
       listPF.erase(listPF.begin()+PF);
       break;
    }
    case (4):
    {
        cout << "insira o número da PJ que deseja remover" << endl;
        int PJ;
        cin >> PJ;
        listPJ.erase(listPJ.begin()+PJ);
        break;
    }
    case (5):
    {
        for (size_t i = 0; i < listPF.size(); i++)
        {
            listaUnificada.push_back(listPF.at(i).nome);
        }
        
        for (size_t i = 0; i < listPJ.size(); i++)
        {
            listaUnificada.push_back(listPJ.at(i).razaoSocial);
        }
        sort (listaUnificada.begin(), listaUnificada.end());
        for (size_t i = 0; i < listaUnificada.size(); i++)
        {
            cout << " -> " << listaUnificada.at(i) << endl;
        }
        break;
    }
        
    }
    }
    
    
    /*
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
    */



    

    

    
    //for();
    //for();

    //std::sort();
    //cout <<




    return 0;
}
