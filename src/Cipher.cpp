#include "Cipher.h"

/*
 * Constructor assigns the message passed in.
 */
Cipher::Cipher(string message) {
    m_message = message;
}

/*
 * Destructor
 * Virtual to ensure correct behavior when deleting derived objects.
 */
Cipher::~Cipher() {
    // No dynamic memory here, but included for correctness.
}

/*
 * Copy Constructor
 * Creates a new Cipher object as a copy of another.
 */
Cipher::Cipher(const Cipher& other) {
    m_message = other.m_message;
}

/*
 * Assignment Operator
 * Checks for self-assignment before copying data.
 */
Cipher& Cipher::operator=(const Cipher& other) {
    if (this != &other) {
        m_message = other.m_message;
    }
    return *this;
}
