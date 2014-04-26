
#include <iostream>       // Für std::cin und std::cout

unsigned int fakultaet(unsigned int zahl) {
    if (zahl <= 1) {
        return 1; // Die Fakultät von 0 und 1 ist als 1 definiert.
    }

    return fakultaet(zahl - 1) * zahl;
}

int main() {
    unsigned int zahl;

    std::cout << "Bitte Zahl eingeben: ";
    std::cin >> zahl;                           // Zahl einlesen
    std::cout << "Die Fakultät von " << zahl << // Antwort ausgeben
        " ist " << fakultaet(zahl) << "!" << std::endl;
}
