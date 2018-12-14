//
// Created by luis on 12/14/2018.
//

#include <iostream>
#include <creature.h>
#include <string>
#include <elf.h>
#include <random>
using namespace std;
namespace edu { namespace vcccd { namespace vc { namespace csv13 {


                const std::string &Elf::getSpecies() const { return species;}

                int Elf::getDamage() const {
                    int damage = Creature::getDamage();
                    if ((rand() % 10)==0){
                        cout << "Magical attack inflicts" << damage << "additional damage points!" << endl;
                        damage = damage * 2;
                        return damage;
                    }


                }






        }}}}
