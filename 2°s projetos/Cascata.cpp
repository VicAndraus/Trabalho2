#include <iostream>
#include <locale.h>
#include <windows.h>
#include <algorithm>
using namespace std;

string msg, msg1;
int x, y;


void gotoxy(short x, short y) 
{
	COORD coord = {x, y};
	SetConsoleCursorPosition(GetStdHandle ( STD_OUTPUT_HANDLE ), coord);
}

void cascata(){
	for(x=0;x <= msg.size(); x++){
		
		gotoxy(60, 5);
		cout << msg1;
		
		msg1.replace(x, 1, " ");
		cout <<msg1;
		
		
		for(y=5; y <=20; y++){
			gotoxy(60 + x, y);
			cout<< msg[x];
			
			Sleep(50);
			
			gotoxy(60 + x, y); 				
			if (y < 20) 
			{
				cout << " ";
			}
		}
	}
	
}

int main()
{
	gotoxy(45,0);
	cout << "Entre com UMA mensagem: " << endl;
	gotoxy(45,1);
	cin >> msg;
	
	msg1 = msg;
	
	system("cls");
	
	cascata();
	
	return 0;
	
}