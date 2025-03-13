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
    "animals",
    "supercalifragilisticexpialidocious"
};

std::vector<std::string> getHint(std::vector<char> wordList, char letter, std::vector<std::string> hint)
{
    for (int index = 0; index < length(wordList), index++;)
    {
        if (wordList[index] == letter)
        {
            hint[index] = letter;
        }
    }
    
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
        << " |________________" << std::endl; 
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
        << " |________________" << std::endl;  
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
        << " |________________" << std::endl;  
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
        << " |________________" << std::endl;  
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
        << " |________________" << std::endl;  
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
        << " |________________" << std::endl;  
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
        << " |________________" << std::endl;  
    }
}

bool endGame(bool won, int lives)
{
    if (won == true)
    {
        return true;
    } else if (lives == 0)
    {
        return true;
    }
    return false;
}



int main()
{

    srand(time(0));
    std::string theWord = wordList[rand() % length(wordList)];
    std::vector<std::string> hint = std::vector<std::string>(theWord.length(), "_");
    std::vector<std::string> tempHint = hint;
    int lives = 6;
    bool gameWin = false;
    std::vector<char> wordButList;
    for (char c : theWord)
    {
        wordButList.push_back(c);
    }

    std::cout << "Welcome to Hangman!\n(To guess the entire word, input 0)\n";
    hangman(lives);
    display(hint); 

    bool canGuess = true;
    
    while (!endGame(gameWin, lives))
    {
        char letterGuess;
        char thisThing = '0';
        std::cout << theWord <<std::endl;
        tempHint = hint;
        std::cout << " \nGuess a letter:\n> ";
        std::cin >> letterGuess;
        if (letterGuess == thisThing && canGuess == true)
        {
            std::string guess;
            std::cout << "What do you think the word is?\n> ";
            std::cin >> guess;
            if (guess == theWord)
            {
                gameWin = true;
            }
            canGuess = false;
        
        } else
        {
            hint = getHint(wordButList, letterGuess, hint);
            canGuess = true;
            if (tempHint == hint)
            {
                lives = lives - 1;
            }
        }
        hangman(lives);
        display(hint); 
    }
    
    if (lives == 0)
    {
        std::cout << "Sorry, you lost!\nThe word was '" << theWord <<  "'.\n";
    } else if (lives == 6)
    {
        std::cout << "Cheater\n";
    } else if (lives == 1)
    {
        std::cout << "Congrats, you won!\n You had 1 life left!\n";
    } else
    {
        std::cout << "Congrats, you won!\n You had " << lives << " lives left!\n";
    }

    return 0;
}
