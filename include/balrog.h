//
// Created by luis on 12/14/2018.
//

#ifndef EX08_CREATURES_BALROG_H
#define EX08_CREATURES_BALROG_H

#include <creature.h>
#include <string>
namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    class Balrog : public Demon {
    public:

        Balrog(int strength, int hit): Demon(strength, hit){}
        const std::string &getSpecies() const;
        int getDamage() const;


    private:
        const std::string species = "Balrog";


                };



            }}}}



#endif //EX08_CREATURES_BALROG_H
