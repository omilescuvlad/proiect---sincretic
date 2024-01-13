#include <iostream>

using namespace std;


void convertToBinary(int number) {
    int binary[32];
    int index = 0;

    while (number > 0) {
        binary[index++] = number % 2;
        number /= 2;
    }

    cout << "Reprezentarea binara: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;
}


void convertToOctal(int number) {
    int octal[32];
    int index = 0;

    while (number > 0) {
        octal[index++] = number % 8;
        number /= 8;
    }

    cout << "Reprezentarea octala: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << octal[i];
    }
    cout << endl;
}


void convertToHexadecimal(int number) {
    char hexadecimal[32];
    int index = 0;
    char hexChars[] = "0123456789ABCDEF";

    while (number > 0) {
        hexadecimal[index++] = hexChars[number % 16];
        number /= 16;
    }

    cout << "Reprezentarea hexadecimala: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << hexadecimal[i];
    }
    cout << endl;
}

int main() {
    int N;

    cout << "Introduceti numarul natural N: ";
    cin >> N;

    convertToBinary(N);
    convertToOctal(N);
    convertToHexadecimal(N);

    return 0;
}
