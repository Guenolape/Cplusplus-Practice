// Homework Problems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h> // To use rand()
#include <time.h>   // To seed rand()

int RectangleFunction(int width, int height)
{
    int area = width * height;
    return area;
}

int RandomFunction(int lowerRange, int upperRange)
{
    std::srand(time(NULL));
    int range = upperRange - lowerRange;
    int randomNumber = std::rand() % range + lowerRange;
    return randomNumber;
}
int main()
{

   
        


    /*
    // EXERCISE 1

    //Declare variables
    int perimeter = 0;
    int area = 0;
    int length = 0;
    int width = 0;

    // User input
    std::cout << "Enter the length of a rectangle \n";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle \n";
    std::cin >> width;

    // Calculations
    perimeter = 2 * (length + width);
    area = length * width;

    // Output
    std::cout << "Area = " << area << "\n"
        << "Perimeter = " << perimeter << "\n";


    // EXERCISE 2

// Declare variables
    int timeHours = 0;
    int timeMinutes = 0;
    int timeSeconds = 0;

    // User input
    std::cout << "Enter a time in hours: \n";
    std::cin >> timeHours;

    // Calculations
    timeMinutes = timeHours * 60;
    timeSeconds = timeMinutes * 60;

    // Output
    std::cout << "Time in minutes = " << timeMinutes << "\n"
        << "Time in seconds = " << timeSeconds << "\n";



    // EXERCISE 3

    std::string insultOne = "You're a ";
    std::string insultTwo = "Donkey";

    // Combine the two strings
    std::string insultFull = insultOne + insultTwo;

    // Print the combined string
    std::cout << insultFull << "\n";


    // EXERCISE 4

// Declare variables
    std::string codeWord = "codeword";
    std::string sentance = "Find the codeword in this sentance";

    // Find position of word within the sentance
    std::size_t wordPos = sentance.find(codeWord);

    // Print the position
    std::cout << "Codeword position: " << wordPos << "\n";


    // EXERCISE 5

// Declare variables
    int year = 0;
    int day = 0;
    std::string month;

    // User input
    std::cout << "Enter your year of birth: \n";
    std::cin >> year;

    std::cout << "Enter your month of birth: \n";
    std::cin >> month;

    std::cout << "Enter your day of birth: \n";
    std::cin >> day;

    // Print full birthday
    std::cout << "Your birthday is the " << day << " of " << month << " " << year << "\n";


    // EXERCISE 6

// Declare variables
    std::string badWord = "bad";
    std::string userWord;

    // User input
    std::cout << "Enter the 'bad' word \n";
    std::cin >> userWord;

    if (userWord == badWord)
    {
        std::cout << "BEEP \n";
    }
    else
    {
        std::cout << userWord << "\n";
    }


    // EXERCISE 7

// Declare variables
    int numberOfBottles = 0;
    std::string decision;
    bool decisionBool = false;

    // User input
    std::cout << "How many bottles are on the wall? \n";
    std::cin >> numberOfBottles;

    do
    {
        do
        {
            std::cout << "There are " << numberOfBottles << " bottles on the wall \n";
            std::cout << "Would you like to drink a bottle? (Y/N) \n";
            std::cin >> decision;

            // Loop back until user answers "Y"
        } while (decision != "Y");

        // Reduce number of bottles by 1 and print new number
        numberOfBottles--;
        std::cout << "There are now " << numberOfBottles << " bottles on the wall \n";

        // Loop until number of bottles = 0
    } while (numberOfBottles > 0); ;

    // EXERCISE 8
    int width = 0;
    int height = 0;

    std::cout << "Enter the width of a rectangle \n";
    std::cin >> width;
    std::cout << "Enter the height of a rectangle \n";
    std::cin >> height;
    std::cout << "Area is: " << RectangleFunction(width, height) << "\n";

    // EXERCISE 9

    int minScore = 0;
    int maxScore = 0;

    std::cout << "Enter minimum score: \n";
    std::cin >> minScore;
    std::cout << "Enter maximum score: \n";
    std::cin >> maxScore;


    for (int i = 0; i < 5; i++)
    {
        std::cout << RandomFunction(minScore, maxScore) << "\n";
    }

    
    */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
