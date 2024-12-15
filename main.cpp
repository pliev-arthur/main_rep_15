#include<iostream> 
#include <random> 
#include <ctime> 
#include"movements.h" 
#include"perem_proverka.h" 
#include"init_print.h" 
 
using namespace std; 
 
int main() 
{ 
    int field[4][4], result[4][4]; // Initial field, result field 
    initResult(result); 
    cout << "Your goal is:" << endl; 
    printArray(result); 
    cout << endl; 
    cout << "Your field is:" << endl; 
    perem(field); // Creating a random playing field 
    bool check = proverka(field); // Checking for solvability 
    while (check != true){ // The re-creation of the field while not solvable 
        perem(field); 
        check = proverka(field); 
    } 
    printArray(field); 
    bool flag = true; 
    while (flag == true && field != result) // Choosing moves until the fields are equal 
    { 
        int number, cMove; 
        cout << endl; 
        cout << "Choose number: " << endl; // Selecting an element 
        cin >> number; 
        cout << "Choose move (1 - up, 2 - down, 3 - left, 4 - right, "<< 
        "5 - exit):" << endl; // Choosing a move or exiting the game 
        cin >> cMove; 
        cout << endl; 
        switch(cMove) 
        { 
            case 1: up(field, number); break; 
            case 2: down(field, number); break; 
            case 3: left(field, number); break; 
            case 4: right(field, number); break; 
            case 5: flag = false; break; // exit 
            default: "Wrong input. Try again."; break; 
        } 
        if (flag == true) 
            printArray(field); 
    } 
    return 0; 
}
