//
// Created by Tere Solano on 5/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONA_H
#define MY_PROJECT_NAME_PERSONA_H


#include <string>
#include <ostream>

class Person {
public:

    Person();
    Person(const std::string &firstName, const std::string &lastName, int documentId);
    virtual ~Person() = default;

    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    int getDocumentId() const;

    void setDocumentId(int documentId);

    virtual std::string toString() const; // Virtual
private:
    std::string firstName;
    std::string lastName;
    int documentId;
};


#endif //MY_PROJECT_NAME_PERSONA_H
