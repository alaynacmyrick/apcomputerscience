#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <string>

using namespace std;

int main() {
	string is;
	int randnum = 0; 



	cout << "Welcome to matcher. Here you will be matched" << endl << "enter your initails like this (A. B)"<<endl;
	cin >> is;

	randnum = rand() % 10;
	switch (randnum) {

	case 0:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout <<  "   **       **"<< endl;
		cout <<       "*              *" << endl;
		cout <<       " *            *" << endl;
		cout <<       "  *  "<< is <<"+B. Z *." << endl;
		cout <<       "   *         *" << endl;
		cout <<       "    *       *" << endl;
		cout <<       "     *    *" << endl;
		cout <<       "       * *" << endl;
		break;
	case 1:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout << "   **       **" << endl;
		cout << "*              *" << endl;
		cout << " *            *" << endl;
		cout << "  *  " << is << "+K. V *." << endl;
		cout << "   *         *" << endl;
		cout << "    *       *" << endl;
		cout << "     *    *" << endl;
		cout << "       * *" << endl;

		break;
	case 2:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout << "   **       **" << endl;
		cout << "*              *" << endl;
		cout << " *            *" << endl;
		cout << "  *  " << is << "+M. C *." << endl;
		cout << "   *         *" << endl;
		cout << "    *       *" << endl;
		cout << "     *    *" << endl;
		cout << "       * *" << endl;

		break;
	case 3:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout << "   **       **" << endl;
		cout << "*              *" << endl;
		cout << " *            *" << endl;
		cout << "  *  " << is << "+H. L *." << endl;
		cout << "   *         *" << endl;
		cout << "    *       *" << endl;
		cout << "     *    *" << endl;
		cout << "       * *" << endl;

		break;
	case 4:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout << "   **       **" << endl;
		cout << "*              *" << endl;
		cout << " *            *" << endl;
		cout << "  *  " << is << "+O. P *." << endl;
		cout << "   *         *" << endl;
		cout << "    *       *" << endl;
		cout << "     *    *" << endl;
		cout << "       * *" << endl;

		break;
	case 5:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout << "   **       **" << endl;
		cout << "*              *" << endl;
		cout << " *            *" << endl;
		cout << "  *  " << is << "+U. S *." << endl;
		cout << "   *         *" << endl;
		cout << "    *       *" << endl;
		cout << "     *    *" << endl;
		cout << "       * *" << endl;

		break;
	case 6:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout << "   **       **" << endl;
		cout << "*              *" << endl;
		cout << " *            *" << endl;
		cout << "  *  " << is << "+U. C *." << endl;
		cout << "   *         *" << endl;
		cout << "    *       *" << endl;
		cout << "     *    *" << endl;
		cout << "       * *" << endl;

		break;
	case 7:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout << "   **       **" << endl;
		cout << "*              *" << endl;
		cout << " *            *" << endl;
		cout << "  *  " << is << "+I. C *." << endl;
		cout << "   *         *" << endl;
		cout << "    *       *" << endl;
		cout << "     *    *" << endl;
		cout << "       * *" << endl;

		break;
	case 8:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout << "   **       **" << endl;
		cout << "*              *" << endl;
		cout << " *            *" << endl;
		cout << "  *  " << is << "+L. Q *." << endl;
		cout << "   *         *" << endl;
		cout << "    *       *" << endl;
		cout << "     *    *" << endl;
		cout << "       * *" << endl;

		break;
	case 9:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout << "   **       **" << endl;
		cout << "*              *" << endl;
		cout << " *            *" << endl;
		cout << "  *  " << is << "+Y. M *." << endl;
		cout << "   *         *" << endl;
		cout << "    *       *" << endl;
		cout << "     *    *" << endl;
		cout << "       * *" << endl;

		break;
	case 10:
		system("Color 7C");
		cout << "    HAPPY VALENTIES DAY" << endl;
		cout << "   **       **" << endl;
		cout << "*              *" << endl;
		cout << " *            *" << endl;
		cout << "  *  " << is << "+N. O *." << endl;
		cout << "   *         *" << endl;
		cout << "    *       *" << endl;
		cout << "     *    *" << endl;
		cout << "       * *" << endl;

		break;


	default:
		cout << "error" << endl;
		break;

	}

	return 0;
}