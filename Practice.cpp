//
// Created by Shibajyoti Majumder on 5/17/2020.
//

#include <iostream>
using namespace std;
/* int main()
{
    std::cout<<"Hello, World!"<< endl;
    return 0;
}*/

// Printing a triangle
/*int main()
{
    std::cout <<"     /|"<< endl;
    std::cout <<"    / |"<< endl;
    std::cout <<"   /  |"<< endl;
    std::cout <<"  /   |"<< endl;
    std::cout <<" /    |"<< endl;
    std::cout <<"/_____|"<< endl;
}*/

// Use of variable and storing data
/*int main()
{
    string Name = "John" ;
    int age;
    age = 35;
    std::cout << "There was once a man named " << Name << endl;
    std::cout << "He was " << age << " years old" << endl;
    std::cout << "He liked the name " << Name << endl;
    std::cout << " But he didn't like being " << age << endl;
}*/

// Different types of datatypes
/*int main( )
{
    char grade = 'A'; // char stores a single character
    string name = "John" ; // string stores a value with moore than one character
    int number = 50 ; // int stores a integral number
    double average = 20.5236 ; // double stores a decimal number
    bool isMale = true ; // Stores a boolean value
}
*/

// Various Operations on strings
/*int main() {
    string phrase = "Cpp Academy";
    cout << "Length of string: " << phrase.length() << endl;
    cout << "Finding of a substring: " << phrase.find("A",0) << endl;
    phrase[1] = 'P';
    cout << "The new string: " << phrase << endl;
    cout << "The new substring: " << phrase.substr(4,3) << endl;
}
*/
//new program
/*int main() {
    int age;
    cout << "enter your age";
    cin >> age;

    cout << "you are " << age << " years old";
}
*/
// Basic Calculator
/*int main() {
    int num1, num2;
    cout << "enter a number";
    cin >> num1;

    cout << "enter a number";
    cin >> num2;

    cout << num1 + num2;
    printf("Printf works in C++") ;
}
*/
// basic game
int main () {
    string game , playername;

    cout << "enter a game";
    getline(cin , game);
    cout << "Enter a player name";
    getline(cin , playername);

    cout<<"I play "<< game<<endl;
    cout << playername << " is my favourite"<<endl;
}