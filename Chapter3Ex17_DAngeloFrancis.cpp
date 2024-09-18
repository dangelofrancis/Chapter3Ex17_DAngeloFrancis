/*
TITLE: Chapter 3 Exercise 17 - Math Tutor
FILE NAME: Chapter3Ex17_DAngeloFrancis.cpp
PROGRAMMER: D'Angelo Francis
DATE: 9/18/24
REQUIREMENTS: Write a program that can be used as a math tutor for a young student. 
The program should display two random numbers to be added, such as

247 + 129: ???

The program should then pause while the student works on the problem. 
When the student is ready to check the answer, he or she can press a key and the program 
will display the correct solution:

247 + 129: 376

*/

#include <iostream>
#include <random>
using namespace std;

int main()
{
    //random number engine
    random_device myEngine;
    uniform_int_distribution<int> randomInt(0, 100);

    //creating 2 random numbers
    int number1 = randomInt(myEngine);
    int number2 = randomInt(myEngine);

    //creating math problem
    int answer = number1 + number2;

    cout << "Solve this math problem:" << endl << endl;
    cout << number1 << " + " << number2 << endl << endl;
    cout << "Press Enter to show the answer..." << endl;
    cin.get();
    cout << number1 << " + " << number2 << " = " << answer;

    return 0;
}
