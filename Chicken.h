/**
 * \file Chicken.h
 *
 * \author Moez Abbes
 *
 * Declaration of the CChicken class.
 */

#pragma once

#include <string>
#include "Animal.h"

 /** Class that describes a chicken.
 */
class CChicken : public CAnimal
{
public:

    void ObtainChickenInformation();
    void DisplayAnimal();

    /// checks if chicken is hairy
    bool IsHairy();

private:
    //! The chicken's ID
    std::string mId;
};