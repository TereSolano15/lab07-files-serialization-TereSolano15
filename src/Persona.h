//
// Created by Tere Solano on 5/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONA_H
#define MY_PROJECT_NAME_PERSONA_H


#include <string>
#include <ostream>

class Persona {
public:

    Persona(const std::string &name, int age, int documentId);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getAge() const;

    void setAge(int age);

    int getDocumentId() const;

    void setDocumentId(int documentId);


private:
    std::string name;
    int age;
    int documentId;
};


#endif //MY_PROJECT_NAME_PERSONA_H
