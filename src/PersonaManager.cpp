//
// Created by Tere Solano on 8/10/2020.
//

#include "PersonaManager.h"

PersonManager::PersonManager(const vector<Persona> &personList) : personList(personList) {}

const vector<Persona> PersonManager::getListPerson() {

    vector<Persona> personListReturn;

    for(int i=0; i < personList.size(); i++){

        personListReturn.push_back(personList[i]);

    }

    return personList;
}

vector<Persona> PersonManager::addPerson(Persona person1) {

    personList.push_back(person1);

    return personList;

}

PersonManager::~PersonManager() {


}

vector<Persona> PersonManager::displayPersonList() {
    stringstream s;

    for(int i = 0; i < personList.size(); i++){

        s<< personList[i].toString() << "\n";

    }

    return personList;
}

const vector<Persona> &PersonManager::getPersonList() const {
    return personList;
}

void PersonManager::setPersonList(const vector<Persona> &personList) {
    PersonManager::personList = personList;
}

void PersonManager::saveData(IPersonSave *objectSave, vector<Persona> persons) {

    objectSave->save(persons);

}

PersonManager::PersonManager() {}
