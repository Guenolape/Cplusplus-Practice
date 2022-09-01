// Cplusplus Practoce Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{

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
    std::string insultTwo = "Donkey \n";

    // Combine the two strings
    std::string insultFull = insultOne + insultTwo;

    // Print the combined string
    std::cout << insultFull;


        // EXCERCISE 4

    // Declare variables
    std::string codeWord = "codeword";
    std::string sentance = "Find the codeword in this sentance";

    // Find position of word within the sentance
    std::size_t wordPos = sentance.find(codeWord);

    // Print the position
    std::cout << wordPos;

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
    std::cout << "Your birthday is the " << day << " of " << month << " " << year;





    //// Variable Types Examples
    //int testInt = 100;
    //unsigned testUnsigned = 100u;
    //float testFloat = 0.5f;
    //double testDouble = 0.5;
    //bool testBool = true;

    //char testChar = 'b';
    //char firstNameOld[] = "Owen";

    //std::string firstName = "Owen";
    //std::string lastName = "Nicoll";

    //std::string fullName = firstName + " " + lastName;

    //float result = 50 % 100;

    //std::string testString = "No";

    //char firstInitial = fullName[0];

    //std::string initials = fullName.substr(0, 1);

    //// Find the position in the string and store it in a variable of type size_t (like an int)
    //std::size_t spacePos = fullName.find(" ");
    //initials += fullName.substr(spacePos + 1, 1);

    //
    //std::string paragraph = "A paragraph (from Ancient Greek παράγραφος (parágraphos) 'to write beside') is a self-contained unit of discourse in writing dealing with a particular point or idea.";

    //paragraph = paragraph.substr(0, 20);

    //
    //// USER INPUT
    //std::cout << "Please enter a word. \n";

    //// A variable to store the user input
    //std::string entryString;

    //// Get user input
    //std::cin >> entryString;

    //// Print the user's word
    //std::cout << "You typed: " << entryString << "!\n";

    //// We can also input things other than strings
    //int entryInt;
    //std::cout << "Please enter a whole number. \n";
    //std::cin >> entryInt;
    //std::cout << "You typed: " << entryInt << "\n";


    //float entryFloat;
    //std::cout << "Enter a number with a decimal place \n";
    //std::cin >> entryFloat;
    //std::cout << "You typed " << entryFloat << "\n";
    //
    //std::string lineOfText;
    //std::cout << "Please enter a line of text \n";
    //std::getline(std::cin, lineOfText);
    //std::cout << lineOfText;


    //
    //// SELECTION
    //bool decision = true;
    //if (decision == true)
    //{
    //    std::cout << "Decision was true! \n";
    //}
    //else
    //{
    //    std::cout << "Decision was false \n";
    //}
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
