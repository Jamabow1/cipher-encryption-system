#include "Ong.h"

/*
 * Constructor
 */
Ong::Ong(string message) : Cipher(message) {}

/*
 * Encrypt:
 * Appends "ong" after lowercase letters.
 * This is a simple transformation cipher.
 */
string Ong::Encrypt() {
    string result = "";

    for (int i = 0; i < m_message.length(); i++) {
        char c = m_message[i];

        if (c >= 'a' && c <= 'z') {
            result += c;
            result += "ong";
        }
        else {
            result += c;
        }
    }

    return result;
}

/*
 * Decrypt:
 * Checks for "ong" patterns and removes them.
 */
string Ong::Decrypt() {
    string result = "";

    for (int i = 0; i < m_message.length(); i++) {
        if (i + 3 < m_message.length() &&
            m_message.substr(i + 1, 3) == "ong") {
            result += m_message[i];
            i += 3; // Skip over "ong"
        }
        else {
            result += m_message[i];
        }
    }

    return result;
}
