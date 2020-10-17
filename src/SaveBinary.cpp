//
// Created by Tere Solano on 8/10/2020.
//

#include "SaveBinary.h"

string SaveBinary::save(const vector<Persona>& persons) {

    ofstream  archivo;

    try{

        archivo.open("ArchivoBinario.dat", ios::app | ios::binary);

    }

    catch (std::ifstream::failure a) {

        throw runtime_error("Error abriendo el archivo");

    }

    archivo.write((char*) &persons, sizeof(Persona));

    archivo.close();
    return "";
}