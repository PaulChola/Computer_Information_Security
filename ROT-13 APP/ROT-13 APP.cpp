/*********

  ----ROT-13 Cipher----

  * Made by Paul Chola Mumbi
  * Monday, 4 April 2022.
  * For Computer Security and Cryptograghy Lesson.
  * Follow me on IG: https://instagram.com/paulchola9
  * Follow me on TWITTER: https://twitter.com/PaulChola96

*********/


#include <iostream>
#include <string>
using namespace std;


void Encryption() {

    string PlaiNtext;
    cout << "Message can only be alphabetic" << endl;
    cout << "Enter Plain text : ";
    getline(cin, PlaiNtext);
    cin.ignore();



    for (int i = 0; i < PlaiNtext.length(); i++) {
        PlaiNtext[i] = toupper(PlaiNtext[i]);

    }

    int key = 13;
    string encrypWORD = "";

    for (int i = 0; i < PlaiNtext.length(); i++) {

        int temp = PlaiNtext[i] + key;
        if (PlaiNtext[i] == 32) {
            encrypWORD += " ";
        }
        else if (temp > 90) {
            temp -= 26;
            encrypWORD += char(temp);
        }
        else {

            encrypWORD += (char)temp;
        }
    }
    cout << "Encrypted Text: " << encrypWORD;
}

void Decryption() {
    cout << "Message can only be alphabetic" << endl;
    string Ciphertext;
    cout << "Enter Cipher text: ";
    getline (cin, Ciphertext);
    cin.ignore();

    //message to upper case
    for (int i = 0; i < Ciphertext.length(); i++) {
        Ciphertext[i] = toupper(Ciphertext[i]);
    }

    int key = 13;
    string decrypWORD = "";

    for (int i = 0; i < Ciphertext.length(); i++) {
        int temp = Ciphertext[i] - key;
        if (Ciphertext[i] == 32) {
            decrypWORD += " ";
        }
        else if (temp < 65) {
            temp += 26;
            decrypWORD += (char)temp;
        }
        else {
            decrypWORD += (char)temp;
        }
    }

    cout << "Decrypted Text: " << decrypWORD;
}

int main()
{
    int ROT_13;
    cout << "1.for Encryption press 1\n2.for Decryption press 2\nChoose(1,2): ";
    cin >> ROT_13;
    cin.ignore();

    if (ROT_13 == 1) {
        cout << endl << "---Encryption---" << endl;
        Encryption();

    }
    else if (ROT_13 == 2) {
        cout << endl << "---Decryption---" << endl;
        Decryption();

    }
    else {
        cout << endl << "Wrong Choice" << endl;
    }

    return 0;
}


