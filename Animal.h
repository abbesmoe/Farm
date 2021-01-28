/**
 * \file Animal.h
 *
 * \author Moez Abbes
 *
 * Declaration of the CAnimal class.
 */

#pragma once

 /** Class that describes an animal.
 */
class CAnimal
{
public:
	/// destructor
	virtual ~CAnimal();
	/// Display an animal
	virtual void DisplayAnimal() {}
	/// checks if animal is hairy
	virtual bool IsHairy() { return true; }
private:
	int mNumberOfHairyAnimals = 0;
};

