//
// Created by Tere Solano on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_IPERSONSAVE_H
#define MY_PROJECT_NAME_IPERSONSAVE_H

#include "Persona.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>

class IPersonSave {

public:

    virtual string save(const vector<Persona>&) = 0;

    virtual ~IPersonSave();



};


#endif //MY_PROJECT_NAME_IPERSONSAVE_H
