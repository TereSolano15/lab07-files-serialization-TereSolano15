//
// Created by Tere Solano on 5/10/2020.
//
#include <../lib/nlohmann/json.hpp>
#include <iostream>
#include <fstream>
#include "Persona.h"
using namespace std;
using json = nlohmann::json ;

int main(){
    Persona persona1("Mike",25,1);
    Persona persona2("Ana",20,2);
    Persona persona3("Pedro",20,3);

    json jsonPersonas;
    jsonPersonas["Personas"] = {{" Persona 1: ",persona1.getName(),persona1.getAge(),persona1.getDocumentId()},
                                {" Persona 2: ",persona2.getName(),persona2.getAge(),persona2.getDocumentId()},
                                {" Persona 3: ",persona3.getName(),persona3.getAge(),persona3.getDocumentId()}};

    string personasSerializando = jsonPersonas.dump();

    //guarda el archivo
    ofstream archivo;
    try { archivo.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    archivo << personasSerializando << '\n';
    archivo.close();


    return 0;
}