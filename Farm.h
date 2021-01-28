/**
 * \file Farm.h
 *
 * \author Moez Abbes
 * 
 * Class that describes a Farm
 * 
 * This class holds a collection of animals that make
 * up the inventory of a farm.
 */

#pragma once
#include <vector>
#include "Cow.h"

/**
* Class that describes a farm.
*
* Holds a collection of animals that make up the farm
* inventory.
*/
class CFarm
{
public:
    /// Add an animal to the farm inventory.
    void AddAnimal(CAnimal* animal);
    /// Display the farm inventory.
    void DisplayInventory();
    /// Display the number of hairy animals
    void DisplayHairyAnimals();

    ///destructor
    ~CFarm();

private:
    /// A list with the inventory of all animals on the farm
    std::vector<CAnimal*> mInventory;
};


