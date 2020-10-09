//
// Created by Tere Solano on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_SAVEJSON_H
#define MY_PROJECT_NAME_SAVEJSON_H

#include <IPersonSave.h>
#include <../lib/nlohmann/json.hpp>

using json  = nlohmann::json ;

class SaveJson: public IPersonSave {

public:

    void save(vector<Persona>) override;

};
#endif //MY_PROJECT_NAME_SAVEJSON_H
