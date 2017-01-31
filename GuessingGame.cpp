#include <iostream>
#include <cstdlib>

int main() 
{
    srand (time(NULL));
    int guess, counter = 0;
    int number = rand() % 100 + 1;
    
    bool found = false;
    
    std::cout << "guess an integer from 1 to 100\n";
    
    while(not found)
    {
    counter++;
    std::cin >> guess;
    if(guess < 1 or guess > 100)
    {
        std::cout << "number is betweem 1 and 100\n";
    }
    else if(guess < number)
    {
        std::cout << "too low, guess again...\n";
    }
    else if(guess > number)
    {
        std::cout << "too high, guess again...\n";
    }
    else
    {
        std::cout << "you guess it in " << counter << " tries!\n";
        found = true;
    }
    }
}
