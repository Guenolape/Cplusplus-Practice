// Cplusplus Practoce Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h> // To use rand()
#include <time.h>   // To seed rand()


void BasicFunction()
{
    std::cout << "Basic function ran\n";
}

void ParameterFunction(int paramInt)
{
    ++paramInt;
    std::cout << "Parameter function ran, paramInt = " << paramInt;
}

int ReturnFunction()
{
    return 42;
}

int RandomFunction(int lowerRange, int upperRange)
{
    std::srand(time(NULL));
    int range = upperRange - lowerRange;
    int randomNumber = std::rand() % range + lowerRange;
    return randomNumber;
}

int RectangleFunction(int width, int height)
{
    int area = width * height;
    return area;
}

int main()
{








    // Generate a random number between 0 and RAND_MAX (very large)
    int randomNumber = std::rand();
    std::cout << "Random number is " << randomNumber << "\n";

    // A seed is a starting point for the random number calculations
    std::srand(time(NULL));         

    int lowerNumber = 50;
    int upperNumber = 150;
    int range = upperNumber - lowerNumber;
    int seededRandom = std::rand() % range + lowerNumber;
    std::cout << "Seeded random number is: " << seededRandom << "\n";

    /*
    // Declare a vector
    std::vector<int> intVector;

    // Add items to vector using push_back
    // push_back adds items to the back end of the vector

    

    intVector.push_back(1);         // Vector = {1}
    intVector.push_back(2);         // Vector = {1, 2}
    intVector.push_back(189);       // Vector = {1, 2, 189}
    intVector.push_back(40);        // Vector = {1, 2, 189, 40}
    intVector.push_back(117);       // Vector = {1, 2, 189, 40, 117}

    // You can get the current size of the vector using vectorName.size
    std::cout << "Vector size is " << intVector.size() << "\n";


    // You can access items in a vector just like an array using []
    std::cout << "Vector index 1 is " << intVector[1] << "\n";


    // Change the value of an item
    // The item must already exist
    intVector[1] = 5;
    std::cout << "Vector index 1 is " << intVector[1] << "\n";


    // Items can be removed using the erase() function, using iterators
    // An iterator is a marker for a particular point in a vector 
    
    // Lets erase the first 2 elements
    // Parameter 1 - starting point
    // Parameter 2 - end BEFORE this point

    // Vector = {1, 2, 189, 40, 117}
    intVector.erase(intVector.begin(), intVector.begin() + 2);              // Erase everything between vector startpoint, and startpoint + 2

    std::cout << "Vector size is " << intVector.size() << "\n";
    std::cout << "Vector index 0 is " << intVector[0] << "\n";

    

    // Loop through vector and print all items
    for (int i = 0; i < intVector.size(); i++)
    {
        std::cout << "Vector index " << i << " is " << intVector[i] << "\n";
    }

    
    void EarlyDeclare();
    EarlyDeclare();
    BasicFunction();

    // This is the same as saying paramInt = 5
    int testInt = 5;
    ParameterFunction(testInt);

    ReturnFunction();
 
    // Static Array
    int intArray[] = { 0, 1, 2 };
    const int intArraySize = 3;
    int intArrayB[intArraySize];

    
    // While loops
    bool whileB = true;

    while (whileB = true)
    {
        whileB = false;
    }   

    int i = 0;
    do
    {
        i++;
        std::cout << "This loop ran " << i << " times\n";   
    } while (i < 100);
    

    int numberOfPages = 0;
    std::string googleString = "G";

    std::cout << "How many pages are there? \n";
    std::cin >> numberOfPages;
    

    for (int i = 0; i < numberOfPages; i++)
    {
        googleString += "o";
    }
    googleString += "gle\n";

    std::cout << googleString;


      // EXCERCISE 1
    
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

    
        // EXCERCISE 2

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
        


        // EXCERCISE 3
  
    std::string insultOne = "You're a ";
    std::string insultTwo = "Donkey";

    // Combine the two strings
    std::string insultFull = insultOne + insultTwo;

    // Print the combined string
    std::cout << insultFull << "\n";


        // EXCERCISE 4

    // Declare variables
    std::string codeWord = "codeword";
    std::string sentance = "Find the codeword in this sentance";

    // Find position of word within the sentance
    std::size_t wordPos = sentance.find(codeWord);

    // Print the position
    std::cout << "Codeword position: " << wordPos << "\n";


        // EXCERCISE 5

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
    } while (numberOfBottles > 0);  
   
   
    

    // Practice problem
    int choice = 0;

    // User input
    std::cout << "Would you like to go North, East, South or West? (1-4)\n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
    {
        std::cout << "You go North and come across a dense woodland";
        break;
    }
    case 2:
    {
        std::cout << "You go East and come across an abandoned beach";
        break;
    }
    case 3:
    {
        std::cout << "You go South and come across a ruined fortress";
        break;
    }
    case 4:
    {
        std::cout << "You go West and come across deserted farmland";
        break;
    }
    default:
    {
        std::cout << "That is not a valid direction";
        break;
    }


    }



    int switchInt = 2;

    switch (switchInt)
    {
    case 0: 
    {
        std::cout << "Error was 0";
        break;
    }
        

    case 1:
    {
        std::cout << "Error was 1";
        break;
    }
    case 2:
    {
        std::cout << "Error was 2";
        break;
    }
    default:
    {
        std::cout << "Error was unrecognised";
        break;
    }       
    }

    */



   
} 


void EarlyDeclare()
{
    std::cout << "Early declare function ran \n";
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
