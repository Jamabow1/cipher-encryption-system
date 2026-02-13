#include <iostream>
#include "Atbash.h"
#include "Scytale.h"
#include "Ong.h"

using namespace std;

/*
 * Main function used to test each cipher implementation.
 * Demonstrates polymorphism and object instantiation.
 */

int main() {

    Atbash a("HelloWorld");
    cout << "Atbash Encrypted: " << a.Encrypt() << endl;

    Scytale s("HELLOWORLD", 3);
    cout << "Scytale Encrypted: " << s.Encrypt() << endl;

    Ong o("hello");
    cout << "Ong Encrypted: " << o.Encrypt() << endl;

    return 0;
}
