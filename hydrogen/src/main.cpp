#include <iostream>

int main(int argc, char* argv[]){
    if (argc != 2){
        std:cerr << "Incorrect usage" << std::endl;
        std:cerr << "hydro <input.hy>" << std::endl;

    }
     
    std::cout << argv[1] << std::endl;
    return 0;
}