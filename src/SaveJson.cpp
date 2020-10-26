//
// Created by Tere Solano on 8/10/2020.
//

#include "SaveJson.h"

void to_json(json &_json, const Persona &_person) {
    _json = json{
            {"id",   _person.getId()},
            {"name", _person.getName()},
    };
}

string SaveJson::save(const vector<Persona> & persons) {

    ofstream archivo;

    json jsonData(persons);
    string jsonArray = jsonData.dump();

    try{

        archivo.open("ArchivoJson.json", ios::binary);

    }

    catch (ifstream::failure a) {

        throw runtime_error("Error en archivo");
        exit(1);

    }

    archivo<< jsonArray<<endl;

    archivo.close();
    return jsonArray;
}
