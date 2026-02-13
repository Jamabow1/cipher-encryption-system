#ifndef CIPHER_H
#define CIPHER_H

#include <string>

using namespace std;

/*
 * Cipher Base Class
 *
 * This class serves as a general blueprint for all cipher types.
 * It uses inheritance so that different cipher methods (Atbash, Scytale, Ong)
 * can share common structure but implement their own encryption logic.
 *
 * I made Encrypt() and Decrypt() pure virtual to enforce polymorphism,
 * so each derived class must implement its own version.
 */

class Cipher {
protected:
    string m_message; // Stores the original message

public:
    // Constructor initializes the message
    Cipher(string message);

    // Virtual destructor ensures proper cleanup if using base class pointers
    virtual ~Cipher();

    /*
     * Rule of Three:
     * Even though we are not dynamically allocating memory here,
     * I implemented these for practice and correctness.
     */
    Cipher(const Cipher& other);             // Copy constructor
    Cipher& operator=(const Cipher& other);  // Assignment operator

    // Pure virtual functions force derived classes to implement these
    virtual string Encrypt() = 0;
    virtual string Decrypt() = 0;
};

#endif

