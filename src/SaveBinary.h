//
// Created by Tere Solano on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_SAVEBINARY_H
#define MY_PROJECT_NAME_SAVEBINARY_H
#include <IPersonSave.h>

class SaveBinary: public IPersonSave {

public:

    void save(vector<Persona> person) override;

};



#endif //MY_PROJECT_NAME_SAVEBINARY_H
