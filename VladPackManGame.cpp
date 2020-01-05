#include <iostream>

#include "BoardH.h"

using namespace std;

void banner()
{
	cout << "***************************************************" << endl;
	cout << "*                                                 *" << endl;
	cout << "*  Welcome to TEXT-BASED PACKMAN		   *" << endl;
	cout << "*                                                 *" << endl;
	cout << "*  (c) 2010  Vlad Estivill_Castro		   *" << endl;
	cout << "*                                                 *" << endl;
	cout << "*   W<cr> - Move up		                   *" << endl;
	cout << "*   S<cr> - Move down 	                           *" << endl;
	cout << "*   A<cr> - Move left 	                           *" << endl;
	cout << "*   D<cr> - Move right 	                   *" << endl;
	cout << "*   P<cr> - Park   	                           *" << endl;
	cout << "*                                                 *" << endl;
	cout << "***************************************************" << endl;


}

int main()

{
	char aMove;
	banner();

	// Initialize

	Board theBoard (7,7);

	// Set Up

        do{


	theBoard.paint();

	cin >> aMove;	

	if ( ('W'==aMove) || ('S'==aMove) || ('A'==aMove) || ('D'==aMove) )
		 aMove=aMove-'A'+'a';

	if ( ! (
           ('w'==aMove) || ('s'==aMove) || ('a'==aMove) || ('d'==aMove) 
            ) ) aMove='p';

	theBoard.move(aMove);

	} while (theBoard.IamAlive());


        return 0;
}

