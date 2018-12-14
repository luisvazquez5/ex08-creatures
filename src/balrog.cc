//
// Created by luis on 12/14/2018.
//

#include <iostream>
#include <creature.h>
#include <balrog.h>
#include <string>
#include <random>
using namespace std;
namespace edu { namespace vcccd { namespace vc { namespace csv13 {


const std::string &Balrog::getSpecies() const { return species;}
int Balrog::getDamage() const {
    int damage = Demon::getDamage();
    int damage2 = (rand() % getStrength()) + 1;
    cout << "Balrog speed attack inflicts" << damage2 << "additional damage points" << endl;
    damage = damage + 2;
    return damage;


                }



            }}}}
