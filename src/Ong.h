#ifndef ONG_H
#define ONG_H

#include "Cipher.h"

/*
 * Ong Cipher Class
 *
 * This cipher appends the string "ong" after
 * lowercase letters in the message.
 *
 * It is a simple transformation cipher
 * used to demonstrate string manipulation.
 *
 * Demonstrates:
 * - Inheritance
 * - Manual string iteration
 * - Conditional logic
 */

class Ong : public Cipher {
public:
    // Constructor forwards message to base class
    Ong(string message);

    // Implements required virtual functions
    string Encrypt();
    string Decrypt();
};

#endif
