#include <iostream> 
#include <random> 
#include <ctime> 
 
using namespace std; 
 
void initResult(int (&a)[4][4]) // initializing the result field 
{ 
    int k = 0; 
    for (int i = 0; i < 4; ++i) 
        for (int j = 0; j < 4; ++j) 
            a[i][j] = k++; 
} 
void printArray(int (&a)[4][4]) // array output 
{ 
    for(int i = 0; i < 4; i++) 
    { 
        for(int j = 0; j < 4; j++) 
        { 
            if (a[i][j] >= 0) 
                cout << " " << a[i][j] << "\t"; 
            else 
                cout << a[i][j] << "\t"; 
        } 
        cout << endl; 
    } 
}
