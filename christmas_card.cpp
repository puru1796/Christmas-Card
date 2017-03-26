#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*Global declarations*/

string salutation = "Dear ";
string recipient;
string additional_greeting;
string sender = "Puru";
int i, j;
char comma = ',';
char card[34][70] = { 0 };
char gift[8][17] = { 0 };
char tree[17][25] = { 0 };
char gingerbread[5][9] = { 0 };
char reindeer[10][18] = { 0 };

/*Functions*/

void outerBorder(int height, int width);
void innerBorder(int height, int width);
void makeTree(int x, int y);
void makeReindeer(int x, int y);
void makeGift(int x, int y);
void makeGingerbread(int x, int y);

void main() {

	/*INPUT*/

	getline(cin, recipient);
	getline(cin, additional_greeting);
	cout << endl;

	/*Add structures*/

	outerBorder(0, 0);
	innerBorder(1, 1);
	makeTree(15, 3);
	makeReindeer(12, 45);
	makeGift(2, 43);
	makeGift(23, 31);
	makeGift(23, 49);
	makeGingerbread(16, 29);

	/*Card text*/

	for (i = 5; i < 6; i++){
		for (j = 6; j < 11; j++){
			card[i][j] = salutation[j - 6];
 		}
	}
	
	for (i = 5; i < 6; i++){
		for (j = 11; j < (11 + recipient.length()); j++){
			card[i][j] = recipient[j - 11];
		}
	}

	for (i = 5; i < 6; i++){
		for (j = (11 + recipient.length()); j < (11 + recipient.length() + 1); j++){
			card[i][j] = comma;
		}
	}
	
	for (i = 8; i < 9; i++){
		for (j = 10; j < (10 + additional_greeting.length()); j++){
			card[i][j] = additional_greeting[j - 10];
		}
	}

	for (i = 11; i < 12; i++){
		for (j = 24; j < 28; j++){
			card[i][j] = sender[j - 24];
		}
	}

	/*CARD OUTPUT*/

	for (i = 0; i < 34; i++){
		for (j = 0; j < 70; j++){
			cout << card[i][j];
		}
		cout << endl;
	}

	cout << endl;

	cout << "Type exit to close program" << endl << endl;

	char end;
	cin >> end;
}

/*BORDER*/

/*Outer border*/

void outerBorder(int height, int width){
	int i, j;
	for (i = 0; i < 34; i++){
		for (j = 0; j < 70; j++){
			if (i == 0){
				card[i][j] = '*';
			}
			else if (i == 33){
				card[i][j] = '*';
			}
			else if (j == 0){
				card[i][j] = '#';
			}
			else if (j == 69){
				card[i][j] = '#';
			}
			else{
				card[i][j] = ' ';
			}
		}
	}
}

/*Inner border*/

void innerBorder(int height, int width){
	int i, j;
	for (i = 1; i < 33; i++){
		for (j = 1; j < 69; j++){
			if (j == 1){
				card[i][j] = '|';
			}
			else if (j == 68){
				card[i][j] = '|';
			}
			else if (i == 1 && j % 2 == 0){
				card[i][j] = '+';
			}
			else if (i == 1 && j % 2 != 0){
				card[i][j] = '-';
			}
			else if (i == 32 && j % 2 != 0){
				card[i][j] = '+';
			}
			else if (i == 32 && j % 2 == 0){
				card[i][j] = '-';
			}
		}
	}
}

/*STRUCTURE*/

/*Christmas tree structure*/

