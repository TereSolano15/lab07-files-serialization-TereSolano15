//
// Created by Tere Solano on 5/10/2020.
//
#include "IPersonSave.h"
#include "SaveBinary.h"
#include "SaveJson.h"
#include "PersonaManager.h"

using namespace std;
using json = nlohmann::json ;

int main(){

    vector<Persona> personList;

    PersonManager *manager = new PersonManager();

    IPersonSave *saveBinary = new SaveBinary();
    IPersonSave *saveJson = new SaveJson();

    Persona p1(117430751, 21, "Allen");
    Persona p2(401256379, 44, "Brando Sanderson");
    Persona p3(501369458, 72, "Robert Jordan");

    manager->setPersonList(personList);

    //save as Binary

    personList = manager->addPerson(p1);

    manager->saveData(saveBinary, personList);

    personList = manager->addPerson(p2);

    manager->saveData(saveBinary,personList);

    personList = manager->addPerson(p3);

    manager->saveData(saveBinary, personList);

    //save as Json

    manager->saveData(saveJson, personList);


    delete saveJson;
    delete saveBinary;
    delete manager;

    return 0;
}