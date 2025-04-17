#include <iostream>
#include "ufo_functions.hpp"
//rin was here :P
int main()
{

  greet();

  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;



  
  /* code */
  
  
  
  while (answer != codeword && misses < 7){
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout << "Please enter your guess:" << std::endl;
    std::cin >> letter; 

    for (int i = 0; i < codeword.length(); i++) {
      if (letter == i) {
        answer[i] = letter;
        guess = true;
      }
    }
    if (guess == true) {
      std::cout << "Correct!" << std::endl;
    }
    else {
      std::cout << "Incorrect! The tractor beam pulls the person in further." << std::endl;
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }

  end_game(answer, codeword);
}
