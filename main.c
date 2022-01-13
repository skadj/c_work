#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>


#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % (n))
#define delay(n) Sleep(n)
#define clrscr() system("cls")
#define gotoxy(x,y) { COORD Cur = {x, y}; \
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);}
#define showcursor(bShow) { CONSOLE_CURSOR_INFO CurInfo = {20, bShow}; \
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo); }

int main() {

	int x = 40, y= 10;

	int ch;

	clrscr();

	for (;;) {

	gotoxy(x,y);
		_putch('#');

		ch = _getch();
		if (ch == 0XE0 || ch == 0) {
			ch = _getch();
			switch (ch) {
			case 75:x--;
				break;
			case 77:x++;
				break;
			case 72:y--;
				break;
			case 80:
				y++;
					break;







			}
		}
		else {
			switch (ch) {
			case ' ':
				clrscr();
				break;
			case 'q':
			case 'Q':
					exit(0);
			}
		}
	}




	return 0;
}
