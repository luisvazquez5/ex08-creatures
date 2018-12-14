//
// Created by luis on 12/14/2018.
//

#ifndef EX08_CREATURES_ELVES_H
#define EX08_CREATURES_ELVES_H
#include <creature.h>
#include <string>


namespace edu { namespace vcccd { namespace vc { namespace csv13 {
    class Elf : public Creature{

    public:
        Elf(int strength, int hit): Creature(strength, hit){}
        int getDamage() const;
        const std::string &getSpecies() const;

    private:
        const std::string species = "Elf";

    };





}}}}



#endif //EX08_CREATURES_ELVES_H
