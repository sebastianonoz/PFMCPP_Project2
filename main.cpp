#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
int 
float 
double 
char 
bool 
unsigned int
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int ballsInBasket = 20;
    int coins = 9;
    int gamesPlayed = 4;

    float temperature = 72.5f;
    float weight = 185.5f;
    float distance = 0.5f;

    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    double speedOfLight = 299792458;

    char grade = 'A';
    char grade2 = 'B';
    char grade3 = 'C';

    bool isHappy = true;
    bool flashLightOn = false;
    bool isLoggedIn = true;
  
    unsigned int x = 5;
    unsigned int y = 10;
    unsigned int z = 15;
    
    
    ignoreUnused(number, ballsInBasket, coins, gamesPlayed, temperature, weight, distance, pi, e, speedOfLight, grade, grade2, grade3, isHappy, flashLightOn, isLoggedIn, x, y, z); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool addTwoNumbers (int a, int b) 
{
    ignoreUnused(a, b);
    return{};
}
/*
 2)
 */
int multiplyNumbers(int firstNumber, int secondNumber) 
{
    ignoreUnused(firstNumber, secondNumber);
    return {};
}

/*
 3)
 */
bool isNumberEven(int number) 
{
    ignoreUnused(number);
    return {};
}

/*
 4)
 */
char toUpperCase(char letter) 
{
    ignoreUnused(letter);
    return {};
}

/*
 5)
 */
bool isLetter(char letter) 
{
    ignoreUnused(letter);
    return {};
}

/*
 6)
 */
bool isZero(int number) 
{
    ignoreUnused(number);
    return {};
}

/*
 7)
 */
bool isLeapYear(int year) 
{
    ignoreUnused(year);
    return {};
}

/*
 8)
 */
int findDistance(int x1, int y1, int x2, int y2) 
{
    ignoreUnused(x1, y1, x2, y2);
    return {};
}
/*
 9)
 */
bool isVowel(char letter) {
    ignoreUnused(letter);
    return {};
}

/*
 10)
 */
bool isPositive(float number) 
{
    ignoreUnused(number);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    //1)
    auto twoNumbersAdded = addTwoNumbers(5, 3);
    //2)
    auto numbersMultiplied = multiplyNumbers(7,2);
    //3)
    auto evenNumberCheck = isNumberEven(4);
    //4)
    auto makeUpperCase = toUpperCase('a');
    //5)
    auto checkIfLetter = isLetter('B');
    //6)
    auto equalsZero = isZero(0);
    //7)
    auto leapYearCheck = isLeapYear(2018);
    //8)
    auto distance = findDistance(1, 4, 4, 6);
    //9)
    auto vowelCheck = isVowel('e');
    //10)
    auto positiveNumber = isPositive(-2);
    
    ignoreUnused(carRented, twoNumbersAdded, numbersMultiplied, evenNumberCheck, makeUpperCase, checkIfLetter, equalsZero, leapYearCheck, distance, vowelCheck, positiveNumber);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
