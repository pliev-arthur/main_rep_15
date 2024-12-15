#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void perem(int(&a)[4][4]) {
    srand(time(0));
    int* ind = new int[16];
    for (int i = 0; i < 16; ++i) {
        ind[i] = i;
    }
    for (int i = 15; i >= 0; --i) {
        int j = rand() % (i + 1);
        int t = ind[i];
        ind[i] = ind[j];
        ind[j] = t;
    }
    int o = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = ind[o];
            o += 1;
        }
    }
    delete[] ind;
}
bool proverka(int(&a)[4][4]) {
    bool result = false;
    int k = 0, s; // k - кол-во инверсий, s - номер строки с пустой €чейкой
    int* ind = new int[16]; // одномерна€ копи€ двумерного массива
    int o = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            ind[o] = a[i][j];
            o += 1;
            if (a[i][j] == 0) // поиск s
                s = i;
        }
    for (int i = 0; i < 16; i++) // подсчет инверсий
    {
        int n = ind[i];
        for (int j = i + 1; j < 16; j++)
        {
            int m = ind[j];
            if (n > 0 && n > m)
                k++;
        }
    }
    delete[] ind;
    if ((k % 2 == 0 && s % 2 != 0) || (k % 2 != 0 && s % 2 == 0)) // услови€ на решаемость
        result = true;
    else
        result = false;
    return result;
}