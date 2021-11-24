#include "person.hpp"

bool SaveDatabase(string filename, const vector<personPF> &listPF, const vector<personPJ> &listPJ)
{
    ofstream filewriter(filename);
    if(!filewriter.is_open()) return false;

    for(size_t i=0; i<listPF.size(); i++)
    {
        personPF p = listPF.at(i);
        filewriter << "1" << endl << p.nome << endl << p.nomeMae << endl << p.CPF << endl << p.endereco << endl << p.telefone << endl;

        //filewriter << "1" << endl << listPF.at(i).nome << endl <<
    }

    for(size_t i=0; i<listPJ.size(); i++)
    {
        personPJ p = listPJ.at(i);
        filewriter << "2" << endl << p.razaoSocial << endl << p.cnpj << endl << p.endereco << endl << p.telefone << endl << p.capitalSocial << endl;
 
    }

    filewriter.close();

    return true;
}


bool LoadDatabase(string filename, vector<personPF> &listPF, vector<personPJ> &listPJ)
{
    ifstream filereader(filename);
    if(!filereader.is_open()) return false;

    string tmp;
    while(getline(filereader, tmp))
    {
        if(tmp=="1")
        {
            personPF p;
            getline(filereader, p.nome);
            getline(filereader, p.nomeMae);
            getline(filereader, p.CPF);
            getline(filereader, p.endereco);
            getline(filereader, p.telefone);

            listPF.push_back(p);
            continue;
        }
        if(tmp=="2")
        {
            personPJ p;
            getline(filereader, p.razaoSocial);
            getline(filereader, p.cnpj);
            getline(filereader, p.endereco);
            getline(filereader, p.telefone);
            getline(filereader, tmp);
            p.capitalSocial = stoi(tmp);

            listPJ.push_back(p);
            continue;
        }
    }

    filereader.close();

    return true;
}
