//
// Created by Tere Solano on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONAMANAGER_H
#define MY_PROJECT_NAME_PERSONAMANAGER_H
#include <iostream>
#include <vector>
#include "Persona.h"
#include <vector>
#include "IPersonSave.h"

using namespace std;
class PersonManager {

private:

    vector<Persona> personList;

public:

    PersonManager(const vector<Persona> &personList);

    PersonManager();

    const vector<Persona> getListPerson();

    const vector<Persona> &getPersonList() const;

    void setPersonList(const vector<Persona> &personList);

    vector<Persona> addPerson(Persona);

    vector<Persona> displayPersonList();

    virtual ~PersonManager();

    void saveData(IPersonSave* objectSave, vector<Persona>);

};

#endif //MY_PROJECT_NAME_PERSONAMANAGER_H