void makeTree(int x, int y){
	for (i = 0; i < 16; i++){
		for (j = 0; j < 25; j++){
			if (i == 0){
				if (j == 12){
					tree[i][j] = '*';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 1){
				if (j == 11){
					tree[i][j] = '/';
				}
				else if (j == 13){
					tree[i][j] = '\\';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 2){
				if (j == 11){
					tree[i][j] = '/';
				}
				else if (j == 13){
					tree[i][j] = '\\';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 3){
				if (j == 9 || j == 15){
					tree[i][j] = '@';
				}
				else if (j == 10){
					tree[i][j] = '/';
				}
				else if (j == 14){
					tree[i][j] = '\\';
				}
				else if (j == 11){
					tree[i][j] = '.';
				}
				else if (j == 12){
					tree[i][j] = ':';
				}
				else if (j == 13){
					tree[i][j] = '\'';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 4){
				if (j == 8 || j == 16){
					tree[i][j] = '%';
				}
				else if (j == 9){
					tree[i][j] = '/';
				}
				else if (j == 15){
					tree[i][j] = '\\';
				}
				else if (j == 10 || j == 14){
					tree[i][j] = '_';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 5){
				if (j == 7 || j == 17){
					tree[i][j] = '@';
				}
				else if (j == 8 || j == 16){
					tree[i][j] = ' ';
				}
				else if (j == 9){
					tree[i][j] = '/';
				}
				else if (j == 15){
					tree[i][j] = '\\';
				}
				else if (j == 11){
					tree[i][j] = ',';
				}
				else if (j == 12){
					tree[i][j] = '.';
				}
				else if (j == 13){
					tree[i][j] = ':';
				}
				else if (j == 14){
					tree[i][j] = '\'';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 6){
				if (j == 8){
					tree[i][j] = '/';
				}
				else if (j == 16){
					tree[i][j] = '\\';
				}
				else if (j == 9){
					tree[i][j] = ':';
				}
				else if (j == 10){
					tree[i][j] = '\'';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 7){
				if (j == 6 || j == 18){
					tree[i][j] = '@';
				}
				else if (j == 7){
					tree[i][j] = '/';
				}
				else if (j == 17){
					tree[i][j] = '\\';
				}
				else if (j == 13){
					tree[i][j] = ',';
				}
				else if (j == 14){
					tree[i][j] = '.';
				}
				else if (j == 15){
					tree[i][j] = ':';
				}
				else if (j == 16){
					tree[i][j] = '\'';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 8){
				if (j == 5 || j == 19){
					tree[i][j] = '@';
				}
				else if (j == 6){
					tree[i][j] = '/';
				}
				else if (j == 18){
					tree[i][j] = '\\';
				}
				else if (j == 7 || j == 17){
					tree[i][j] = '_';
				}
				else if (j == 9){
					tree[i][j] = ',';
				}
				else if (j == 10){
					tree[i][j] = '.';
				}
				else if (j == 11){
					tree[i][j] = ':';
				}
				else if (j == 12){
					tree[i][j] = '\'';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 9){
				if (j == 6){
					tree[i][j] = '/';
				}
				else if (j == 18){
					tree[i][j] = '\\';
				}
				else if (j == 8 || j == 17){
					tree[i][j] = '\'';
				}
				else if (j == 14){
					tree[i][j] = ',';
				}
				else if (j == 15){
					tree[i][j] = '.';
				}
				else if (j == 16){
					tree[i][j] = ':';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 10){
				if (j == 4 || j == 20){
					tree[i][j] = '@';
				}
				else if (j == 5){
					tree[i][j] = '/';
				}
				else if (j == 19){
					tree[i][j] = '\\';
				}
				else if (j == 6 || j == 18){
					tree[i][j] = '_';
				}
				else if (j == 10){
					tree[i][j] = ',';
				}
				else if (j == 11){
					tree[i][j] = '.';
				}
				else if (j == 12){
					tree[i][j] = ':';
				}
				else if (j == 13){
					tree[i][j] = '\'';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 11){
				if (j == 2 || j == 22){
					tree[i][j] = '@';
				}
				else if (j == 3){
					tree[i][j] = '/';
				}
				else if (j == 21){
					tree[i][j] = '\\';
				}
				else if (j == 6 || j == 16){
					tree[i][j] = ',';
				}
				else if (j == 7 || j == 17){
					tree[i][j] = '.';
				}
				else if (j == 8 || j == 18){
					tree[i][j] = ':';
				}
				else if (j == 9 || j == 19){
					tree[i][j] = '\'';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 12){
				if (j == 1 || j == 23){
					tree[i][j] = '@';
				}
				else if (j == 2){
					tree[i][j] = '/';
				}
				else if (j == 22){
					tree[i][j] = '\\';
				}
				else if (j == 5 || j == 15){
					tree[i][j] = '\'';
				}
				else if (j == 12){
					tree[i][j] = ',';
				}
				else if (j == 13){
					tree[i][j] = '.';
				}
				else if (j == 14){
					tree[i][j] = ':';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 13){
				if (j >= 0 && j < 12){
					tree[i][j] = '/';
				}
				else if (j > 12 && j < 25){
					tree[i][j] = '\\';
				}
				else{
					tree[i][j] = ' ';
				}
			}
			else if (i == 15 && j == 12){
				tree[i][j] = '_';
			}
			else if (i < 16 && i > 13){
				if (j == 11 || j == 13){
					tree[i][j] = '|';
				}
				else{
					tree[i][i] = ' ';
				}
			}
			else{
				tree[i][j] = ' ';
			}
		}
	}

	/*Tree layout*/

	for (i = x; i < x+17; i++){
		for (j = y; j < y+25; j++){
			card[i][j] = tree[i - x][j - y];
		}
	}
}

/*Reindeer structure*/

void makeReindeer(int x, int y){
	for (i = 0; i < 10; i++){
		for (j = 0; j < 18; j++){
			if (i == 0){
				if (j == 12 || j == 15){
					reindeer[i][j] = '\\';
				}
				else if (j == 13 || j == 16){
					reindeer[i][j] = '/';
				}
				else{
					reindeer[i][i] = ' ';
				}
			}
			else if (i == 1){
				if (j == 13){
					reindeer[i][j] = '\\';
				}
				else if (j == 15){
					reindeer[i][j] = '/';
				}
				else{
					reindeer[i][i] = ' ';
				}
			}
			else if (i == 2){
				if (j == 14){
					reindeer[i][j] = '|';
				}
				else if (j == 15){
					reindeer[i][j] = '_';
				}
				else{
					reindeer[i][i] = ' ';
				}
			}
			else if (i == 3){
				if (j == 13){
					reindeer[i][j] = '/';
				}
				else if (j == 14){
					reindeer[i][j] = '^';
				}
				else if (j == 15){
					reindeer[i][j] = '0';
				}
				else if (j == 16){
					reindeer[i][j] = '\\';
				}
				else{
					reindeer[i][i] = ' ';
				}
			}
			else if (i == 4){
				if (j > 11 && j < 14){
					reindeer[i][j] = '/';
				}
				else if (j == 14 || j == 17){
					reindeer[i][j] = '\\';
				}
				else{
					reindeer[i][i] = ' ';
				}
			}
			else if (i == 5){
				if (j == 2){
					reindeer[i][j] = '^';
				}
				else if ((j > 2 && j < 11) || (j > 14 && j < 17)){
					reindeer[i][j] = '~';
				}
				else if (j > 10 && j < 13){
					reindeer[i][j] = '/';
				}
				else if (j == 17){
					reindeer[i][j] = 'U';
				}
				else{
					reindeer[i][i] = ' ';
				}
			}
			else if (i == 6){
				if (j == 1 || j == 3 || j == 10){
					reindeer[i][j] = '(';
				}
				else if (j > 4 && j < 10){
					reindeer[i][j] = '_';
				}
				else if (j == 4){
					reindeer[i][j] = ')';
				}
				else if (j == 11){
					reindeer[i][j] = '/';
				}
				else{
					reindeer[i][i] = ' ';
				}
			}
			else if (i == 7){
				if (j == 1 || j == 3 || j == 11){
					reindeer[i][j] = '/';
				}
				else{
					reindeer[i][i] = ' ';
				}
			}
			else if (i == 8){
				if (j == 0){
					reindeer[i][j] = '|';
				}
				else if (j == 1){
					reindeer[i][j] = '/';
				}
				else if (j == 12){
					reindeer[i][j] = '\\';
				}
				else{
					reindeer[i][i] = ' ';
				}
			}
			else if (i == 9){
				if (j == 0){
					reindeer[i][j] = '/';
				}
				else if (j == 13){
					reindeer[i][j] = '\\';
				}
				else if (j == 1 || j == 14){
					reindeer[i][j] = '>';
				}
				else{
					reindeer[i][i] = ' ';
				}
			}
			else{
				reindeer[i][j] = ' ';
			}
		}
	}

	/*Reindeer layout*/

	for (i = x; i < x+10; i++){
		for (j = y; j < y+18; j++){
			card[i][j] = reindeer[i - x][j - y];
		}
	}
}

/*Gift box structure*/

void makeGift(int x, int y){
	for (i = 0; i < 8; i++){
		for (j = 0; j < 17; j++){
			if (i == 0){
				if (j == 6 || j == 10){
					gift[i][j] = '_';
				}
				else{
					gift[i][j] = ' ';
				}
			}
			else if (i == 1){
				if (j > 4 && j < 7){
					gift[i][j] = '(';
				}
				else if (j > 9 && j < 12){
					gift[i][j] = ')';
				}
				else if (j == 7){
					gift[i][j] = '\\';
				}
				else if (j == 9){
					gift[i][j] = '/';
				}
				else if (j == 8){
					gift[i][j] = 'o';
				}
				else{
					gift[i][j] = ' ';
				}
			}
			else if (i == 2){
				if (j == 0 || j == 16){
					gift[i][j] = '.';
				}
				else if ((j > 0 && j < 6) || (j>10 && j < 16)){
					gift[i][j] = '-';
				}
				else if (j > 5 && j < 8){
					gift[i][j] = '/';
				}
				else if (j > 8 && j < 11){
					gift[i][j] = '\\';
				}
				else if (j == 8){
					gift[i][j] = '^';
				}
				else{
					gift[i][j] = ' ';
				}
			}
			else if (i > 2 && i < 7){
				if (j == 0 || j == 7 || j == 9 || j == 16){
					gift[i][j] = '|';
				}
			}
			else if (i == 3){
				if (j == 5){
					gift[i][j] = '/';
				}
				else if (j = 11){
					gift[i][j] = '\\';
				}
				else if (j == 6 || j == 10){
					gift[i][j] = '`';
				}
				else gift[i][j] = ' ';
			}
			else if (i == 7){
				if (j == 0 || j == 16){
					gift[i][j] = '\'';
				}
				else if ((j > 0 && j < 7) || (j > 9 && j < 17)){
					gift[i][j] = '-';
				}
				else if (j > 6 && j < 10){
					gift[i][j] = '=';
				}
				else{
					gift[i][j] = ' ';
				}
			}
		}
	}

	/*Giftbox layout*/

	for (i = x; i < x+8; i++){
		for (j = y; j < y+17; j++){
			card[i][j] = gift[i - x][j - y];
		}
	}
}

/*Gingerbread structure*/

void makeGingerbread(int x, int y){
	for (i = 0; i < 5; i++){
		for (j = 0; j < 9; j++){
			if (i == 0){
				if (j == 3 || j == 5){
					gingerbread[i][j] = '.';
				}
				else if (j == 4){
					gingerbread[i][j] = '-';
				}
				else{
					gingerbread[i][j] = ' ';
				}
			}
			else  if (i == 1){
				if (j == 1 || j == 7){
					gingerbread[i][j] = '_';
				}
				else if (j == 2){
					gingerbread[i][j] = '(';
				}
				else if (j == 6){
					gingerbread[i][j] = ')';
				}
				else if (j == 4){
					gingerbread[i][j] = '"';
				}
				else{
					gingerbread[i][j] = ' ';
				}
			}
			else if (i == 2){
				if (j == 0){
					gingerbread[i][j] = '(';
				}
				else if (j == 4){
					gingerbread[i][j] = ':';
				}
				else if (j == 8){
					gingerbread[i][j] = ')';
				}
				else if (j == 1 || j == 7){
					gingerbread[i][j] = '_';
				}
				else{
					gingerbread[i][j] = ' ';
				}
			}
			else if (i == 3){
				if (j == 2){
					gingerbread[i][j] = '/';
				}
				else if (j == 6){
					gingerbread[i][j] = '\\';
				}
				else if (j == 4){
					gingerbread[i][j] = '\'';
				}
				else{
					gingerbread[i][j] = ' ';
				}
			}
			else if (i == 4){
				if (j == 1){
					gingerbread[i][j] = '(';
				}
				else if (j == 2 || j == 6){
					gingerbread[i][j] = '_';
				}
				else if (j == 3){
					gingerbread[i][j] = '/';
				}
				else if (j == 4){
					gingerbread[i][j] = '^';
				}
				else if (j == 5){
					gingerbread[i][j] = '\\';
				}
				else if (j == 7){
					gingerbread[i][j] = ')';
				}
			}
			else{
				gingerbread[i][j] = ' ';
			}
		}
	}

	/*Gingerbread layout*/

	for (i = x; i < x+5; i++){
		for (j = y; j < y+9; j++){
			card[i][j] = gingerbread[i - x][j - y];
		}
	}
}