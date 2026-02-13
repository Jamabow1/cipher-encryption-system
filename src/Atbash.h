#ifndef ATBASH_H
#define ATBASH_H

#include "Cipher.h"

/*
 * Atbash Cipher Class
 *
 * This class inherits from the Cipher base class and
 * implements a simple substitution cipher.
 *
 * The Atbash cipher mirrors letters in the alphabet:
 * A ↔ Z
 * B ↔ Y
 * C ↔ X
 *
 * This demonstrates:
 * - Inheritance
 * - Method overriding
 * - Polymorphism
 */

class Atbash : public Cipher {
public:
    // Constructor passes message to base class
    Atbash(string message);

    // Overrides base class pure virtual functions
    string Encrypt();
    string Decrypt();
};

#endif
