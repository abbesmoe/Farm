/**
 * \file Cow.h
 *
 * \author Moez Abbes
 *
 * Declaration of the CCat Class
 */

#pragma once
#include <string>
#include "Animal.h"

 /** Class that describes a cat.
 */
class CCat : public CAnimal
{
public:
	/// The types of cow we can have on our farm
	enum class Type { AmericanShorthair, Persian, Siamese, Sphynx};

	void ObtainCatInformation();
	void DisplayAnimal();

	/// checks if cat is hairy
	bool IsHairy();
private:
	/// The type of cow: Bull, BeefCow, or MilkCow
	Type mType = Type::AmericanShorthair;

	//! The chicken's ID
	std::string mName;
	std::string mBreed;
};

