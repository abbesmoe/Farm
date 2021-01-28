/**
 * \file Farm.cpp
 *
 * \author Moez Abbes
 */

#include <iostream>
#include "Farm.h"
#include "leak.h"
using namespace std;

 /** Add an animal to the farm inventory.
  *
  * \param cow A cow to add to the inventory
  */
void CFarm::AddAnimal(CAnimal *animal)
{
    mInventory.push_back(animal);
}

/**
 * Display the farm inventory.
 */
void CFarm::DisplayInventory()
{
    for (auto animal : mInventory)
    {
        animal->DisplayAnimal();
    }
}

/**
 * Display the number of hairy animals.
 */
void CFarm::DisplayHairyAnimals()
{
    int NumberOfHairyAnimals = 0;
    for (auto animal : mInventory)
    {
        bool result = animal->IsHairy();
        if (result == true)
            NumberOfHairyAnimals += 1;
    }
    cout << "There are " << NumberOfHairyAnimals << " hairy animals" << endl;
}

/**
 * CFarm destructor
 */
CFarm::~CFarm()
{
    // Iterate over all of the animals, destroying 
    // each one.
    for (auto animal : mInventory)
    {
        delete animal;
    }

    // And clear the list
    mInventory.clear();
}