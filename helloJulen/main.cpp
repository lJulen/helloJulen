//
//  main.cpp
//  helloJulen
//
//  Created by Julen Garro Olkotz on 4/11/21.
//

#include <iostream>
#include <string>
int main(int argc, const char * argv[]) {
    // insert code here...
    // Izena eskatzen du
    std::cout << "Write a name, please" << std::endl;
    // Bariable honetan gordetzen det, eta erabiltzaileak idazten duena bertan gordetzen dut
    std::string nombre;
    std::cin >> nombre;
    std::cout << "Hello, " << nombre << std::endl;
    return 0;
}
