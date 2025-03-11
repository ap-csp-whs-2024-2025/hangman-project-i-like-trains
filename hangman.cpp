/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

std::vector<std::string> getHint(std::string secret, char guessLetter, std::vector<std::string> hint)
{

    return hint;
}

void hangman(int lives)
{
    if (lives == 6) 
    {
        std::cout << "_________________" << std::endl
        << " |        |      " << std::endl
        << " |        |      " << std::endl
        << " |              " << std::endl
        << " |       " << "    " << std::endl
        << " |              " << std::endl
        << " |        " << "    " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl; 
    } else if (lives == 5) 
    {
        std::cout << "_________________" << std::endl
        << " |        |      " << std::endl
        << " |        |      " << std::endl
        << " |        0      " << std::endl
        << " |       " << "    " << std::endl
        << " |              " << std::endl
        << " |        " << "    " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl;  
    } else if (lives == 4) 
    {
        std::cout << "_________________" << std::endl
        << " |        |      " << std::endl
        << " |        |      " << std::endl
        << " |        0      " << std::endl
        << " |        |" << "    " << std::endl
        << " |        |      " << std::endl
        << " |        " << "    " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl;  
    } else if (lives == 3) 
    {
        std::cout << "_________________" << std::endl
        << " |        |      " << std::endl
        << " |        |      " << std::endl
        << " |        0      " << std::endl
        << " |       /|" << "    " << std::endl
        << " |        |      " << std::endl
        << " |        " << "    " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl;  
    } else if (lives == 2) 
    {
        std::cout << "_________________" << std::endl
        << " |        |      " << std::endl
        << " |        |      " << std::endl
        << " |        0      " << std::endl
        << " |       /|\\" << "\\    " << std::endl
        << " |        |      " << std::endl
        << " |          " << "     " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl;  
    } else if (lives == 1) 
    {
        std::cout << "_________________" << std::endl
        << " |        |      " << std::endl
        << " |        |      " << std::endl
        << " |        0      " << std::endl
        << " |       /|\\" << "\\    " << std::endl
        << " |        |      " << std::endl
        << " |       /  " << "     " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl;  
    } else if (lives == 0) 
    {
        std::cout << "_________________" << std::endl
        << " |        |      " << std::endl
        << " |        |      " << std::endl
        << " |        0      " << std::endl
        << " |       /|\\" << "\\    " << std::endl
        << " |        |      " << std::endl
        << " |       / \\" << "\\    " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl
        << " |               " << std::endl;  
    }
}



int main()
{
    std::vector<std::string> wordList = {
        "education",
        "solution",
        "mountain",
        "platinum",
        "alphabet",
        "necklace",
        "elevator",
        "diamonds",
        "fragrant",
        "velocity",
        "graduate",
        "nebraska",
        "tropical",
        "evidence",
        "involved",
        "shopping",
        "baseball",
        "kangaroo",
        "horrible",
        "animals"
    };
    
    srand(time(0));
    std::string theWord = wordList[rand() % length(wordList)];
    std::vector<std::string> hint = std::vector<std::string>(theWord.length(), "_");
    int lives = 6;

    std::cout << "Welcome to Hangman!\n";
    hangman(lives);
    display(hint); 
    
    while (true)
    {
        char letterGuess;
        std::cout << "\n> ";
        std::cin >> letterGuess;
        hint = getHint(theWord, letterGuess, hint);
        hangman(lives);
        display(hint); 

    }
    return 0;
}
