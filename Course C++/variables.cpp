#include <iostream>
using namespace std;

int main() {

    // Type name;
    // Type name = value;
    
    int lifes = 0;
    char word = 'B';
    char words[20] = "Gabriel";
    double dec = 2.5; // 64 bits
    float dec_2 = 4.5; // 32 bits
    bool alive = true;
    string name = "Bruno";
    
    cout << "Type the number of lifes: ";
    cin >> lifes;
    cout << "Type a word: ";
    cin >> word;
    cout << "Type any words: ";
    cin >> words;
    cout << "Type a decimal number: ";
    cin >> dec;
    dec_2 = dec;
    cout << "Type 0 or 1: ";
    cin >> alive;
    cout << "Type a name: ";
    cin >> name;
    cout << endl;

    cout << lifes << "\n";
    cout << word << "\n";
    cout << words << "\n";
    cout << dec << "\n";
    cout << dec_2 << "\n";
    cout << alive << "\n";
    cout << name << "\n";

    return 0;
}