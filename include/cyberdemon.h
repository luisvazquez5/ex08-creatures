//
// Created by luis on 12/14/2018.
//

#ifndef EX08_CREATURES_CYBERDEMON_H
#define EX08_CREATURES_CYBERDEMON_H

//#include <creature.h>
#include <demon.h>
//#include <string>
namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    class CyberDemon : public Demon {
    public:
        const std::string &getSpecies() const;
        CyberDemon(int strength, int hit): Demon(strength, hit){}
        int getDamage() const;

    private:
        const std::string species = "Cyber Demon";





    };



}}}}



#endif //EX08_CREATURES_CYBERDEMON_H
