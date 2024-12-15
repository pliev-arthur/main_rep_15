#include <iostream>

using namespace std;

void up(int (&a)[4][4], int num) {  //up, cheaked
    int copy;
    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 4; j ++) {
            if (a[i][j] == num && i != 0 && a[i - 1][j] == 0) {
                copy = a[i][j]; a[i][j] = a[i - 1][j]; a[i - 1][j] = copy; return;
            } else if ( a[i][j] == num && (i == 0 || a[i - 1][j] != 0)) { cout << "Invalid move. Try again." << endl; return;  }
        }
    }
}

void down(int (&a)[4][4], int num) {  //down, cheaked
    int copy;
    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 4; j ++) {
            if (a[i][j] == num && i != 3 && a[i + 1][j] == 0) {
                copy = a[i][j]; a[i][j] = a[i + 1][j]; a[i + 1][j] = copy; return;
            } else if ( a[i][j] == num && (i == 3 || a[i + 1][j] != 0)) { cout << "Invalid move. Try again." << endl; return; }
        }
    }
}

void left(int (&a)[4][4], int num) {  //left, cheaked
    int copy;
    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 4; j ++) {
            if (a[i][j] == num && j != 0 && a[i][j - 1] == 0) {
                copy = a[i][j]; a[i][j] = a[i][j - 1]; a[i][j - 1] = copy; return;
            } else if (a[i][j] == num && (j == 0 || a[i][j - 1] != 0)) { cout << "Invalid move. Try again." << endl; return; }
        }
    }
}

void right(int (&a)[4][4], int num) {  //right, cheaked
    int copy;
    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 4; j ++) {
            if (a[i][j] == num && j != 3 && a[i][j + 1] == 0) {
                copy = a[i][j]; a[i][j] = a[i][j + 1]; a[i][j + 1] = copy; return;
            } else if ( a[i][j] == num && (j == 0 || a[i][j + 1] != 0)) { cout << "Invalid move. Try again." << endl; return; }
        }
    }
}


