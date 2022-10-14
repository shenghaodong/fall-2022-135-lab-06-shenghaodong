#include <iostream>
#include <cctype>

#include "funcs.h"

int main()
{
  std::cout << "Task A: " << std::endl;
  testAscii("Cat :3 Dog");

  std::cout << "\nTask B: " << std::endl;
  std::string encryptCae = encryptCaesar("Hello, World!", 10);
  std::cout << encryptCae << std::endl; 

  std::cout << "\nTask C: " << std::endl;
  std::string encryptVig = encryptVigenere("Hello, World!", "cake");
  std::cout << encryptVig << std::endl; 

  std::cout << "\nTask D: " << std::endl;
  std::string decryptCae = decryptCaesar("Rovvy, Gybvn!", 10);
  std::cout << decryptCae << std::endl; 
  std::string decryptVig = decryptVigenere("Jevpq, Wyvnd!", "cake");
  std::cout << decryptVig << std::endl; 
  return 0;
}
