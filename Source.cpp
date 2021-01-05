#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <string>

using namespace std;
int main()
{

    int now;//number of rows
    int loops; //nomber of loops done
    cout << "number of rows" <<endl;
    cin >> now;

    for (loops = 1; loops <= now; loops++)
    {
        for (int x = now - 1; x >= loops; x--)
        {
            cout << " ";
        }

        for (int x = 1; x <= loops; x++)
        {
            cout << "* ";
        }
        cout << endl;

    }

}