/**
 * \file Cow.h
 *
 * \author Moez Abbes
 *
 * Declaration of the CCow Class
 */

#pragma once
#include <string>
#include "Animal.h"

 /** Class that describes a cow.
 */
class CCow : public CAnimal
{
public:
	/// The types of cow we can have on our farm
	enum class Type { Bull, BeefCow, MilkCow };

    /// Asks and obtains information from the user that describes a cow.
    void ObtainCowInformation();

    /// Display information about this cow.
    void DisplayAnimal();

    /// checks if cow is hairy.
    bool IsHairy();

private:
    /// The cow's name
    std::string mName;

    /// The type of cow: Bull, BeefCow, or MilkCow
    Type mType = Type::MilkCow;

    /// The milk production for a cow in gallons per day
    double mMilkProduction = 0;
};

