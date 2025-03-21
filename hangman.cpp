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
    "apple",
    "banana",
    "grape",
    "cherry",
    "orange",
    "pineapple",
    "strawberry",
    "blueberry",
    "melon",
    "peach",
    "plum",
    "pear",
    "kiwi",
    "apricot",
    "mango",
    "papaya",
    "watermelon",
    "cantaloupe",
    "nectarine",
    "blackberry",
    "raspberry",
    "coconut",
    "lemon",
    "lime",
    "tangerine",
    "kiwifruit",
    "dragonfruit",
    "pomegranate",
    "jackfruit",
    "avocado",
    "tomato",
    "potato",
    "carrot",
    "onion",
    "lettuce",
    "spinach",
    "broccoli",
    "cauliflower",
    "celery",
    "peas",
    "beans",
    "corn",
    "pumpkin",
    "squash",
    "zucchini",
    "cucumber",
    "chili",
    "garlic",
    "ginger",
    "coriander",
    "oregano",
    "thyme",
    "basil",
    "parsley",
    "rosemary",
    "sage",
    "mint",
    "dill",
    "paprika",
    "mustard",
    "turmeric",
    "cumin",
    "cardamom",
    "fennel",
    "clove",
    "nutmeg",
    "allspice",
    "chocolate",
    "candy",
    "cookie",
    "cake",
    "pie",
    "brownie",
    "cupcake",
    "icecream",
    "tart",
    "pudding",
    "caramel",
    "toffee",
    "wafer",
    "marshmallow",
    "biscuit",
    "muffin",
    "donut",
    "croissant",
    "pancake",
    "waffle",
    "bagel",
    "pretzel",
    "toast",
    "scone",
    "fritter",
    "popcorn",
    "nachos",
    "cheese",
    "butter",
    "yogurt",
    "milk",
    "cream",
    "whippedcream",
    "mozzarella",
    "parmesan",
    "cheddar",
    "feta",
    "gouda",
    "brie",
    "bluecheese",
    "flour",
    "bacon",
    "beef",
    "pork",
    "chicken",
    "lamb",
    "fish",
    "shellfish",
    "octopus",
    "shrimp",
    "lobster",
    "crab",
    "salmon",
    "tuna",
    "trout",
    "cod",
    "mackerel",
    "halibut",
    "bass",
    "caviar",
    "brisket",
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
    "bravery",
    "circuit",
    "delight",
    "energy",
    "famous",
    "glance",
    "horizon",
    "jacket",
    "knight",
    "laughter",
    "noble",
    "puzzle",
    "quaint",
    "rocket",
    "signal",
    "turtle",
    "unique",
    "abominable",
    "afterthought",
    "accountable",
    "revolutionary",
    "masterpiece",
    "transcendent",
    "complicated",
    "phenomenal",
    "destination",
    "celebration",
    "imagination",
    "understandable",
    "consequence",
    "accommodation",
    "determination",
    "unbelievable",
    "contemplation",
    "extraordinary",
    "discovery",
    "appreciation",
    "analysis",
    "adventure",
    "aspiration",
    "achievement",
    "artificial",
    "success",
    "progress",
    "connection",
    "observation",
    "creativity",
    "innovation",
    "expression",
    "transformation",
    "adaptation",
    "resolution",
    "philosophy",
    "intention",
    "reflection",
    "motivation",
    "perception",
    "reliability",
    "adaptability",
    "empowerment",
    "evolution",
    "perspective",
    "intelligence",
    "organization",
    "cooperation",
    "collaboration",
    "authenticity",
    "opportunity",
    "comprehension",
    "integrity",
    "enlightenment",
    "honesty",
    "perseverance",
    "expansion",
    "persistence",
    "strength",
    "resilience",
    "commitment",
    "effort",
    "passion",
    "vision",
    "focus",
    "determination",
    "understanding",
    "clarity",
    "dedication",
    "consistency",
    "exploration",
    "leadership",
    "creativity",
    "adversity",
    "intuition",
    "courage",
    "empower",
    "knowledge",
    "experience",
    "openness",
    "freedom",
    "stability"
};

std::vector<char> getHint(std::vector<char> wordList, char letter, std::vector<char> hint)
{
    for (int index = 0; index < length(wordList); index++)
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

bool alreadyGuessed(char guess, std::vector<char> letters)
{
    for (int index = 0; index < length(letters); index++)
    {
        if (letters[index] == guess)
        {
            return true;
        }
    }
    return false;
}



int main()
{
    std::cout << "Welcome to Hangman!\nTo guess an entire word, input 0.\nIf you would like to exit at any time, enter 9.\n";
    bool playAgain = true;
    while (playAgain)
    {
        srand(time(0));
        std::string theWord = wordList[rand() % length(wordList)];
        std::vector<char> hint = std::vector<char>(theWord.length(), '_');
        std::vector<char> tempHint = hint;
        int lives = 6;
        bool gameWin = false;
        std::vector<char> wordButList;
        for (char c : theWord)
        {
            wordButList.push_back(c);
        }


        hangman(lives);
        std::cout << std::endl;
        display(hint); 
        std::cout << std::endl;
        bool broke = false;
        bool canGuess = true;
        std::vector<char> guessedLetters = {};
        std::vector<char> displayLetters = {};

        while (!endGame(gameWin, lives))
        {
            
            
            char letterGuess;
            //std::cout << theWord <<std::endl;
            tempHint = hint;
            std::cout << "Already Guessed:\n";
            display(displayLetters);
            std::cout << std::endl;
            std::cout << "Guess a letter:\n> ";
            std::cin >> letterGuess;
            if (letterGuess == '9')
            {
                std::cout << "\nThank you for playing!\n";
                return 0;
            }
            if (letterGuess == '0' && canGuess == true)
            {
                std::string guess;
                std::cout << "What do you think the word is?\n> ";
                std::cin >> guess;
                if (guess == theWord)
                {
                    gameWin = true;
                }
                canGuess = false;
                std::cout << "Sorry, that's incorrect.\n";
            } else if (letterGuess == '0' && canGuess == false)
            {
                std::cout << "You must guess a letter before you can guess the word again.\n";
            } else if (alreadyGuessed(letterGuess, guessedLetters))
            {
                std::cout << "You have already guessed this letter, try another.\n";
            } else 
            {
                hint = getHint(wordButList, letterGuess, hint);
                canGuess = true;
                if (tempHint == hint)
                {
                    lives = lives - 1;
                    append(displayLetters, letterGuess);
                }
                append(guessedLetters, letterGuess);
            }
            if (wordButList == hint)
            {
                    gameWin = true;
            }
            if (gameWin == true && (hint != wordButList))
            {
                hint = wordButList;
            }
            hangman(lives);
            std::cout << std::endl;
            display(hint); 
            std::cout << std::endl;     
        }    
            
        if (lives == 0)
        {
            std::cout << "Sorry, you lost!\nThe word was '" << theWord <<  "'.\n";
        } else if (lives == 1)
        {
            std::cout << "Congrats, you won!\nYou had 1 life left!\n";
        } else
        {
            std::cout << "Congrats, you won!\nYou had " << lives << " lives left!\n";
        }

        std::string yn = "0";
        std::cout << "Do you want to play again? (y/n)\n> ";
        while (yn != "y" && yn != "n")
        {
            std::cin >> yn;
            if (yn != "y" && yn != "n")
            {
                std::cout << "Please enter a vaild response. Play again? (y/n)\n> ";
            }
        }
        if (yn == "n")
        {
            playAgain = false;
        }
    }
    std::cout << "\nThank you for playing!\n";
    return 0;
}
