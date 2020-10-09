//
// Created by Tere Solano on 5/10/2020.
//

#include "Persona.h"

Persona::Persona(const std::string &name, int age, int documentId) : name(name), age(age), documentId(documentId) {}

const std::string &Persona::getName() const {
    return name;
}

void Persona::setName(const std::string &name) {
    Persona::name = name;
}

int Persona::getAge() const {
    return age;
}

void Persona::setAge(int age) {
    Persona::age = age;
}

int Persona::getDocumentId() const {
    return documentId;
}

void Persona::setDocumentId(int documentId) {
    Persona::documentId = documentId;
}
