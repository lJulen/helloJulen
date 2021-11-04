//
//  main.cpp
//  helloJulen
//
//  Created by Julen Garro Olkotz on 4/11/21.
//

#include <iostream>
#include <string>
// Horrela std::cout jarri beharrean, zuzenean cout jarri dezaket
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    // Izena eskatzen du
    cout << "Write a name, please" << endl;
    // Bariable honetan gordetzen det, eta erabiltzaileak idazten duena bertan gordetzen dut
    string nombre;
    cin >> nombre;
    cout << "Hello, " << nombre << endl;

    return 0;
    
    
}
