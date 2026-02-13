#ifndef SCYTALE_H
#define SCYTALE_H

#include "Cipher.h"

/*
 * Scytale Cipher Class
 *
 * This class implements a transposition cipher.
 * The message is rearranged based on a numeric key
 * that represents the number of columns used.
 *
 * The cipher works by wrapping text around a virtual rod,
 * then reading characters in a different order.
 *
 * Demonstrates:
 * - Inheritance
 * - Nested loop logic
 * - Basic algorithm design
 */

class Scytale : public Cipher {
private:
    int m_key; // Determines spacing pattern for encryption

public:
    // Constructor stores both message and key
    Scytale(string message, int key);

    // Overrides encryption and decryption behavior
    string Encrypt();
    string Decrypt();
};

#endif
