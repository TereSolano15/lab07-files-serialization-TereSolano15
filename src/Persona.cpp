//
// Created by Tere Solano on 5/10/2020.
//

#include "Persona.h"

Persona::Persona(int id, int age, const string &name) : id(id), age(age), name(name) {}

int Persona::getId() const {
    return id;
}

void Persona::setId(int id) {
    Persona::id = id;
}

int Persona::getAge() const {
    return age;
}

void Persona::setAge(int age) {
    Persona::age = age;
}

const string &Persona::getName() const {
    return name;
}

void Persona::setName(const string &name) {
    Persona::name = name;
}

string Persona::toString() {
    stringstream s;

    s<< "\t id: " <<this->id<<endl;
    s<< "\t age: "<<this->age<<endl;
    s<< "\t name: "<<this->name<<endl;

    return s.str();
}