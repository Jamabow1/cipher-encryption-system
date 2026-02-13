#include "Atbash.h"

/*
 * Constructor simply calls the base class constructor.
 */
Atbash::Atbash(string message) : Cipher(message) {}

/*
 * Encrypt:
 * Loops through each character manually.
 * If it's uppercase or lowercase, it mirrors it in the alphabet.
 * I avoided using STL algorithms to practice manual loop logic.
 */
string Atbash::Encrypt() {
    string result = "";

    for (int i = 0; i < m_message.length(); i++) {
        char c = m_message[i];

        if (c >= 'A' && c <= 'Z') {
            result += char('Z' - (c - 'A'));
        }
        else if (c >= 'a' && c <= 'z') {
            result += char('z' - (c - 'a'));
        }
        else {
            result += c; // Non-letter characters stay the same
        }
    }

    return result;
}

/*
 * Atbash is symmetric, so decrypting is the same as encrypting.
 */
string Atbash::Decrypt() {
    return Encrypt();
}
