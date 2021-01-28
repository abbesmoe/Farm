/**
 * \file Cat.cpp
 *
 * \author Moez Abbes
 */

#include <iostream>
#include "Cat.h"

using namespace std;

/** Obtain a cat description from the user.
*/
void CCat::ObtainCatInformation()
{
    cout << endl;
    cout << "Input information about the cat" << endl;

    // Obtain the name. This is easy, since it's just a
    // string.
    cout << "Name: ";
    cin.ignore();
    getline(cin, mName);
    while (mName.empty()) {
        cout << "no entry please try again" << endl;
        cout << "Name: ";
        getline(cin, mName);
    }
    while (mName[0] == ' ') {
        cout << "name start with a space please try again" << endl;
        cout << "Name: ";
        getline(cin, mName);
    }
    

    // Obtain the type using a menu. We have a loop so
    // we can handle errors.
    bool valid = false;
    while (!valid)
    {
        cout << "1: AmericanShorthair cat" << endl;
        cout << "2: Persian Cat" << endl;
        cout << "3: Siamese Cat" << endl;
        cout << "4: Sphynx Cat" << endl;
        cout << "Enter selection and return: ";
        int option;
        cin >> option;
        if (!cin)
        {
            // We have an error. Clear the input and try again
            cin.clear();
            cin.ignore();
            continue;
        }

        switch (option)
        {
        case 1:
            mType = Type::AmericanShorthair;
            IsHairy();
            valid = true;
            break;

        case 2:
            mType = Type::Persian;
            IsHairy();
            valid = true;
            break;

        case 3:
            mType = Type::Siamese;
            IsHairy();
            valid = true;
            break;

        case 4:
            mType = Type::Sphynx;
            valid = true;
            break;
        }

    }
}

/** Display the cat.
*/
void CCat::DisplayAnimal()
{
    cout << mName << ": ";
    switch (mType)
    {
    case Type::AmericanShorthair:
        cout << "AmericanShorthair Cat" << endl;
        break;

    case Type::Persian:
        cout << "Persian Cat" << endl;
        break;

    case Type::Siamese:
        cout << "Siamese Cat" << endl;
        break;

    case Type::Sphynx:
        cout << "Sphynx Cat" << endl;
        break;
    }
}

/** Checks if cat is hairy.
*/
bool CCat::IsHairy()
{
    switch (mType)
    {
    case Type::AmericanShorthair:
        return true;
        break;

    case Type::Persian:
        return true;
        break;

    case Type::Siamese:
        return true;
        break;

    case Type::Sphynx:
        return false;
        break;
    }
}
