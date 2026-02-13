#include "Scytale.h"

/*
 * Constructor stores both message and key.
 * The key determines how many columns are used.
 */
Scytale::Scytale(string message, int key) : Cipher(message) {
    m_key = key;
}

/*
 * Encrypt:
 * Uses nested loops to simulate wrapping text around a rod.
 * Characters are selected based on column spacing.
 */
string Scytale::Encrypt() {
    string result = "";

    for (int i = 0; i < m_key; i++) {
        for (int j = i; j < m_message.length(); j += m_key) {
            result += m_message[j];
        }
    }

    return result;
}

/*
 * Decrypt:
 * Reconstructs the original message by reversing the pattern.
 */
string Scytale::Decrypt() {
    string result(m_message.length(), ' ');
    int index = 0;

    for (int i = 0; i < m_key; i++) {
        for (int j = i; j < m_message.length(); j += m_key) {
            result[j] = m_message[index++];
        }
    }

    return result;
}
