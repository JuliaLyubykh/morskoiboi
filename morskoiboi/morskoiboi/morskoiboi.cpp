#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
using namespace std;
HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
HDC hDC = GetDC(GetConsoleWindow());
HPEN Pen = CreatePen(PS_SOLID, 2, RGB(225, 255, 0));
HBRUSH Pen1 = CreateSolidBrush(RGB(0, 204, 255));
HBRUSH Pen2 = CreateSolidBrush(RGB(225, 0, 225));
HPEN Pen3 = CreatePen(PS_SOLID, 2, RGB(225, 0, 225));
class korabli
{
	int k, r, i, j, l, kr[4] = { 377, 162, 399, 176 }, f[20], f1[20], d[1000], e[1000], d1[1000], e1[1000], b[20], a[100] = { 0, 1, 2, 3, 4 , 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99 }, aj[100] = { 0, 1, 2, 3, 4 , 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99 }, c[100] = { 0, 1, 2, 3, 4 , 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99 };
public:
	void linkor();
	void kreiser();
	void esmerets();
	void kater();
	void igra();
	void vibor();
};
void cord(int x, int y)
{
	COORD G = { x, y };
	SetConsoleCursorPosition(hconsole, G);
}
void otris()
{
	int x, v;
	system("cls");
	SetConsoleTextAttribute(hconsole, (WORD)((0) | 13));
	cord(35, 5);
	cout << "МОРСКОЙ БОЙ!";
	SetConsoleTextAttribute(hconsole, (WORD)((0) | 13));
	cord(48, 9);
	cout << "А";
	cord(51, 9);
	cout << "Б";
	cord(54, 9);
	cout << "В";
	cord(57, 9);
	cout << "Г";
	cord(60, 9);
	cout << "Д";
	cord(63, 9);
	cout << "Е";
	cord(66, 9);
	cout << "Ж";
	cord(69, 9);
	cout << "З";
	cord(72, 9);
	cout << "И";
	cord(75, 9);
	cout << "К";
	cord(7, 9);
	cout << "А";
	cord(10, 9);
	cout << "Б";
	cord(13, 9);
	cout << "В";
	cord(16, 9);
	cout << "Г";
	cord(19, 9);
	cout << "Д";
	cord(22, 9);
	cout << "Е";
	cord(25, 9);
	cout << "Ж";
	cord(28, 9);
	cout << "З";
	cord(31, 9);
	cout << "И";
	cord(34, 9);
	cout << "К";
	cord(4, 10);
	cout << "1";
	cord(4, 11);
	cout << "2";
	cord(4, 12);
	cout << "3";
	cord(4, 13);
	cout << "4";
	cord(4, 14);
	cout << "5";
	cord(4, 15);
	cout << "6";
	cord(4, 16);
	cout << "7";
	cord(4, 17);
	cout << "8";
	cord(4, 18);
	cout << "9";
	cord(3, 19);
	cout << "10";
	cord(45, 10);
	cout << "1";
	cord(45, 11);
	cout << "2";
	cord(45, 12);
	cout << "3";
	cord(45, 13);
	cout << "4";
	cord(45, 14);
	cout << "5";
	cord(45, 15);
	cout << "6";
	cord(45, 16);
	cout << "7";
	cord(45, 17);
	cout << "8";
	cord(45, 18);
	cout << "9";
	cord(44, 19);
	cout << "10";
	for (x = 0; x <= 10; x++)
	{
		SelectObject(hDC, Pen3);
		MoveToEx(hDC, 48, 161, NULL);
		LineTo(hDC, 288, 161);
		MoveToEx(hDC, 48, 177, NULL);
		LineTo(hDC, 288, 177);
		MoveToEx(hDC, 48, 193, NULL);
		LineTo(hDC, 288, 193);
		MoveToEx(hDC, 48, 209, NULL);
		LineTo(hDC, 288, 209);
		MoveToEx(hDC, 48, 225, NULL);
		LineTo(hDC, 288, 225);
		MoveToEx(hDC, 48, 241, NULL);
		LineTo(hDC, 288, 241);
		MoveToEx(hDC, 48, 257, NULL);
		LineTo(hDC, 288, 257);
		MoveToEx(hDC, 48, 273, NULL);
		LineTo(hDC, 288, 273);
		MoveToEx(hDC, 48, 289, NULL);
		LineTo(hDC, 288, 289);
		MoveToEx(hDC, 48, 305, NULL);
		LineTo(hDC, 288, 305);
		MoveToEx(hDC, 48, 321, NULL);
		LineTo(hDC, 288, 321);
		MoveToEx(hDC, 48, 161, NULL);
		LineTo(hDC, 48, 321);
		MoveToEx(hDC, 72, 161, NULL);
		LineTo(hDC, 72, 321);
		MoveToEx(hDC, 96, 161, NULL);
		LineTo(hDC, 96, 321);
		MoveToEx(hDC, 120, 161, NULL);
		LineTo(hDC, 120, 321);
		MoveToEx(hDC, 144, 161, NULL);
		LineTo(hDC, 144, 321);
		MoveToEx(hDC, 168, 161, NULL);
		LineTo(hDC, 168, 321);
		MoveToEx(hDC, 192, 161, NULL);
		LineTo(hDC, 192, 321);
		MoveToEx(hDC, 216, 161, NULL);
		LineTo(hDC, 216, 321);
		MoveToEx(hDC, 240, 161, NULL);
		LineTo(hDC, 240, 321);
		MoveToEx(hDC, 264, 161, NULL);
		LineTo(hDC, 264, 321);
		MoveToEx(hDC, 288, 161, NULL);
		LineTo(hDC, 288, 321);
		MoveToEx(hDC, 376, 161, NULL);
		LineTo(hDC, 616, 161);
		MoveToEx(hDC, 376, 177, NULL);
		LineTo(hDC, 616, 177);
		MoveToEx(hDC, 376, 193, NULL);
		LineTo(hDC, 616, 193);
		MoveToEx(hDC, 376, 209, NULL);
		LineTo(hDC, 616, 209);
		MoveToEx(hDC, 376, 225, NULL);
		LineTo(hDC, 616, 225);
		MoveToEx(hDC, 376, 241, NULL);
		LineTo(hDC, 616, 241);
		MoveToEx(hDC, 376, 257, NULL);
		LineTo(hDC, 616, 257);
		MoveToEx(hDC, 376, 273, NULL);
		LineTo(hDC, 616, 273);
		MoveToEx(hDC, 376, 289, NULL);
		LineTo(hDC, 616, 289);
		MoveToEx(hDC, 376, 305, NULL);
		LineTo(hDC, 616, 305);
		MoveToEx(hDC, 376, 321, NULL);
		LineTo(hDC, 616, 321);
		MoveToEx(hDC, 376, 161, NULL);
		LineTo(hDC, 376, 321);
		MoveToEx(hDC, 400, 161, NULL);
		LineTo(hDC, 400, 321);
		MoveToEx(hDC, 424, 161, NULL);
		LineTo(hDC, 424, 321);
		MoveToEx(hDC, 448, 161, NULL);
		LineTo(hDC, 448, 321);
		MoveToEx(hDC, 472, 161, NULL);
		LineTo(hDC, 472, 321);
		MoveToEx(hDC, 496, 161, NULL);
		LineTo(hDC, 496, 321);
		MoveToEx(hDC, 520, 161, NULL);
		LineTo(hDC, 520, 321);
		MoveToEx(hDC, 544, 161, NULL);
		LineTo(hDC, 544, 321);
		MoveToEx(hDC, 568, 161, NULL);
		LineTo(hDC, 568, 321);
		MoveToEx(hDC, 592, 161, NULL);
		LineTo(hDC, 592, 321);
		MoveToEx(hDC, 616, 161, NULL);
		LineTo(hDC, 616, 321);
	}
}
void kursor(int* kr)
{
	SelectObject(hDC, Pen2);
	Rectangle(hDC, kr[0], kr[1], kr[2], kr[3]);
}
void kor(int* k, int a)
{
	int i;
	for (i = 0; i < 20; i++)
	{
		if (a == 1) SelectObject(hDC, Pen1);
		else SelectObject(hDC, Pen2);
		if (k[i] == 0) Rectangle(hDC, 49, 162, 71, 176);
		else if (k[i] == 1) Rectangle(hDC, 73, 162, 95, 176);
		else if (k[i] == 2) Rectangle(hDC, 97, 162, 119, 176);
		else if (k[i] == 3) Rectangle(hDC, 121, 162, 143, 176);
		else if (k[i] == 4) Rectangle(hDC, 145, 162, 167, 176);
		else if (k[i] == 5) Rectangle(hDC, 169, 162, 191, 176);
		else if (k[i] == 6) Rectangle(hDC, 193, 162, 215, 176);
		else if (k[i] == 7) Rectangle(hDC, 217, 162, 239, 176);
		else if (k[i] == 8) Rectangle(hDC, 241, 162, 263, 176);
		else if (k[i] == 9) Rectangle(hDC, 265, 162, 287, 176);
		else if (k[i] == 10) Rectangle(hDC, 49, 178, 71, 192);
		else if (k[i] == 11) Rectangle(hDC, 73, 178, 95, 192);
		else if (k[i] == 12) Rectangle(hDC, 97, 178, 119, 192);
		else if (k[i] == 13) Rectangle(hDC, 121, 178, 143, 192);
		else if (k[i] == 14) Rectangle(hDC, 145, 178, 167, 192);
		else if (k[i] == 15) Rectangle(hDC, 169, 178, 191, 192);
		else if (k[i] == 16) Rectangle(hDC, 193, 178, 215, 192);
		else if (k[i] == 17) Rectangle(hDC, 217, 178, 239, 192);
		else if (k[i] == 18) Rectangle(hDC, 241, 178, 263, 192);
		else if (k[i] == 19) Rectangle(hDC, 265, 178, 287, 192);
		else if (k[i] == 20) Rectangle(hDC, 49, 194, 71, 208);
		else if (k[i] == 21) Rectangle(hDC, 73, 194, 95, 208);
		else if (k[i] == 22) Rectangle(hDC, 97, 194, 119, 208);
		else if (k[i] == 23) Rectangle(hDC, 121, 194, 143, 208);
		else if (k[i] == 24) Rectangle(hDC, 145, 194, 167, 208);
		else if (k[i] == 25) Rectangle(hDC, 169, 194, 191, 208);
		else if (k[i] == 26) Rectangle(hDC, 193, 194, 215, 208);
		else if (k[i] == 27) Rectangle(hDC, 217, 194, 239, 208);
		else if (k[i] == 28) Rectangle(hDC, 241, 194, 263, 208);
		else if (k[i] == 29) Rectangle(hDC, 265, 194, 287, 208);
		else if (k[i] == 30) Rectangle(hDC, 49, 210, 71, 224);
		else if (k[i] == 31) Rectangle(hDC, 73, 210, 95, 224);
		else if (k[i] == 32) Rectangle(hDC, 97, 210, 119, 224);
		else if (k[i] == 33) Rectangle(hDC, 121, 210, 143, 224);
		else if (k[i] == 34) Rectangle(hDC, 145, 210, 167, 224);
		else if (k[i] == 35) Rectangle(hDC, 169, 210, 191, 224);
		else if (k[i] == 36) Rectangle(hDC, 193, 210, 215, 224);
		else if (k[i] == 37) Rectangle(hDC, 217, 210, 239, 224);
		else if (k[i] == 38) Rectangle(hDC, 241, 210, 263, 224);
		else if (k[i] == 39) Rectangle(hDC, 265, 210, 287, 224);
		else if (k[i] == 40) Rectangle(hDC, 49, 226, 71, 240);
		else if (k[i] == 41) Rectangle(hDC, 73, 226, 95, 240);
		else if (k[i] == 42) Rectangle(hDC, 97, 226, 119, 240);
		else if (k[i] == 43) Rectangle(hDC, 121, 226, 143, 240);
		else if (k[i] == 44) Rectangle(hDC, 145, 226, 167, 240);
		else if (k[i] == 45) Rectangle(hDC, 169, 226, 191, 240);
		else if (k[i] == 46) Rectangle(hDC, 193, 226, 215, 240);
		else if (k[i] == 47) Rectangle(hDC, 217, 226, 239, 240);
		else if (k[i] == 48) Rectangle(hDC, 241, 226, 263, 240);
		else if (k[i] == 49) Rectangle(hDC, 265, 226, 287, 240);
		else if (k[i] == 50) Rectangle(hDC, 49, 242, 71, 256);
		else if (k[i] == 51) Rectangle(hDC, 73, 242, 95, 256);
		else if (k[i] == 52) Rectangle(hDC, 97, 242, 119, 256);
		else if (k[i] == 53) Rectangle(hDC, 121, 242, 143, 256);
		else if (k[i] == 54) Rectangle(hDC, 145, 242, 167, 256);
		else if (k[i] == 55) Rectangle(hDC, 169, 242, 191, 256);
		else if (k[i] == 56) Rectangle(hDC, 193, 242, 215, 256);
		else if (k[i] == 57) Rectangle(hDC, 217, 242, 239, 256);
		else if (k[i] == 58) Rectangle(hDC, 241, 242, 263, 256);
		else if (k[i] == 59) Rectangle(hDC, 265, 242, 287, 256);
		else if (k[i] == 60) Rectangle(hDC, 49, 258, 71, 272);
		else if (k[i] == 61) Rectangle(hDC, 73, 258, 95, 272);
		else if (k[i] == 62) Rectangle(hDC, 97, 258, 119, 272);
		else if (k[i] == 63) Rectangle(hDC, 121, 258, 143, 272);
		else if (k[i] == 64) Rectangle(hDC, 145, 258, 167, 272);
		else if (k[i] == 65) Rectangle(hDC, 169, 258, 191, 272);
		else if (k[i] == 66) Rectangle(hDC, 193, 258, 215, 272);
		else if (k[i] == 67) Rectangle(hDC, 217, 258, 239, 272);
		else if (k[i] == 68) Rectangle(hDC, 241, 258, 263, 272);
		else if (k[i] == 69) Rectangle(hDC, 265, 258, 287, 272);
		else if (k[i] == 70) Rectangle(hDC, 49, 274, 71, 288);
		else if (k[i] == 71) Rectangle(hDC, 73, 274, 95, 288);
		else if (k[i] == 72) Rectangle(hDC, 97, 274, 119, 288);
		else if (k[i] == 73) Rectangle(hDC, 121, 274, 143, 288);
		else if (k[i] == 74) Rectangle(hDC, 145, 274, 167, 288);
		else if (k[i] == 75) Rectangle(hDC, 169, 274, 191, 288);
		else if (k[i] == 76) Rectangle(hDC, 193, 274, 215, 288);
		else if (k[i] == 77) Rectangle(hDC, 217, 274, 239, 288);
		else if (k[i] == 78) Rectangle(hDC, 241, 274, 263, 288);
		else if (k[i] == 79) Rectangle(hDC, 265, 274, 287, 288);
		else if (k[i] == 80) Rectangle(hDC, 49, 290, 71, 304);
		else if (k[i] == 81) Rectangle(hDC, 73, 290, 95, 304);
		else if (k[i] == 82) Rectangle(hDC, 97, 290, 119, 304);
		else if (k[i] == 83) Rectangle(hDC, 121, 290, 143, 304);
		else if (k[i] == 84) Rectangle(hDC, 145, 290, 167, 304);
		else if (k[i] == 85) Rectangle(hDC, 169, 290, 191, 304);
		else if (k[i] == 86) Rectangle(hDC, 193, 290, 215, 304);
		else if (k[i] == 87) Rectangle(hDC, 217, 290, 239, 304);
		else if (k[i] == 88) Rectangle(hDC, 241, 290, 263, 304);
		else if (k[i] == 89) Rectangle(hDC, 265, 290, 287, 304);
		else if (k[i] == 90) Rectangle(hDC, 49, 306, 71, 320);
		else if (k[i] == 91) Rectangle(hDC, 73, 306, 95, 320);
		else if (k[i] == 92) Rectangle(hDC, 97, 306, 119, 320);
		else if (k[i] == 93) Rectangle(hDC, 121, 306, 143, 320);
		else if (k[i] == 94) Rectangle(hDC, 145, 306, 167, 320);
		else if (k[i] == 95) Rectangle(hDC, 169, 306, 191, 320);
		else if (k[i] == 96) Rectangle(hDC, 193, 306, 215, 320);
		else if (k[i] == 97) Rectangle(hDC, 217, 306, 239, 320);
		else if (k[i] == 98) Rectangle(hDC, 241, 306, 263, 320);
		else if (k[i] == 99) Rectangle(hDC, 265, 306, 287, 320);
	}
}
void kresti(int* e)
{
	int i;
	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(225, 255, 0));
	SelectObject(hDC, Pen);
	for (i = 0; i < 20; i++)
	{
		if (e[i] == 0)
		{
			MoveToEx(hDC, 377, 162, NULL);
			LineTo(hDC, 399, 176);
			MoveToEx(hDC, 377, 176, NULL);
			LineTo(hDC, 399, 162);
		}
		else if (e[i] == 1)
		{
			MoveToEx(hDC, 401, 162, NULL);
			LineTo(hDC, 423, 176);
			MoveToEx(hDC, 401, 176, NULL);
			LineTo(hDC, 423, 162);
		}
		else if (e[i] == 2)
		{
			MoveToEx(hDC, 425, 162, NULL);
			LineTo(hDC, 447, 176);
			MoveToEx(hDC, 425, 176, NULL);
			LineTo(hDC, 447, 162);
		}
		else if (e[i] == 3)
		{
			MoveToEx(hDC, 449, 162, NULL);
			LineTo(hDC, 471, 176);
			MoveToEx(hDC, 449, 176, NULL);
			LineTo(hDC, 471, 162);
		}
		else if (e[i] == 4)
		{
			MoveToEx(hDC, 473, 162, NULL);
			LineTo(hDC, 495, 176);
			MoveToEx(hDC, 473, 176, NULL);
			LineTo(hDC, 495, 162);
		}
		else if (e[i] == 5)
		{
			MoveToEx(hDC, 497, 162, NULL);
			LineTo(hDC, 519, 176);
			MoveToEx(hDC, 497, 176, NULL);
			LineTo(hDC, 519, 162);
		}
		else if (e[i] == 6)
		{
			MoveToEx(hDC, 521, 162, NULL);
			LineTo(hDC, 543, 176);
			MoveToEx(hDC, 521, 176, NULL);
			LineTo(hDC, 543, 162);
		}
		else if (e[i] == 7)
		{
			MoveToEx(hDC, 545, 162, NULL);
			LineTo(hDC, 567, 176);
			MoveToEx(hDC, 545, 176, NULL);
			LineTo(hDC, 567, 162);
		}
		else if (e[i] == 8)
		{
			MoveToEx(hDC, 569, 162, NULL);
			LineTo(hDC, 591, 176);
			MoveToEx(hDC, 569, 176, NULL);
			LineTo(hDC, 591, 162);
		}
		else if (e[i] == 9)
		{
			MoveToEx(hDC, 593, 162, NULL);
			LineTo(hDC, 615, 176);
			MoveToEx(hDC, 593, 176, NULL);
			LineTo(hDC, 615, 162);
		}
		else if (e[i] == 10)
		{
			MoveToEx(hDC, 377, 178, NULL);
			LineTo(hDC, 399, 192);
			MoveToEx(hDC, 377, 192, NULL);
			LineTo(hDC, 399, 178);
		}
		else if (e[i] == 11)
		{
			MoveToEx(hDC, 401, 178, NULL);
			LineTo(hDC, 423, 192);
			MoveToEx(hDC, 401, 192, NULL);
			LineTo(hDC, 423, 178);
		}
		else if (e[i] == 12)
		{
			MoveToEx(hDC, 425, 178, NULL);
			LineTo(hDC, 447, 192);
			MoveToEx(hDC, 425, 192, NULL);
			LineTo(hDC, 447, 178);
		}
		else if (e[i] == 13)
		{
			MoveToEx(hDC, 449, 178, NULL);
			LineTo(hDC, 471, 192);
			MoveToEx(hDC, 449, 192, NULL);
			LineTo(hDC, 471, 178);
		}
		else if (e[i] == 14)
		{
			MoveToEx(hDC, 473, 178, NULL);
			LineTo(hDC, 495, 192);
			MoveToEx(hDC, 473, 192, NULL);
			LineTo(hDC, 495, 178);
		}
		else if (e[i] == 15)
		{
			MoveToEx(hDC, 497, 178, NULL);
			LineTo(hDC, 519, 192);
			MoveToEx(hDC, 497, 192, NULL);
			LineTo(hDC, 519, 178);
		}
		else if (e[i] == 16)
		{
			MoveToEx(hDC, 521, 178, NULL);
			LineTo(hDC, 543, 192);
			MoveToEx(hDC, 521, 192, NULL);
			LineTo(hDC, 543, 178);
		}
		else if (e[i] == 17)
		{
			MoveToEx(hDC, 545, 178, NULL);
			LineTo(hDC, 567, 192);
			MoveToEx(hDC, 545, 192, NULL);
			LineTo(hDC, 567, 178);
		}
		else if (e[i] == 18)
		{
			MoveToEx(hDC, 569, 178, NULL);
			LineTo(hDC, 591, 192);
			MoveToEx(hDC, 569, 192, NULL);
			LineTo(hDC, 591, 178);
		}
		else if (e[i] == 19)
		{
			MoveToEx(hDC, 593, 178, NULL);
			LineTo(hDC, 615, 192);
			MoveToEx(hDC, 593, 192, NULL);
			LineTo(hDC, 615, 178);
		}
		else if (e[i] == 20)
		{
			MoveToEx(hDC, 377, 194, NULL);
			LineTo(hDC, 399, 208);
			MoveToEx(hDC, 377, 208, NULL);
			LineTo(hDC, 399, 194);
		}
		else if (e[i] == 21)
		{
			MoveToEx(hDC, 401, 194, NULL);
			LineTo(hDC, 423, 208);
			MoveToEx(hDC, 401, 208, NULL);
			LineTo(hDC, 423, 194);
		}
		else if (e[i] == 22)
		{
			MoveToEx(hDC, 425, 194, NULL);
			LineTo(hDC, 447, 208);
			MoveToEx(hDC, 425, 208, NULL);
			LineTo(hDC, 447, 194);
		}
		else if (e[i] == 23)
		{
			MoveToEx(hDC, 449, 194, NULL);
			LineTo(hDC, 471, 208);
			MoveToEx(hDC, 449, 208, NULL);
			LineTo(hDC, 471, 194);
		}
		else if (e[i] == 24)
		{
			MoveToEx(hDC, 473, 194, NULL);
			LineTo(hDC, 495, 208);
			MoveToEx(hDC, 473, 208, NULL);
			LineTo(hDC, 495, 194);
		}
		else if (e[i] == 25)
		{
			MoveToEx(hDC, 497, 194, NULL);
			LineTo(hDC, 519, 208);
			MoveToEx(hDC, 497, 208, NULL);
			LineTo(hDC, 519, 194);
		}
		else if (e[i] == 26)
		{
			MoveToEx(hDC, 521, 194, NULL);
			LineTo(hDC, 543, 208);
			MoveToEx(hDC, 521, 208, NULL);
			LineTo(hDC, 543, 194);
		}
		else if (e[i] == 27)
		{
			MoveToEx(hDC, 545, 194, NULL);
			LineTo(hDC, 567, 208);
			MoveToEx(hDC, 545, 208, NULL);
			LineTo(hDC, 567, 194);
		}
		else if (e[i] == 28)
		{
			MoveToEx(hDC, 569, 194, NULL);
			LineTo(hDC, 591, 208);
			MoveToEx(hDC, 569, 208, NULL);
			LineTo(hDC, 591, 194);
		}
		else if (e[i] == 29)
		{
			MoveToEx(hDC, 593, 194, NULL);
			LineTo(hDC, 615, 208);
			MoveToEx(hDC, 593, 208, NULL);
			LineTo(hDC, 615, 194);
		}
		else if (e[i] == 30)
		{
			MoveToEx(hDC, 377, 210, NULL);
			LineTo(hDC, 399, 224);
			MoveToEx(hDC, 377, 224, NULL);
			LineTo(hDC, 399, 210);
		}
		else if (e[i] == 31)
		{
			MoveToEx(hDC, 401, 210, NULL);
			LineTo(hDC, 423, 224);
			MoveToEx(hDC, 401, 224, NULL);
			LineTo(hDC, 423, 210);
		}
		else if (e[i] == 32)
		{
			MoveToEx(hDC, 425, 210, NULL);
			LineTo(hDC, 447, 224);
			MoveToEx(hDC, 425, 224, NULL);
			LineTo(hDC, 447, 210);
		}
		else if (e[i] == 33)
		{
			MoveToEx(hDC, 449, 210, NULL);
			LineTo(hDC, 471, 224);
			MoveToEx(hDC, 449, 224, NULL);
			LineTo(hDC, 471, 210);
		}
		else if (e[i] == 34)
		{
			MoveToEx(hDC, 473, 210, NULL);
			LineTo(hDC, 495, 224);
			MoveToEx(hDC, 473, 224, NULL);
			LineTo(hDC, 495, 210);
		}
		else if (e[i] == 35)
		{
			MoveToEx(hDC, 497, 210, NULL);
			LineTo(hDC, 519, 224);
			MoveToEx(hDC, 497, 224, NULL);
			LineTo(hDC, 519, 210);
		}
		else if (e[i] == 36)
		{
			MoveToEx(hDC, 521, 210, NULL);
			LineTo(hDC, 543, 224);
			MoveToEx(hDC, 521, 224, NULL);
			LineTo(hDC, 543, 210);
		}
		else if (e[i] == 37)
		{
			MoveToEx(hDC, 545, 210, NULL);
			LineTo(hDC, 567, 224);
			MoveToEx(hDC, 545, 224, NULL);
			LineTo(hDC, 567, 210);
		}
		else if (e[i] == 38)
		{
			MoveToEx(hDC, 569, 210, NULL);
			LineTo(hDC, 591, 224);
			MoveToEx(hDC, 569, 224, NULL);
			LineTo(hDC, 591, 210);
		}
		else if (e[i] == 39)
		{
			MoveToEx(hDC, 593, 210, NULL);
			LineTo(hDC, 615, 224);
			MoveToEx(hDC, 593, 224, NULL);
			LineTo(hDC, 615, 210);
		}
		else if (e[i] == 40)
		{
			MoveToEx(hDC, 377, 226, NULL);
			LineTo(hDC, 399, 240);
			MoveToEx(hDC, 377, 240, NULL);
			LineTo(hDC, 399, 226);
		}
		else if (e[i] == 41)
		{
			MoveToEx(hDC, 401, 226, NULL);
			LineTo(hDC, 423, 240);
			MoveToEx(hDC, 401, 240, NULL);
			LineTo(hDC, 423, 226);
		}
		else if (e[i] == 42)
		{
			MoveToEx(hDC, 425, 226, NULL);
			LineTo(hDC, 447, 240);
			MoveToEx(hDC, 425, 240, NULL);
			LineTo(hDC, 447, 226);
		}
		else if (e[i] == 43)
		{
			MoveToEx(hDC, 449, 226, NULL);
			LineTo(hDC, 471, 240);
			MoveToEx(hDC, 449, 240, NULL);
			LineTo(hDC, 471, 226);
		}
		else if (e[i] == 44)
		{
			MoveToEx(hDC, 473, 226, NULL);
			LineTo(hDC, 495, 240);
			MoveToEx(hDC, 473, 240, NULL);
			LineTo(hDC, 495, 226);
		}
		else if (e[i] == 45)
		{
			MoveToEx(hDC, 497, 226, NULL);
			LineTo(hDC, 519, 240);
			MoveToEx(hDC, 497, 240, NULL);
			LineTo(hDC, 519, 226);
		}
		else if (e[i] == 46)
		{
			MoveToEx(hDC, 521, 226, NULL);
			LineTo(hDC, 543, 240);
			MoveToEx(hDC, 521, 240, NULL);
			LineTo(hDC, 543, 226);
		}
		else if (e[i] == 47)
		{
			MoveToEx(hDC, 545, 226, NULL);
			LineTo(hDC, 567, 240);
			MoveToEx(hDC, 545, 240, NULL);
			LineTo(hDC, 567, 226);
		}
		else if (e[i] == 48)
		{
			MoveToEx(hDC, 569, 226, NULL);
			LineTo(hDC, 591, 240);
			MoveToEx(hDC, 569, 240, NULL);
			LineTo(hDC, 591, 226);
		}
		else if (e[i] == 49)
		{
			MoveToEx(hDC, 593, 226, NULL);
			LineTo(hDC, 615, 240);
			MoveToEx(hDC, 593, 240, NULL);
			LineTo(hDC, 615, 226);
		}
		else if (e[i] == 50)
		{
			MoveToEx(hDC, 377, 242, NULL);
			LineTo(hDC, 399, 256);
			MoveToEx(hDC, 377, 256, NULL);
			LineTo(hDC, 399, 242);
		}
		else if (e[i] == 51)
		{
			MoveToEx(hDC, 401, 242, NULL);
			LineTo(hDC, 423, 256);
			MoveToEx(hDC, 401, 256, NULL);
			LineTo(hDC, 423, 242);
		}
		else if (e[i] == 52)
		{
			MoveToEx(hDC, 425, 242, NULL);
			LineTo(hDC, 447, 256);
			MoveToEx(hDC, 425, 256, NULL);
			LineTo(hDC, 447, 242);
		}
		else if (e[i] == 53)
		{
			MoveToEx(hDC, 449, 242, NULL);
			LineTo(hDC, 471, 256);
			MoveToEx(hDC, 449, 256, NULL);
			LineTo(hDC, 471, 242);
		}
		else if (e[i] == 54)
		{
			MoveToEx(hDC, 473, 242, NULL);
			LineTo(hDC, 495, 256);
			MoveToEx(hDC, 473, 256, NULL);
			LineTo(hDC, 495, 242);
		}
		else if (e[i] == 55)
		{
			MoveToEx(hDC, 497, 242, NULL);
			LineTo(hDC, 519, 256);
			MoveToEx(hDC, 497, 256, NULL);
			LineTo(hDC, 519, 242);
		}
		else if (e[i] == 56)
		{
			MoveToEx(hDC, 521, 242, NULL);
			LineTo(hDC, 543, 256);
			MoveToEx(hDC, 521, 256, NULL);
			LineTo(hDC, 543, 242);
		}
		else if (e[i] == 57)
		{
			MoveToEx(hDC, 545, 242, NULL);
			LineTo(hDC, 567, 256);
			MoveToEx(hDC, 545, 256, NULL);
			LineTo(hDC, 567, 242);
		}
		else if (e[i] == 58)
		{
			MoveToEx(hDC, 569, 242, NULL);
			LineTo(hDC, 591, 256);
			MoveToEx(hDC, 569, 256, NULL);
			LineTo(hDC, 591, 242);
		}
		else if (e[i] == 59)
		{
			MoveToEx(hDC, 593, 242, NULL);
			LineTo(hDC, 615, 256);
			MoveToEx(hDC, 593, 256, NULL);
			LineTo(hDC, 615, 242);
		}
		else if (e[i] == 60)
		{
			MoveToEx(hDC, 377, 258, NULL);
			LineTo(hDC, 399, 272);
			MoveToEx(hDC, 377, 272, NULL);
			LineTo(hDC, 399, 258);
		}
		else if (e[i] == 61)
		{
			MoveToEx(hDC, 401, 258, NULL);
			LineTo(hDC, 423, 272);
			MoveToEx(hDC, 401, 272, NULL);
			LineTo(hDC, 423, 258);
		}
		else if (e[i] == 62)
		{
			MoveToEx(hDC, 425, 258, NULL);
			LineTo(hDC, 447, 272);
			MoveToEx(hDC, 425, 272, NULL);
			LineTo(hDC, 447, 258);
		}
		else if (e[i] == 63)
		{
			MoveToEx(hDC, 449, 258, NULL);
			LineTo(hDC, 471, 272);
			MoveToEx(hDC, 449, 272, NULL);
			LineTo(hDC, 471, 258);
		}
		else if (e[i] == 64)
		{
			MoveToEx(hDC, 473, 258, NULL);
			LineTo(hDC, 495, 272);
			MoveToEx(hDC, 473, 272, NULL);
			LineTo(hDC, 495, 258);
		}
		else if (e[i] == 65)
		{
			MoveToEx(hDC, 497, 258, NULL);
			LineTo(hDC, 519, 272);
			MoveToEx(hDC, 497, 272, NULL);
			LineTo(hDC, 519, 258);
		}
		else if (e[i] == 66)
		{
			MoveToEx(hDC, 521, 258, NULL);
			LineTo(hDC, 543, 272);
			MoveToEx(hDC, 521, 272, NULL);
			LineTo(hDC, 543, 258);
		}
		else if (e[i] == 67)
		{
			MoveToEx(hDC, 545, 258, NULL);
			LineTo(hDC, 567, 272);
			MoveToEx(hDC, 545, 272, NULL);
			LineTo(hDC, 567, 258);
		}
		else if (e[i] == 68)
		{
			MoveToEx(hDC, 569, 258, NULL);
			LineTo(hDC, 591, 272);
			MoveToEx(hDC, 569, 272, NULL);
			LineTo(hDC, 591, 258);
		}
		else if (e[i] == 69)
		{
			MoveToEx(hDC, 593, 258, NULL);
			LineTo(hDC, 615, 272);
			MoveToEx(hDC, 593, 272, NULL);
			LineTo(hDC, 615, 258);
		}
		else if (e[i] == 70)
		{
			MoveToEx(hDC, 377, 274, NULL);
			LineTo(hDC, 399, 288);
			MoveToEx(hDC, 377, 288, NULL);
			LineTo(hDC, 399, 274);
		}
		else if (e[i] == 71)
		{
			MoveToEx(hDC, 401, 274, NULL);
			LineTo(hDC, 423, 288);
			MoveToEx(hDC, 401, 288, NULL);
			LineTo(hDC, 423, 274);
		}
		else if (e[i] == 72)
		{
			MoveToEx(hDC, 425, 274, NULL);
			LineTo(hDC, 447, 288);
			MoveToEx(hDC, 425, 288, NULL);
			LineTo(hDC, 447, 274);
		}
		else if (e[i] == 73)
		{
			MoveToEx(hDC, 449, 274, NULL);
			LineTo(hDC, 471, 288);
			MoveToEx(hDC, 449, 288, NULL);
			LineTo(hDC, 471, 274);
		}
		else if (e[i] == 74)
		{
			MoveToEx(hDC, 473, 274, NULL);
			LineTo(hDC, 495, 288);
			MoveToEx(hDC, 473, 288, NULL);
			LineTo(hDC, 495, 274);
		}
		else if (e[i] == 75)
		{
			MoveToEx(hDC, 497, 274, NULL);
			LineTo(hDC, 519, 288);
			MoveToEx(hDC, 497, 288, NULL);
			LineTo(hDC, 519, 274);
		}
		else if (e[i] == 76)
		{
			MoveToEx(hDC, 521, 274, NULL);
			LineTo(hDC, 543, 288);
			MoveToEx(hDC, 521, 288, NULL);
			LineTo(hDC, 543, 274);
		}
		else if (e[i] == 77)
		{
			MoveToEx(hDC, 545, 274, NULL);
			LineTo(hDC, 567, 288);
			MoveToEx(hDC, 545, 288, NULL);
			LineTo(hDC, 567, 274);
		}
		else if (e[i] == 78)
		{
			MoveToEx(hDC, 569, 274, NULL);
			LineTo(hDC, 591, 288);
			MoveToEx(hDC, 569, 288, NULL);
			LineTo(hDC, 591, 274);
		}
		else if (e[i] == 79)
		{
			MoveToEx(hDC, 593, 274, NULL);
			LineTo(hDC, 615, 288);
			MoveToEx(hDC, 593, 288, NULL);
			LineTo(hDC, 615, 274);
		}
		else if (e[i] == 80)
		{
			MoveToEx(hDC, 377, 290, NULL);
			LineTo(hDC, 399, 304);
			MoveToEx(hDC, 377, 304, NULL);
			LineTo(hDC, 399, 290);
		}
		else if (e[i] == 81)
		{
			MoveToEx(hDC, 401, 290, NULL);
			LineTo(hDC, 423, 304);
			MoveToEx(hDC, 401, 304, NULL);
			LineTo(hDC, 423, 290);
		}
		else if (e[i] == 82)
		{
			MoveToEx(hDC, 425, 290, NULL);
			LineTo(hDC, 447, 304);
			MoveToEx(hDC, 425, 304, NULL);
			LineTo(hDC, 447, 290);
		}
		else if (e[i] == 83)
		{
			MoveToEx(hDC, 449, 290, NULL);
			LineTo(hDC, 471, 304);
			MoveToEx(hDC, 449, 304, NULL);
			LineTo(hDC, 471, 290);
		}
		else if (e[i] == 84)
		{
			MoveToEx(hDC, 473, 290, NULL);
			LineTo(hDC, 495, 304);
			MoveToEx(hDC, 473, 304, NULL);
			LineTo(hDC, 495, 290);
		}
		else if (e[i] == 85)
		{
			MoveToEx(hDC, 497, 290, NULL);
			LineTo(hDC, 519, 304);
			MoveToEx(hDC, 497, 304, NULL);
			LineTo(hDC, 519, 290);
		}
		else if (e[i] == 86)
		{
			MoveToEx(hDC, 521, 290, NULL);
			LineTo(hDC, 543, 304);
			MoveToEx(hDC, 521, 304, NULL);
			LineTo(hDC, 543, 290);
		}
		else if (e[i] == 87)
		{
			MoveToEx(hDC, 545, 290, NULL);
			LineTo(hDC, 567, 304);
			MoveToEx(hDC, 545, 304, NULL);
			LineTo(hDC, 567, 290);
		}
		else if (e[i] == 88)
		{
			MoveToEx(hDC, 569, 290, NULL);
			LineTo(hDC, 591, 304);
			MoveToEx(hDC, 569, 304, NULL);
			LineTo(hDC, 591, 290);
		}
		else if (e[i] == 89)
		{
			MoveToEx(hDC, 593, 290, NULL);
			LineTo(hDC, 615, 304);
			MoveToEx(hDC, 593, 304, NULL);
			LineTo(hDC, 615, 290);
		}
		else if (e[i] == 90)
		{
			MoveToEx(hDC, 377, 306, NULL);
			LineTo(hDC, 399, 320);
			MoveToEx(hDC, 377, 320, NULL);
			LineTo(hDC, 399, 306);
		}
		else if (e[i] == 91)
		{
			MoveToEx(hDC, 401, 306, NULL);
			LineTo(hDC, 423, 320);
			MoveToEx(hDC, 401, 320, NULL);
			LineTo(hDC, 423, 306);
		}
		else if (e[i] == 92)
		{
			MoveToEx(hDC, 425, 306, NULL);
			LineTo(hDC, 447, 320);
			MoveToEx(hDC, 425, 320, NULL);
			LineTo(hDC, 447, 306);
		}
		else if (e[i] == 93)
		{
			MoveToEx(hDC, 449, 306, NULL);
			LineTo(hDC, 471, 320);
			MoveToEx(hDC, 449, 320, NULL);
			LineTo(hDC, 471, 306);
		}
		else if (e[i] == 94)
		{
			MoveToEx(hDC, 473, 306, NULL);
			LineTo(hDC, 495, 320);
			MoveToEx(hDC, 473, 320, NULL);
			LineTo(hDC, 495, 306);
		}
		else if (e[i] == 95)
		{
			MoveToEx(hDC, 497, 306, NULL);
			LineTo(hDC, 519, 320);
			MoveToEx(hDC, 497, 320, NULL);
			LineTo(hDC, 519, 306);
		}
		else if (e[i] == 96)
		{
			MoveToEx(hDC, 521, 306, NULL);
			LineTo(hDC, 543, 320);
			MoveToEx(hDC, 521, 320, NULL);
			LineTo(hDC, 543, 306);
		}
		else if (e[i] == 97)
		{
			MoveToEx(hDC, 545, 306, NULL);
			LineTo(hDC, 567, 320);
			MoveToEx(hDC, 545, 320, NULL);
			LineTo(hDC, 567, 306);
		}
		else if (e[i] == 98)
		{
			MoveToEx(hDC, 569, 306, NULL);
			LineTo(hDC, 591, 320);
			MoveToEx(hDC, 569, 320, NULL);
			LineTo(hDC, 591, 306);
		}
		else if (e[i] == 99)
		{
			MoveToEx(hDC, 593, 306, NULL);
			LineTo(hDC, 615, 320);
			MoveToEx(hDC, 593, 320, NULL);
			LineTo(hDC, 615, 306);
		}
	}
}
void kresti1(int* e)
{
	int i;
	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(225, 255, 0));
	SelectObject(hDC, Pen);
	for (i = 0; i < 20; i++)
	{
		if (e[i] == 0)
		{
			MoveToEx(hDC, 49, 162, NULL);
			LineTo(hDC, 71, 176);
			MoveToEx(hDC, 49, 176, NULL);
			LineTo(hDC, 71, 162);
		}
		else if (e[i] == 1)
		{
			MoveToEx(hDC, 73, 162, NULL);
			LineTo(hDC, 95, 176);
			MoveToEx(hDC, 73, 176, NULL);
			LineTo(hDC, 95, 162);
		}
		else if (e[i] == 2)
		{
			MoveToEx(hDC, 97, 162, NULL);
			LineTo(hDC, 119, 176);
			MoveToEx(hDC, 97, 176, NULL);
			LineTo(hDC, 119, 162);
		}
		else if (e[i] == 3)
		{
			MoveToEx(hDC, 121, 162, NULL);
			LineTo(hDC, 143, 176);
			MoveToEx(hDC, 121, 176, NULL);
			LineTo(hDC, 143, 162);
		}
		else if (e[i] == 4)
		{
			MoveToEx(hDC, 145, 162, NULL);
			LineTo(hDC, 167, 176);
			MoveToEx(hDC, 145, 176, NULL);
			LineTo(hDC, 167, 162);
		}
		else if (e[i] == 5)
		{
			MoveToEx(hDC, 169, 162, NULL);
			LineTo(hDC, 191, 176);
			MoveToEx(hDC, 169, 176, NULL);
			LineTo(hDC, 191, 162);
		}
		else if (e[i] == 6)
		{
			MoveToEx(hDC, 193, 162, NULL);
			LineTo(hDC, 215, 176);
			MoveToEx(hDC, 193, 176, NULL);
			LineTo(hDC, 215, 162);
		}
		else if (e[i] == 7)
		{
			MoveToEx(hDC, 217, 162, NULL);
			LineTo(hDC, 239, 176);
			MoveToEx(hDC, 217, 176, NULL);
			LineTo(hDC, 239, 162);
		}
		else if (e[i] == 8)
		{
			MoveToEx(hDC, 241, 162, NULL);
			LineTo(hDC, 263, 176);
			MoveToEx(hDC, 241, 176, NULL);
			LineTo(hDC, 263, 162);
		}
		else if (e[i] == 9)
		{
			MoveToEx(hDC, 265, 162, NULL);
			LineTo(hDC, 287, 176);
			MoveToEx(hDC, 265, 176, NULL);
			LineTo(hDC, 287, 162);
		}
		else if (e[i] == 10)
		{
			MoveToEx(hDC, 49, 178, NULL);
			LineTo(hDC, 71, 192);
			MoveToEx(hDC, 49, 192, NULL);
			LineTo(hDC, 71, 178);
		}
		else if (e[i] == 11)
		{
			MoveToEx(hDC, 73, 178, NULL);
			LineTo(hDC, 95, 192);
			MoveToEx(hDC, 73, 192, NULL);
			LineTo(hDC, 95, 178);
		}
		else if (e[i] == 12)
		{
			MoveToEx(hDC, 97, 178, NULL);
			LineTo(hDC, 119, 192);
			MoveToEx(hDC, 97, 192, NULL);
			LineTo(hDC, 119, 178);
		}
		else if (e[i] == 13)
		{
			MoveToEx(hDC, 121, 178, NULL);
			LineTo(hDC, 143, 192);
			MoveToEx(hDC, 121, 192, NULL);
			LineTo(hDC, 143, 178);
		}
		else if (e[i] == 14)
		{
			MoveToEx(hDC, 145, 178, NULL);
			LineTo(hDC, 167, 192);
			MoveToEx(hDC, 145, 192, NULL);
			LineTo(hDC, 167, 178);
		}
		else if (e[i] == 15)
		{
			MoveToEx(hDC, 169, 178, NULL);
			LineTo(hDC, 191, 192);
			MoveToEx(hDC, 169, 192, NULL);
			LineTo(hDC, 191, 178);
		}
		else if (e[i] == 16)
		{
			MoveToEx(hDC, 193, 178, NULL);
			LineTo(hDC, 215, 192);
			MoveToEx(hDC, 193, 192, NULL);
			LineTo(hDC, 215, 178);
		}
		else if (e[i] == 17)
		{
			MoveToEx(hDC, 217, 178, NULL);
			LineTo(hDC, 239, 192);
			MoveToEx(hDC, 217, 192, NULL);
			LineTo(hDC, 239, 178);
		}
		else if (e[i] == 18)
		{
			MoveToEx(hDC, 241, 178, NULL);
			LineTo(hDC, 263, 192);
			MoveToEx(hDC, 241, 192, NULL);
			LineTo(hDC, 263, 178);
		}
		else if (e[i] == 19)
		{
			MoveToEx(hDC, 265, 178, NULL);
			LineTo(hDC, 287, 192);
			MoveToEx(hDC, 265, 192, NULL);
			LineTo(hDC, 287, 178);
		}
		else if (e[i] == 20)
		{
			MoveToEx(hDC, 49, 194, NULL);
			LineTo(hDC, 71, 208);
			MoveToEx(hDC, 49, 208, NULL);
			LineTo(hDC, 71, 194);
		}
		else if (e[i] == 21)
		{
			MoveToEx(hDC, 73, 194, NULL);
			LineTo(hDC, 95, 208);
			MoveToEx(hDC, 73, 208, NULL);
			LineTo(hDC, 95, 194);
		}
		else if (e[i] == 22)
		{
			MoveToEx(hDC, 97, 194, NULL);
			LineTo(hDC, 119, 208);
			MoveToEx(hDC, 97, 208, NULL);
			LineTo(hDC, 119, 194);
		}
		else if (e[i] == 23)
		{
			MoveToEx(hDC, 121, 194, NULL);
			LineTo(hDC, 143, 208);
			MoveToEx(hDC, 121, 208, NULL);
			LineTo(hDC, 143, 194);
		}
		else if (e[i] == 24)
		{
			MoveToEx(hDC, 145, 194, NULL);
			LineTo(hDC, 167, 208);
			MoveToEx(hDC, 145, 208, NULL);
			LineTo(hDC, 167, 194);
		}
		else if (e[i] == 25)
		{
			MoveToEx(hDC, 169, 194, NULL);
			LineTo(hDC, 191, 208);
			MoveToEx(hDC, 169, 208, NULL);
			LineTo(hDC, 191, 194);
		}
		else if (e[i] == 26)
		{
			MoveToEx(hDC, 193, 194, NULL);
			LineTo(hDC, 215, 208);
			MoveToEx(hDC, 193, 208, NULL);
			LineTo(hDC, 215, 194);
		}
		else if (e[i] == 27)
		{
			MoveToEx(hDC, 217, 194, NULL);
			LineTo(hDC, 239, 208);
			MoveToEx(hDC, 217, 208, NULL);
			LineTo(hDC, 239, 194);
		}
		else if (e[i] == 28)
		{
			MoveToEx(hDC, 241, 194, NULL);
			LineTo(hDC, 263, 208);
			MoveToEx(hDC, 241, 208, NULL);
			LineTo(hDC, 263, 194);
		}
		else if (e[i] == 29)
		{
			MoveToEx(hDC, 265, 194, NULL);
			LineTo(hDC, 287, 208);
			MoveToEx(hDC, 265, 208, NULL);
			LineTo(hDC, 287, 194);
		}
		else if (e[i] == 30)
		{
			MoveToEx(hDC, 49, 210, NULL);
			LineTo(hDC, 71, 224);
			MoveToEx(hDC, 49, 224, NULL);
			LineTo(hDC, 71, 210);
		}
		else if (e[i] == 31)
		{
			MoveToEx(hDC, 73, 210, NULL);
			LineTo(hDC, 95, 224);
			MoveToEx(hDC, 73, 224, NULL);
			LineTo(hDC, 95, 210);
		}
		else if (e[i] == 32)
		{
			MoveToEx(hDC, 97, 210, NULL);
			LineTo(hDC, 119, 224);
			MoveToEx(hDC, 97, 224, NULL);
			LineTo(hDC, 119, 210);
		}
		else if (e[i] == 33)
		{
			MoveToEx(hDC, 121, 210, NULL);
			LineTo(hDC, 143, 224);
			MoveToEx(hDC, 121, 224, NULL);
			LineTo(hDC, 143, 210);
		}
		else if (e[i] == 34)
		{
			MoveToEx(hDC, 145, 210, NULL);
			LineTo(hDC, 167, 224);
			MoveToEx(hDC, 145, 224, NULL);
			LineTo(hDC, 167, 210);
		}
		else if (e[i] == 35)
		{
			MoveToEx(hDC, 169, 210, NULL);
			LineTo(hDC, 191, 224);
			MoveToEx(hDC, 169, 224, NULL);
			LineTo(hDC, 191, 210);
		}
		else if (e[i] == 36)
		{
			MoveToEx(hDC, 193, 210, NULL);
			LineTo(hDC, 215, 224);
			MoveToEx(hDC, 193, 224, NULL);
			LineTo(hDC, 215, 210);
		}
		else if (e[i] == 37)
		{
			MoveToEx(hDC, 217, 210, NULL);
			LineTo(hDC, 239, 224);
			MoveToEx(hDC, 217, 224, NULL);
			LineTo(hDC, 239, 210);
		}
		else if (e[i] == 38)
		{
			MoveToEx(hDC, 241, 210, NULL);
			LineTo(hDC, 263, 224);
			MoveToEx(hDC, 241, 224, NULL);
			LineTo(hDC, 263, 210);
		}
		else if (e[i] == 39)
		{
			MoveToEx(hDC, 265, 210, NULL);
			LineTo(hDC, 287, 224);
			MoveToEx(hDC, 265, 224, NULL);
			LineTo(hDC, 287, 210);
		}
		else if (e[i] == 40)
		{
			MoveToEx(hDC, 49, 226, NULL);
			LineTo(hDC, 71, 240);
			MoveToEx(hDC, 49, 240, NULL);
			LineTo(hDC, 71, 226);
		}
		else if (e[i] == 41)
		{
			MoveToEx(hDC, 73, 226, NULL);
			LineTo(hDC, 95, 240);
			MoveToEx(hDC, 73, 240, NULL);
			LineTo(hDC, 95, 226);
		}
		else if (e[i] == 42)
		{
			MoveToEx(hDC, 97, 226, NULL);
			LineTo(hDC, 119, 240);
			MoveToEx(hDC, 97, 240, NULL);
			LineTo(hDC, 119, 226);
		}
		else if (e[i] == 43)
		{
			MoveToEx(hDC, 121, 226, NULL);
			LineTo(hDC, 143, 240);
			MoveToEx(hDC, 121, 240, NULL);
			LineTo(hDC, 143, 226);
		}
		else if (e[i] == 44)
		{
			MoveToEx(hDC, 145, 226, NULL);
			LineTo(hDC, 167, 240);
			MoveToEx(hDC, 145, 240, NULL);
			LineTo(hDC, 167, 226);
		}
		else if (e[i] == 45)
		{
			MoveToEx(hDC, 169, 226, NULL);
			LineTo(hDC, 191, 240);
			MoveToEx(hDC, 169, 240, NULL);
			LineTo(hDC, 191, 226);
		}
		else if (e[i] == 46)
		{
			MoveToEx(hDC, 193, 226, NULL);
			LineTo(hDC, 215, 240);
			MoveToEx(hDC, 193, 240, NULL);
			LineTo(hDC, 215, 226);
		}
		else if (e[i] == 47)
		{
			MoveToEx(hDC, 217, 226, NULL);
			LineTo(hDC, 239, 240);
			MoveToEx(hDC, 217, 240, NULL);
			LineTo(hDC, 239, 226);
		}
		else if (e[i] == 48)
		{
			MoveToEx(hDC, 241, 226, NULL);
			LineTo(hDC, 263, 240);
			MoveToEx(hDC, 241, 240, NULL);
			LineTo(hDC, 263, 226);
		}
		else if (e[i] == 49)
		{
			MoveToEx(hDC, 265, 226, NULL);
			LineTo(hDC, 287, 240);
			MoveToEx(hDC, 265, 240, NULL);
			LineTo(hDC, 287, 226);
		}
		else if (e[i] == 50)
		{
			MoveToEx(hDC, 49, 242, NULL);
			LineTo(hDC, 71, 256);
			MoveToEx(hDC, 49, 256, NULL);
			LineTo(hDC, 71, 242);
		}
		else if (e[i] == 51)
		{
			MoveToEx(hDC, 73, 242, NULL);
			LineTo(hDC, 95, 256);
			MoveToEx(hDC, 73, 256, NULL);
			LineTo(hDC, 95, 242);
		}
		else if (e[i] == 52)
		{
			MoveToEx(hDC, 97, 242, NULL);
			LineTo(hDC, 119, 256);
			MoveToEx(hDC, 97, 256, NULL);
			LineTo(hDC, 119, 242);
		}
		else if (e[i] == 53)
		{
			MoveToEx(hDC, 121, 242, NULL);
			LineTo(hDC, 143, 256);
			MoveToEx(hDC, 121, 256, NULL);
			LineTo(hDC, 143, 242);
		}
		else if (e[i] == 54)
		{
			MoveToEx(hDC, 145, 242, NULL);
			LineTo(hDC, 167, 256);
			MoveToEx(hDC, 145, 256, NULL);
			LineTo(hDC, 167, 242);
		}
		else if (e[i] == 55)
		{
			MoveToEx(hDC, 169, 242, NULL);
			LineTo(hDC, 191, 256);
			MoveToEx(hDC, 169, 256, NULL);
			LineTo(hDC, 191, 242);
		}
		else if (e[i] == 56)
		{
			MoveToEx(hDC, 193, 242, NULL);
			LineTo(hDC, 215, 256);
			MoveToEx(hDC, 193, 256, NULL);
			LineTo(hDC, 215, 242);
		}
		else if (e[i] == 57)
		{
			MoveToEx(hDC, 217, 242, NULL);
			LineTo(hDC, 239, 256);
			MoveToEx(hDC, 217, 256, NULL);
			LineTo(hDC, 239, 242);
		}
		else if (e[i] == 58)
		{
			MoveToEx(hDC, 241, 242, NULL);
			LineTo(hDC, 263, 256);
			MoveToEx(hDC, 241, 256, NULL);
			LineTo(hDC, 263, 242);
		}
		else if (e[i] == 59)
		{
			MoveToEx(hDC, 265, 242, NULL);
			LineTo(hDC, 287, 256);
			MoveToEx(hDC, 265, 256, NULL);
			LineTo(hDC, 287, 242);
		}
		else if (e[i] == 60)
		{
			MoveToEx(hDC, 49, 258, NULL);
			LineTo(hDC, 71, 272);
			MoveToEx(hDC, 49, 272, NULL);
			LineTo(hDC, 71, 258);
		}
		else if (e[i] == 61)
		{
			MoveToEx(hDC, 73, 258, NULL);
			LineTo(hDC, 95, 272);
			MoveToEx(hDC, 73, 272, NULL);
			LineTo(hDC, 95, 258);
		}
		else if (e[i] == 62)
		{
			MoveToEx(hDC, 97, 258, NULL);
			LineTo(hDC, 119, 272);
			MoveToEx(hDC, 97, 272, NULL);
			LineTo(hDC, 119, 258);
		}
		else if (e[i] == 63)
		{
			MoveToEx(hDC, 121, 258, NULL);
			LineTo(hDC, 143, 272);
			MoveToEx(hDC, 121, 272, NULL);
			LineTo(hDC, 143, 258);
		}
		else if (e[i] == 64)
		{
			MoveToEx(hDC, 145, 258, NULL);
			LineTo(hDC, 167, 272);
			MoveToEx(hDC, 145, 272, NULL);
			LineTo(hDC, 167, 258);
		}
		else if (e[i] == 65)
		{
			MoveToEx(hDC, 169, 258, NULL);
			LineTo(hDC, 191, 272);
			MoveToEx(hDC, 169, 272, NULL);
			LineTo(hDC, 191, 258);
		}
		else if (e[i] == 66)
		{
			MoveToEx(hDC, 193, 258, NULL);
			LineTo(hDC, 215, 272);
			MoveToEx(hDC, 193, 272, NULL);
			LineTo(hDC, 215, 258);
		}
		else if (e[i] == 67)
		{
			MoveToEx(hDC, 217, 258, NULL);
			LineTo(hDC, 239, 272);
			MoveToEx(hDC, 217, 272, NULL);
			LineTo(hDC, 239, 258);
		}
		else if (e[i] == 68)
		{
			MoveToEx(hDC, 241, 258, NULL);
			LineTo(hDC, 263, 272);
			MoveToEx(hDC, 241, 272, NULL);
			LineTo(hDC, 263, 258);
		}
		else if (e[i] == 69)
		{
			MoveToEx(hDC, 265, 258, NULL);
			LineTo(hDC, 287, 272);
			MoveToEx(hDC, 265, 272, NULL);
			LineTo(hDC, 287, 258);
		}
		else if (e[i] == 70)
		{
			MoveToEx(hDC, 49, 274, NULL);
			LineTo(hDC, 71, 288);
			MoveToEx(hDC, 49, 288, NULL);
			LineTo(hDC, 71, 274);
		}
		else if (e[i] == 71)
		{
			MoveToEx(hDC, 73, 274, NULL);
			LineTo(hDC, 95, 288);
			MoveToEx(hDC, 73, 288, NULL);
			LineTo(hDC, 95, 274);
		}
		else if (e[i] == 72)
		{
			MoveToEx(hDC, 97, 274, NULL);
			LineTo(hDC, 119, 288);
			MoveToEx(hDC, 97, 288, NULL);
			LineTo(hDC, 119, 274);
		}
		else if (e[i] == 73)
		{
			MoveToEx(hDC, 121, 274, NULL);
			LineTo(hDC, 143, 288);
			MoveToEx(hDC, 121, 288, NULL);
			LineTo(hDC, 143, 274);
		}
		else if (e[i] == 74)
		{
			MoveToEx(hDC, 145, 274, NULL);
			LineTo(hDC, 167, 288);
			MoveToEx(hDC, 145, 288, NULL);
			LineTo(hDC, 167, 274);
		}
		else if (e[i] == 75)
		{
			MoveToEx(hDC, 169, 274, NULL);
			LineTo(hDC, 191, 288);
			MoveToEx(hDC, 169, 288, NULL);
			LineTo(hDC, 191, 274);
		}
		else if (e[i] == 76)
		{
			MoveToEx(hDC, 193, 274, NULL);
			LineTo(hDC, 215, 288);
			MoveToEx(hDC, 193, 288, NULL);
			LineTo(hDC, 215, 274);
		}
		else if (e[i] == 77)
		{
			MoveToEx(hDC, 217, 274, NULL);
			LineTo(hDC, 239, 288);
			MoveToEx(hDC, 217, 288, NULL);
			LineTo(hDC, 239, 274);
		}
		else if (e[i] == 78)
		{
			MoveToEx(hDC, 241, 274, NULL);
			LineTo(hDC, 263, 288);
			MoveToEx(hDC, 241, 288, NULL);
			LineTo(hDC, 263, 274);
		}
		else if (e[i] == 79)
		{
			MoveToEx(hDC, 265, 274, NULL);
			LineTo(hDC, 287, 288);
			MoveToEx(hDC, 265, 288, NULL);
			LineTo(hDC, 287, 274);
		}
		else if (e[i] == 80)
		{
			MoveToEx(hDC, 49, 290, NULL);
			LineTo(hDC, 71, 304);
			MoveToEx(hDC, 49, 304, NULL);
			LineTo(hDC, 71, 290);
		}
		else if (e[i] == 81)
		{
			MoveToEx(hDC, 73, 290, NULL);
			LineTo(hDC, 95, 304);
			MoveToEx(hDC, 73, 304, NULL);
			LineTo(hDC, 95, 290);
		}
		else if (e[i] == 82)
		{
			MoveToEx(hDC, 97, 290, NULL);
			LineTo(hDC, 119, 304);
			MoveToEx(hDC, 97, 304, NULL);
			LineTo(hDC, 119, 290);
		}
		else if (e[i] == 83)
		{
			MoveToEx(hDC, 121, 290, NULL);
			LineTo(hDC, 143, 304);
			MoveToEx(hDC, 121, 304, NULL);
			LineTo(hDC, 143, 290);
		}
		else if (e[i] == 84)
		{
			MoveToEx(hDC, 145, 290, NULL);
			LineTo(hDC, 167, 304);
			MoveToEx(hDC, 145, 304, NULL);
			LineTo(hDC, 167, 290);
		}
		else if (e[i] == 85)
		{
			MoveToEx(hDC, 169, 290, NULL);
			LineTo(hDC, 191, 304);
			MoveToEx(hDC, 169, 304, NULL);
			LineTo(hDC, 191, 290);
		}
		else if (e[i] == 86)
		{
			MoveToEx(hDC, 193, 290, NULL);
			LineTo(hDC, 215, 304);
			MoveToEx(hDC, 193, 304, NULL);
			LineTo(hDC, 215, 290);
		}
		else if (e[i] == 87)
		{
			MoveToEx(hDC, 217, 290, NULL);
			LineTo(hDC, 239, 304);
			MoveToEx(hDC, 217, 304, NULL);
			LineTo(hDC, 239, 290);
		}
		else if (e[i] == 88)
		{
			MoveToEx(hDC, 241, 290, NULL);
			LineTo(hDC, 263, 304);
			MoveToEx(hDC, 241, 304, NULL);
			LineTo(hDC, 263, 290);
		}
		else if (e[i] == 89)
		{
			MoveToEx(hDC, 265, 290, NULL);
			LineTo(hDC, 287, 304);
			MoveToEx(hDC, 265, 304, NULL);
			LineTo(hDC, 287, 290);
		}
		else if (e[i] == 90)
		{
			MoveToEx(hDC, 49, 306, NULL);
			LineTo(hDC, 71, 320);
			MoveToEx(hDC, 49, 320, NULL);
			LineTo(hDC, 71, 306);
		}
		else if (e[i] == 91)
		{
			MoveToEx(hDC, 73, 306, NULL);
			LineTo(hDC, 95, 320);
			MoveToEx(hDC, 73, 320, NULL);
			LineTo(hDC, 95, 306);
		}
		else if (e[i] == 92)
		{
			MoveToEx(hDC, 97, 306, NULL);
			LineTo(hDC, 119, 320);
			MoveToEx(hDC, 97, 320, NULL);
			LineTo(hDC, 119, 306);
		}
		else if (e[i] == 93)
		{
			MoveToEx(hDC, 121, 306, NULL);
			LineTo(hDC, 143, 320);
			MoveToEx(hDC, 121, 320, NULL);
			LineTo(hDC, 143, 306);
		}
		else if (e[i] == 94)
		{
			MoveToEx(hDC, 145, 306, NULL);
			LineTo(hDC, 167, 320);
			MoveToEx(hDC, 145, 320, NULL);
			LineTo(hDC, 167, 306);
		}
		else if (e[i] == 95)
		{
			MoveToEx(hDC, 169, 306, NULL);
			LineTo(hDC, 191, 320);
			MoveToEx(hDC, 169, 320, NULL);
			LineTo(hDC, 191, 306);
		}
		else if (e[i] == 96)
		{
			MoveToEx(hDC, 193, 306, NULL);
			LineTo(hDC, 215, 320);
			MoveToEx(hDC, 193, 320, NULL);
			LineTo(hDC, 215, 306);
		}
		else if (e[i] == 97)
		{
			MoveToEx(hDC, 217, 306, NULL);
			LineTo(hDC, 239, 320);
			MoveToEx(hDC, 217, 320, NULL);
			LineTo(hDC, 239, 306);
		}
		else if (e[i] == 98)
		{
			MoveToEx(hDC, 241, 306, NULL);
			LineTo(hDC, 263, 320);
			MoveToEx(hDC, 241, 320, NULL);
			LineTo(hDC, 263, 306);
		}
		else if (e[i] == 99)
		{
			MoveToEx(hDC, 265, 306, NULL);
			LineTo(hDC, 287, 320);
			MoveToEx(hDC, 265, 320, NULL);
			LineTo(hDC, 287, 306);
		}
	}
}
void krugi(int* d)
{
	int i;
	for (i = 0; i < 80; i++)
	{
		SelectObject(hDC, Pen1);
		if (d[i] == 0) Ellipse(hDC, 55, 165, 65, 173);
		else if (d[i] == 1) Ellipse(hDC, 79, 165, 89, 173);
		else if (d[i] == 2) Ellipse(hDC, 103, 165, 113, 173);
		else if (d[i] == 3) Ellipse(hDC, 127, 165, 137, 173);
		else if (d[i] == 4) Ellipse(hDC, 151, 165, 161, 173);
		else if (d[i] == 5) Ellipse(hDC, 175, 165, 185, 173);
		else if (d[i] == 6) Ellipse(hDC, 199, 165, 209, 173);
		else if (d[i] == 7) Ellipse(hDC, 223, 165, 233, 173);
		else if (d[i] == 8) Ellipse(hDC, 247, 165, 257, 173);
		else if (d[i] == 9) Ellipse(hDC, 271, 165, 281, 173);
		else if (d[i] == 10) Ellipse(hDC, 55, 181, 65, 189);
		else if (d[i] == 11) Ellipse(hDC, 79, 181, 89, 189);
		else if (d[i] == 12) Ellipse(hDC, 103, 181, 113, 189);
		else if (d[i] == 13) Ellipse(hDC, 127, 181, 137, 189);
		else if (d[i] == 14) Ellipse(hDC, 151, 181, 161, 189);
		else if (d[i] == 15) Ellipse(hDC, 175, 181, 185, 189);
		else if (d[i] == 16) Ellipse(hDC, 199, 181, 209, 189);
		else if (d[i] == 17) Ellipse(hDC, 223, 181, 233, 189);
		else if (d[i] == 18) Ellipse(hDC, 247, 181, 257, 189);
		else if (d[i] == 19) Ellipse(hDC, 271, 181, 281, 189);
		else if (d[i] == 20) Ellipse(hDC, 55, 197, 65, 205);
		else if (d[i] == 21) Ellipse(hDC, 79, 197, 89, 205);
		else if (d[i] == 22) Ellipse(hDC, 103, 197, 113, 205);
		else if (d[i] == 23) Ellipse(hDC, 127, 197, 137, 205);
		else if (d[i] == 24) Ellipse(hDC, 151, 197, 161, 205);
		else if (d[i] == 25) Ellipse(hDC, 175, 197, 185, 205);
		else if (d[i] == 26) Ellipse(hDC, 199, 197, 209, 205);
		else if (d[i] == 27) Ellipse(hDC, 223, 197, 233, 205);
		else if (d[i] == 28) Ellipse(hDC, 247, 197, 257, 205);
		else if (d[i] == 29) Ellipse(hDC, 271, 197, 281, 205);
		else if (d[i] == 30) Ellipse(hDC, 55, 213, 65, 221);
		else if (d[i] == 31) Ellipse(hDC, 79, 213, 89, 221);
		else if (d[i] == 32) Ellipse(hDC, 103, 213, 113, 221);
		else if (d[i] == 33) Ellipse(hDC, 127, 213, 137, 221);
		else if (d[i] == 34) Ellipse(hDC, 151, 213, 161, 221);
		else if (d[i] == 35) Ellipse(hDC, 175, 213, 185, 221);
		else if (d[i] == 36) Ellipse(hDC, 199, 213, 209, 221);
		else if (d[i] == 37) Ellipse(hDC, 223, 213, 233, 221);
		else if (d[i] == 38) Ellipse(hDC, 247, 213, 257, 221);
		else if (d[i] == 39) Ellipse(hDC, 271, 213, 281, 221);
		else if (d[i] == 40) Ellipse(hDC, 55, 229, 65, 237);
		else if (d[i] == 41) Ellipse(hDC, 79, 229, 89, 237);
		else if (d[i] == 42) Ellipse(hDC, 103, 229, 113, 237);
		else if (d[i] == 43) Ellipse(hDC, 127, 229, 137, 237);
		else if (d[i] == 44) Ellipse(hDC, 151, 229, 161, 237);
		else if (d[i] == 45) Ellipse(hDC, 175, 229, 185, 237);
		else if (d[i] == 46) Ellipse(hDC, 199, 229, 209, 237);
		else if (d[i] == 47) Ellipse(hDC, 223, 229, 233, 237);
		else if (d[i] == 48) Ellipse(hDC, 247, 229, 257, 237);
		else if (d[i] == 49) Ellipse(hDC, 271, 229, 281, 237);
		else if (d[i] == 50) Ellipse(hDC, 55, 245, 65, 253);
		else if (d[i] == 51) Ellipse(hDC, 79, 245, 89, 253);
		else if (d[i] == 52) Ellipse(hDC, 103, 245, 113, 253);
		else if (d[i] == 53) Ellipse(hDC, 127, 245, 137, 253);
		else if (d[i] == 54) Ellipse(hDC, 151, 245, 161, 253);
		else if (d[i] == 55) Ellipse(hDC, 175, 245, 185, 253);
		else if (d[i] == 56) Ellipse(hDC, 199, 245, 209, 253);
		else if (d[i] == 57) Ellipse(hDC, 223, 245, 233, 253);
		else if (d[i] == 58) Ellipse(hDC, 247, 245, 257, 253);
		else if (d[i] == 59) Ellipse(hDC, 271, 245, 281, 253);
		else if (d[i] == 60) Ellipse(hDC, 55, 261, 65, 269);
		else if (d[i] == 61) Ellipse(hDC, 79, 261, 89, 269);
		else if (d[i] == 62) Ellipse(hDC, 103, 261, 113, 269);
		else if (d[i] == 63) Ellipse(hDC, 127, 261, 137, 269);
		else if (d[i] == 64) Ellipse(hDC, 151, 261, 161, 269);
		else if (d[i] == 65) Ellipse(hDC, 175, 261, 185, 269);
		else if (d[i] == 66) Ellipse(hDC, 199, 261, 209, 269);
		else if (d[i] == 67) Ellipse(hDC, 223, 261, 233, 269);
		else if (d[i] == 68) Ellipse(hDC, 247, 261, 257, 269);
		else if (d[i] == 69) Ellipse(hDC, 271, 261, 281, 269);
		else if (d[i] == 70) Ellipse(hDC, 55, 277, 65, 285);
		else if (d[i] == 71) Ellipse(hDC, 79, 277, 89, 285);
		else if (d[i] == 72) Ellipse(hDC, 103, 277, 113, 285);
		else if (d[i] == 73) Ellipse(hDC, 127, 277, 137, 285);
		else if (d[i] == 74) Ellipse(hDC, 151, 277, 161, 285);
		else if (d[i] == 75) Ellipse(hDC, 175, 277, 185, 285);
		else if (d[i] == 76) Ellipse(hDC, 199, 277, 209, 285);
		else if (d[i] == 77) Ellipse(hDC, 223, 277, 233, 285);
		else if (d[i] == 78) Ellipse(hDC, 247, 277, 257, 285);
		else if (d[i] == 79) Ellipse(hDC, 271, 277, 281, 285);
		else if (d[i] == 80) Ellipse(hDC, 55, 293, 65, 301);
		else if (d[i] == 81) Ellipse(hDC, 79, 293, 89, 301);
		else if (d[i] == 82) Ellipse(hDC, 103, 293, 113, 301);
		else if (d[i] == 83) Ellipse(hDC, 127, 293, 137, 301);
		else if (d[i] == 84) Ellipse(hDC, 151, 293, 161, 301);
		else if (d[i] == 85) Ellipse(hDC, 175, 293, 185, 301);
		else if (d[i] == 86) Ellipse(hDC, 199, 293, 209, 301);
		else if (d[i] == 87) Ellipse(hDC, 223, 293, 233, 301);
		else if (d[i] == 88) Ellipse(hDC, 247, 293, 257, 301);
		else if (d[i] == 89) Ellipse(hDC, 271, 293, 281, 301);
		else if (d[i] == 90) Ellipse(hDC, 55, 309, 65, 317);
		else if (d[i] == 91) Ellipse(hDC, 79, 309, 89, 317);
		else if (d[i] == 92) Ellipse(hDC, 103, 309, 113, 317);
		else if (d[i] == 93) Ellipse(hDC, 127, 309, 137, 317);
		else if (d[i] == 94) Ellipse(hDC, 151, 309, 161, 317);
		else if (d[i] == 95) Ellipse(hDC, 175, 309, 185, 317);
		else if (d[i] == 96) Ellipse(hDC, 199, 309, 209, 317);
		else if (d[i] == 97) Ellipse(hDC, 223, 309, 233, 317);
		else if (d[i] == 98) Ellipse(hDC, 247, 309, 257, 317);
		else if (d[i] == 99) Ellipse(hDC, 271, 309, 281, 317);
	}
}
void krugi1(int* d)
{
	int i;
	for (i = 0; i < 80; i++)
	{
		SelectObject(hDC, Pen1);
		if (d[i] == 0) Ellipse(hDC, 383, 165, 393, 173);
		else if (d[i] == 1) Ellipse(hDC, 407, 165, 417, 173);
		else if (d[i] == 2) Ellipse(hDC, 431, 165, 441, 173);
		else if (d[i] == 3) Ellipse(hDC, 455, 165, 465, 173);
		else if (d[i] == 4) Ellipse(hDC, 479, 165, 489, 173);
		else if (d[i] == 5) Ellipse(hDC, 503, 165, 513, 173);
		else if (d[i] == 6) Ellipse(hDC, 527, 165, 537, 173);
		else if (d[i] == 7) Ellipse(hDC, 551, 165, 561, 173);
		else if (d[i] == 8) Ellipse(hDC, 575, 165, 585, 173);
		else if (d[i] == 9) Ellipse(hDC, 599, 165, 609, 173);
		else if (d[i] == 10) Ellipse(hDC, 383, 181, 393, 189);
		else if (d[i] == 11) Ellipse(hDC, 407, 181, 417, 189);
		else if (d[i] == 12) Ellipse(hDC, 431, 181, 441, 189);
		else if (d[i] == 13) Ellipse(hDC, 455, 181, 465, 189);
		else if (d[i] == 14) Ellipse(hDC, 479, 181, 489, 189);
		else if (d[i] == 15) Ellipse(hDC, 503, 181, 513, 189);
		else if (d[i] == 16) Ellipse(hDC, 527, 181, 537, 189);
		else if (d[i] == 17) Ellipse(hDC, 551, 181, 561, 189);
		else if (d[i] == 18) Ellipse(hDC, 575, 181, 585, 189);
		else if (d[i] == 19) Ellipse(hDC, 599, 181, 609, 189);
		else if (d[i] == 20) Ellipse(hDC, 383, 197, 393, 205);
		else if (d[i] == 21) Ellipse(hDC, 407, 197, 417, 205);
		else if (d[i] == 22) Ellipse(hDC, 431, 197, 441, 205);
		else if (d[i] == 23) Ellipse(hDC, 455, 197, 465, 205);
		else if (d[i] == 24) Ellipse(hDC, 479, 197, 489, 205);
		else if (d[i] == 25) Ellipse(hDC, 503, 197, 513, 205);
		else if (d[i] == 26) Ellipse(hDC, 527, 197, 537, 205);
		else if (d[i] == 27) Ellipse(hDC, 551, 197, 561, 205);
		else if (d[i] == 28) Ellipse(hDC, 575, 197, 585, 205);
		else if (d[i] == 29) Ellipse(hDC, 599, 197, 609, 205);
		else if (d[i] == 30) Ellipse(hDC, 383, 213, 393, 221);
		else if (d[i] == 31) Ellipse(hDC, 407, 213, 417, 221);
		else if (d[i] == 32) Ellipse(hDC, 431, 213, 441, 221);
		else if (d[i] == 33) Ellipse(hDC, 455, 213, 465, 221);
		else if (d[i] == 34) Ellipse(hDC, 479, 213, 489, 221);
		else if (d[i] == 35) Ellipse(hDC, 503, 213, 513, 221);
		else if (d[i] == 36) Ellipse(hDC, 527, 213, 537, 221);
		else if (d[i] == 37) Ellipse(hDC, 551, 213, 561, 221);
		else if (d[i] == 38) Ellipse(hDC, 575, 213, 585, 221);
		else if (d[i] == 39) Ellipse(hDC, 599, 213, 609, 221);
		else if (d[i] == 40) Ellipse(hDC, 383, 229, 393, 237);
		else if (d[i] == 41) Ellipse(hDC, 407, 229, 417, 237);
		else if (d[i] == 42) Ellipse(hDC, 431, 229, 441, 237);
		else if (d[i] == 43) Ellipse(hDC, 455, 229, 465, 237);
		else if (d[i] == 44) Ellipse(hDC, 479, 229, 489, 237);
		else if (d[i] == 45) Ellipse(hDC, 503, 229, 513, 237);
		else if (d[i] == 46) Ellipse(hDC, 527, 229, 537, 237);
		else if (d[i] == 47) Ellipse(hDC, 551, 229, 561, 237);
		else if (d[i] == 48) Ellipse(hDC, 575, 229, 585, 237);
		else if (d[i] == 49) Ellipse(hDC, 599, 229, 609, 237);
		else if (d[i] == 50) Ellipse(hDC, 383, 245, 393, 253);
		else if (d[i] == 51) Ellipse(hDC, 407, 245, 417, 253);
		else if (d[i] == 52) Ellipse(hDC, 431, 245, 441, 253);
		else if (d[i] == 53) Ellipse(hDC, 455, 245, 465, 253);
		else if (d[i] == 54) Ellipse(hDC, 479, 245, 489, 253);
		else if (d[i] == 55) Ellipse(hDC, 503, 245, 513, 253);
		else if (d[i] == 56) Ellipse(hDC, 527, 245, 537, 253);
		else if (d[i] == 57) Ellipse(hDC, 551, 245, 561, 253);
		else if (d[i] == 58) Ellipse(hDC, 575, 245, 585, 253);
		else if (d[i] == 59) Ellipse(hDC, 599, 245, 609, 253);
		else if (d[i] == 60) Ellipse(hDC, 383, 261, 393, 269);
		else if (d[i] == 61) Ellipse(hDC, 407, 261, 417, 269);
		else if (d[i] == 62) Ellipse(hDC, 431, 261, 441, 269);
		else if (d[i] == 63) Ellipse(hDC, 455, 261, 465, 269);
		else if (d[i] == 64) Ellipse(hDC, 479, 261, 489, 269);
		else if (d[i] == 65) Ellipse(hDC, 503, 261, 513, 269);
		else if (d[i] == 66) Ellipse(hDC, 527, 261, 537, 269);
		else if (d[i] == 67) Ellipse(hDC, 551, 261, 561, 269);
		else if (d[i] == 68) Ellipse(hDC, 575, 261, 585, 269);
		else if (d[i] == 69) Ellipse(hDC, 599, 261, 609, 269);
		else if (d[i] == 70) Ellipse(hDC, 383, 277, 393, 285);
		else if (d[i] == 71) Ellipse(hDC, 407, 277, 417, 285);
		else if (d[i] == 72) Ellipse(hDC, 431, 277, 441, 285);
		else if (d[i] == 73) Ellipse(hDC, 455, 277, 465, 285);
		else if (d[i] == 74) Ellipse(hDC, 479, 277, 489, 285);
		else if (d[i] == 75) Ellipse(hDC, 503, 277, 513, 285);
		else if (d[i] == 76) Ellipse(hDC, 527, 277, 537, 285);
		else if (d[i] == 77) Ellipse(hDC, 551, 277, 561, 285);
		else if (d[i] == 78) Ellipse(hDC, 575, 277, 585, 285);
		else if (d[i] == 79) Ellipse(hDC, 599, 277, 609, 285);
		else if (d[i] == 80) Ellipse(hDC, 383, 293, 393, 301);
		else if (d[i] == 81) Ellipse(hDC, 407, 293, 417, 301);
		else if (d[i] == 82) Ellipse(hDC, 431, 293, 441, 301);
		else if (d[i] == 83) Ellipse(hDC, 455, 293, 465, 301);
		else if (d[i] == 84) Ellipse(hDC, 479, 293, 489, 301);
		else if (d[i] == 85) Ellipse(hDC, 503, 293, 513, 301);
		else if (d[i] == 86) Ellipse(hDC, 527, 293, 537, 301);
		else if (d[i] == 87) Ellipse(hDC, 551, 293, 561, 301);
		else if (d[i] == 88) Ellipse(hDC, 575, 293, 585, 301);
		else if (d[i] == 89) Ellipse(hDC, 599, 293, 609, 301);
		else if (d[i] == 90) Ellipse(hDC, 383, 309, 393, 317);
		else if (d[i] == 91) Ellipse(hDC, 407, 309, 417, 317);
		else if (d[i] == 92) Ellipse(hDC, 431, 309, 441, 317);
		else if (d[i] == 93) Ellipse(hDC, 455, 309, 465, 317);
		else if (d[i] == 94) Ellipse(hDC, 479, 309, 489, 317);
		else if (d[i] == 95) Ellipse(hDC, 503, 309, 513, 317);
		else if (d[i] == 96) Ellipse(hDC, 527, 309, 537, 317);
		else if (d[i] == 97) Ellipse(hDC, 551, 309, 561, 317);
		else if (d[i] == 98) Ellipse(hDC, 575, 309, 585, 317);
		else if (d[i] == 99) Ellipse(hDC, 599, 309, 609, 317);
	}
}
void korabli::linkor()
{
	srand(time(0));
r:
	k = c[rand() % 99];
	for (i = 0; i < 100; i++)
	{
		if (a[i] == k)
		{
			if (k / 10 == (k + 3) / 10)
			{
				j = 0;
				b[j] = a[i];
				j++;
				a[i] = 100;
				b[j] = a[i + 1];
				j++;
				a[i + 1] = 100;
				b[j] = a[i + 2];
				j++;
				a[i + 2] = 100;
				b[j] = a[i + 3];
				j++;
				a[i + 3] = 100;
				if (i - 10 > -1) a[i - 10] = 100;
				if (i + 10 < 100) a[i + 10] = 100;
				if (i - 9 > -1)a[i - 9] = 100;
				if (i + 11 < 100)a[i + 11] = 100;
				if (i - 8 > -1)a[i - 8] = 100;
				if (i + 12 < 100)a[i + 12] = 100;
				if (i - 7 > -1)a[i - 7] = 100;
				if (i + 13 < 100)a[i + 13] = 100;
				if (i - 1 > -1 && ((i - 1) / 10 == i / 10)) a[i - 1] = 100;
				if (i + 4 < 100 && ((i + 4) / 10 == i / 10)) a[i + 4] = 100;
				if (i - 11 > -1 && ((i - 11) / 10 == (i - 10) / 10)) a[i - 11] = 100;
				if (i + 9 < 100 && ((i + 9) / 10 == (i + 10) / 10)) a[i + 9] = 100;
				if (i - 6 > -1 && ((i - 6) / 10 == (i - 10) / 10)) a[i - 6] = 100;
				if (i + 14 < 100 && ((i + 14) / 10 == (i + 10) / 10)) a[i + 14] = 100;
			}
			else goto r;
		}
	}
}
void korabli::kreiser()
{
	int n[3] = { 0, 1, 2 }, h = 0, g;
	while (h != 2)
	{
	t:
		k = c[rand() % 99];
		l = n[rand() % 2];
		if (l == 0)
		{
			g = 0;
			for (i = 0; i < 100; i++)
			{
				if (a[i] == k)
				{
					if ((k / 10 == (k + 2) / 10) && a[i + 1] != 100 && a[i + 2] != 100)
					{
						b[j] = a[i];
						j++;
						a[i] = 100;
						b[j] = a[i + 1];
						j++;
						a[i + 1] = 100;
						b[j] = a[i + 2];
						j++;
						a[i + 2] = 100;
						if (i - 10 > -1) a[i - 10] = 100;
						if (i + 10 < 100) a[i + 10] = 100;
						if (i - 9 > -1)a[i - 9] = 100;
						if (i + 11 < 100)a[i + 11] = 100;
						if (i - 8 > -1)a[i - 8] = 100;
						if (i + 12 < 100)a[i + 12] = 100;
						if (i - 1 > -1 && ((i - 1) / 10 == i / 10)) a[i - 1] = 100;
						if (i + 3 < 100 && ((i + 3) / 10 == i / 10)) a[i + 3] = 100;
						if (i - 11 > -1 && ((i - 11) / 10 == (i - 10) / 10)) a[i - 11] = 100;
						if (i + 9 < 100 && ((i + 9) / 10 == (i + 10) / 10)) a[i + 9] = 100;
						if (i - 7 > -1 && ((i - 7) / 10 == (i - 10) / 10)) a[i - 7] = 100;
						if (i + 13 < 100 && ((i + 13) / 10 == (i + 10) / 10)) a[i + 13] = 100;
						g++;
					}
					else goto t;
				}
			}
			if (g != 0) h++;
			else goto t;
		}
		else
		{
			g = 0;
			for (i = 0; i < 100; i++)
			{
				if (a[i] == k)
				{
					if (k + 20 < 100 && a[i + 10] != 100 && a[i + 20] != 100)
					{
						b[j] = a[i];
						j++;
						a[i] = 100;
						b[j] = a[i + 10];
						j++;
						a[i + 10] = 100;
						b[j] = a[i + 20];
						j++;
						a[i + 20] = 100;
						if (i - 10 > -1) a[i - 10] = 100;
						if (i + 30 < 100) a[i + 30] = 100;
						if (i - 9 > -1 && ((i - 9) / 10 == (i - 10) / 10))a[i - 9] = 100;
						if (i - 11 > -1 && ((i - 11) / 10 == (i - 11) / 10)) a[i - 11] = 100;
						if (i - 1 > -1 && ((i - 1) / 10 == i / 10))a[i - 1] = 100;
						if (i + 1 < 100 && ((i + 1) / 10 == i / 10))a[i + 1] = 100;
						if (i + 9 < 100 && ((i + 9) / 10 == (i + 10) / 10))a[i + 9] = 100;
						if (i + 11 < 100 && ((i + 11) / 10 == (i + 10) / 10))a[i + 11] = 100;
						if (i + 19 < 100 && ((i + 19) / 10 == (i + 20) / 10))a[i + 19] = 100;
						if (i + 21 < 100 && ((i + 21) / 10 == (i + 20) / 10))a[i + 21] = 100;
						if (i + 29 < 100 && ((i + 29) / 10 == (i + 30) / 10))a[i + 29] = 100;
						if (i + 31 < 100 && ((i + 31) / 10 == (i + 30) / 10))a[i + 31] = 100;
						g++;
					}
					else goto t;
				}
			}
			if (g != 0) h++;
			else goto t;
		}
	}
}
void korabli::esmerets()
{
	int n[3] = { 0, 1, 2 }, h = 0, g;
	while (h != 3)
	{
	t:
		k = c[rand() % 99];
		l = n[rand() % 2];
		if (l == 0)
		{
			g = 0;
			for (i = 0; i < 100; i++)
			{
				if (a[i] == k)
				{
					if ((k / 10 == (k + 1) / 10) && a[i + 1] != 100)
					{
						b[j] = a[i];
						j++;
						a[i] = 100;
						b[j] = a[i + 1];
						j++;
						a[i + 1] = 100;
						if (i - 10 > -1) a[i - 10] = 100;
						if (i + 10 < 100) a[i + 10] = 100;
						if (i - 9 > -1)a[i - 9] = 100;
						if (i + 11 < 100)a[i + 11] = 100;
						if (i - 1 > -1 && ((i - 1) / 10 == i / 10)) a[i - 1] = 100;
						if (i + 2 < 100 && ((i + 2) / 10 == i / 10)) a[i + 2] = 100;
						if (i - 11 > -1 && ((i - 11) / 10 == (i - 10) / 10)) a[i - 11] = 100;
						if (i + 9 < 100 && ((i + 9) / 10 == (i + 10) / 10)) a[i + 9] = 100;
						if (i - 8 > -1 && ((i - 8) / 10 == (i - 10) / 10)) a[i - 8] = 100;
						if (i + 12 < 100 && ((i + 12) / 10 == (i + 10) / 10)) a[i + 12] = 100;
						g++;
					}
					else goto t;
				}
			}
			if (g != 0) h++;
			else goto t;
		}
		else
		{
			g = 0;
			for (i = 0; i < 100; i++)
			{
				if (a[i] == k)
				{
					if (k + 10 < 100 && a[i + 10] != 100)
					{
						b[j] = a[i];
						j++;
						a[i] = 100;
						b[j] = a[i + 10];
						j++;
						a[i + 10] = 100;
						if (i - 10 > -1) a[i - 10] = 100;
						if (i + 20 < 100) a[i + 20] = 100;
						if (i - 9 > -1 && ((i - 9) / 10 == (i - 10) / 10))a[i - 9] = 100;
						if (i - 11 > -1 && ((i - 11) / 10 == (i - 11) / 10)) a[i - 11] = 100;
						if (i - 1 > -1 && ((i - 1) / 10 == i / 10))a[i - 1] = 100;
						if (i + 1 < 100 && ((i + 1) / 10 == i / 10))a[i + 1] = 100;
						if (i + 9 < 100 && ((i + 9) / 10 == (i + 10) / 10))a[i + 9] = 100;
						if (i + 11 < 100 && ((i + 11) / 10 == (i + 10) / 10))a[i + 11] = 100;
						if (i + 19 < 100 && ((i + 19) / 10 == (i + 20) / 10))a[i + 19] = 100;
						if (i + 21 < 100 && ((i + 21) / 10 == (i + 20) / 10))a[i + 21] = 100;
						g++;
					}
					else goto t;
				}
			}
			if (g != 0) h++;
			else goto t;
		}
	}
}
void korabli::kater()
{
	int h = 0, g;
	while (h != 4)
	{
	t:
		k = c[rand() % 99];
		g = 0;
		for (i = 0; i < 100; i++)
		{
			if (a[i] == k)
			{
				b[j] = a[i];
				j++;
				a[i] = 100;
				if (i - 10 > -1) a[i - 10] = 100;
				if (i + 10 < 100) a[i + 10] = 100;
				if (i - 1 > -1 && ((i - 1) / 10 == i / 10)) a[i - 1] = 100;
				if (i + 1 < 100 && ((i + 1) / 10 == i / 10)) a[i + 1] = 100;
				if (i - 11 > -1 && ((i - 11) / 10 == (i - 10) / 10)) a[i - 11] = 100;
				if (i + 9 < 100 && ((i + 9) / 10 == (i + 10) / 10)) a[i + 9] = 100;
				if (i - 9 > -1 && ((i - 9) / 10 == (i - 10) / 10)) a[i - 9] = 100;
				if (i + 11 < 100 && ((i + 11) / 10 == (i + 10) / 10)) a[i + 11] = 100;
				g++;
			}
		}
		if (g != 0) h++;
		else goto t;
	}
}
void korabli::vibor()
{
	int c = 1, m = 0, l[4] = { 0,1,2,3 }, a = 1, b = 2, i1;
	j = 0;
	k = 0;
	otris();
	kor(l, a);
	while (c != 13)
	{
		c = _getch();
		if ((c == 75) && ((k - 1) > -1) && (k - 1) / 10 == k / 10)
		{
			k = k - 1;
			for (i1 = 0; i1 < 4; i1++)l[i1] -= 1;
		}
		else if ((c == 72) && ((k - 10) > -1))
		{
			k = k - 10;
			for (i1 = 0; i1 < 4; i1++)l[i1] -= 10;
		}
		if (m == 0)
		{
			if ((c == 77) && ((k + 4) < 100) && ((k + 4) / 10 == k / 10))
			{
				k = k + 1;
				for (i1 = 0; i1 < 4; i1++)l[i1] += 1;
			}
		}
		else
		{
			if ((c == 77) && ((k + 1) < 100) && (k + 1) / 10 == k / 10)
			{
				k = k + 1;
				for (i1 = 0; i1 < 4; i1++)l[i1] += 1;
			}
		}
		if (m == 0)
		{
			if ((c == 80) && ((k + 10) < 100))
			{
				k = k + 10;
				for (i1 = 0; i1 < 4; i1++)l[i1] += 10;
			}
		}
		else
		{
			if ((c == 80) && ((k + 40) < 100))
			{
				k = k + 10;
				for (i1 = 0; i1 < 4; i1++)l[i1] += 10;
			}
		}
		if (c == 32)
		{
			if (m == 0)
			{
				m = 1;
				l[1] = l[0] + 10;
				l[2] = l[0] + 20;
				l[3] = l[0] + 30;
			}
			else
			{
				m = 0;
				l[1] = l[0] + 1;
				l[2] = l[0] + 2;
				l[3] = l[0] + 3;
			}
		}
		otris();
		kor(l, a);
	}
	if (m == 0)
	{
		f[0] = k;
		f1[0] = k;
		j++;
		f[j] = k + 1;
		f1[j] = f[j];
		j++;
		f[j] = k + 2;
		f1[j] = f[j];
		j++;
		f[j] = k + 3;
		f1[j] = f[j];
		j++;
	}
	else
	{
		f[0] = k;
		f1[0] = k;
		j++;
		f[j] = k + 10;
		f1[j] = f[j];
		j++;
		f[j] = k + 20;
		f1[j] = f[j];
		j++;
		f[j] = k + 30;
		f1[j] = f[j];
		j++;
	}
	l[3] = 100000;
	for (i = 0; i < 2; i++)
	{
		c = 1;
		while (c != 13)
		{
			c = _getch();
			if ((c == 75) && ((k - 1) > -1) && (k - 1) / 10 == k / 10)
			{
				k = k - 1;
				for (i1 = 0; i1 < 3; i1++)l[i1] -= 1;
			}
			else if ((c == 72) && ((k - 10) > -1))
			{
				k = k - 10;
				for (i1 = 0; i1 < 3; i1++)l[i1] -= 10;
			}
			if (m == 0)
			{
				if ((c == 77) && ((k + 3) < 100) && (k + 3) / 10 == k / 10)
				{
					k = k + 1;
					for (i1 = 0; i1 < 3; i1++)l[i1] += 1;
				}
			}
			else
			{
				if ((c == 77) && ((k + 1) < 100) && (k + 1) / 10 == k / 10)
				{
					k = k + 1;
					for (i1 = 0; i1 < 3; i1++)l[i1] += 1;
				}
			}
			if (m == 0)
			{
				if ((c == 80) && ((k + 10) < 100))
				{
					k = k + 10;
					for (i1 = 0; i1 < 3; i1++)l[i1] += 10;
				}
			}
			else
			{
				if ((c == 80) && ((k + 30) < 100))
				{
					k = k + 10;
					for (i1 = 0; i1 < 3; i1++)l[i1] += 10;
				}
			}
			if (c == 32)
			{
				if (m == 0)
				{
					m = 1;
					l[1] = l[0] + 10;
					l[2] = l[0] + 20;
				}
				else
				{
					m = 0;
					l[1] = l[0] + 1;
					l[2] = l[0] + 2;
				}
			}
			otris();
			kor(f1, b);
			kor(l, a);
		}
		if (m == 0)
		{
			f[j] = k;
			f1[j] = f[j];
			j++;
			f[j] = k + 1;
			f1[j] = f[j];
			j++;
			f[j] = k + 2;
			f1[j] = f[j];
			j++;
		}
		else
		{
			f[j] = k;
			f1[j] = f[j];
			j++;
			f[j] = k + 10;
			f1[j] = f[j];
			j++;
			f[j] = k + 20;
			f1[j] = f[j];
			j++;
		}
	}
	l[2] = 2000000;
	for (i = 0; i < 3; i++)
	{
		c = 1;
		while (c != 13)
		{
			c = _getch();
			if ((c == 75) && ((k - 1) > -1) && (k - 1) / 10 == k / 10)
			{
				k = k - 1;
				for (i1 = 0; i1 < 2; i1++)l[i1] -= 1;
			}
			else if ((c == 72) && ((k - 10) > -1))
			{
				k = k - 10;
				for (i1 = 0; i1 < 2; i1++)l[i1] -= 10;
			}
			if (m == 0)
			{
				if ((c == 77) && ((k + 2) < 100) && (k + 2) / 10 == k / 10)
				{
					k = k + 1;
					for (i1 = 0; i1 < 2; i1++)l[i1] += 1;
				}
			}
			else
			{
				if ((c == 77) && ((k + 1) < 100) && (k + 1) / 10 == k / 10)
				{
					k = k + 1;
					for (i1 = 0; i1 < 2; i1++)l[i1] += 1;
				}
			}
			if (m == 0)
			{
				if ((c == 80) && ((k + 10) < 100))
				{
					k = k + 10;
					for (i1 = 0; i1 < 2; i1++)l[i1] += 10;
				}
			}
			else
			{
				if ((c == 80) && ((k + 20) < 100))
				{
					k = k + 10;
					for (i1 = 0; i1 < 2; i1++)l[i1] += 10;
				}
			}
			if (c == 32)
			{
				if (m == 0)
				{
					m = 1;
					l[1] = l[0] + 10;
				}
				else
				{
					m = 0;
					l[1] = l[0] + 1;
				}
			}
			otris();
			kor(f1, b);
			kor(l, a);
		}
		if (m == 0)
		{
			f[j] = k;
			f1[j] = f[j];
			j++;
			f[j] = k + 1;
			f1[j] = f[j];
			j++;
		}
		else
		{
			f[j] = k;
			f1[j] = f[j];
			j++;
			f[j] = k + 10;
			f1[j] = f[j];
			j++;
		}
	}
	l[1] = 100000;
	for (i = 0; i < 4; i++)
	{
		c = 1;
		while (c != 13)
		{
			c = _getch();
			if ((c == 75) && ((k - 1) > -1) && (k - 1) / 10 == k / 10)
			{
				k = k - 1;
				l[0] -= 1;
			}
			else if ((c == 72) && ((k - 10) > -1))
			{
				k = k - 10;
				l[0] -= 10;
			}
			else if ((c == 77) && ((k + 1) < 100) && (k + 1) / 10 == k / 10)
			{
				k = k + 1;
				l[0] += 1;
			}
			else if ((c == 80) && ((k + 10) < 100))
			{
				k = k + 10;
				l[0] += 10;
			}
			otris();
			kor(f1, b);
			kor(l, a);
		}
		f[j] = k;
		f1[j] = f[j];
		j++;
	}
}
void korabli::igra()
{
	int  c1 = 1, t, h = 0, g = 0, n = 0, z = 0, v = 0, q = 0, w = 3, s = 0, s1 = 0, z1 = 0, z2, t1, b1 = 2, a2[100], ak = 0;
	k = 0;
	a2[0] = 0;
	otris();
	kor(f1, b1);
	kursor(kr);
	while (c1 != 13)
	{
	l:
		c1 = _getch();
		if ((c1 == 75) && ((k - 1) > -1) && (k - 1) / 10 == k / 10)
		{
			k = k - 1;
			kr[0] -= 24;
			kr[2] -= 24;
		}
		else if ((c1 == 72) && ((k - 10) > -1))
		{
			k = k - 10;
			kr[1] -= 16;
			kr[3] -= 16;
		}
		else if ((c1 == 77) && ((k + 1) < 100) && (k + 1) / 10 == k / 10)
		{
			k = k + 1;
			kr[0] += 24;
			kr[2] += 24;
		}
		else if ((c1 == 80) && ((k + 10) < 100))
		{
			k = k + 10;
			kr[1] += 16;
			kr[3] += 16;
		}
		otris();
		kor(f1, b1);
		kursor(kr);
		if (g > 1)
		{
			kresti(d);
			krugi1(e);
			kresti1(d1);
			krugi(e1);
		}
		g++;
	}
	for (i = 0; i < 20; i++)
	{
		if (b[i] == k)
		{
			b[i] = 100;
			d[h] = k;
			h++;
			if (h == 20) exit(0);
			goto l;
		}
	}
	e[z] = k;
	z++;
	goto o;
o:
	r = c[rand() % 99];
	if (r > -1 && r < 100)
	{
		for (i = 0; i < 100; i++)if (r == a2[i])goto o;
		a2[ak] = r;
		ak++;
		for (t = 0; t < 20; t++)
		{
			if (f[t] == r)
			{
				f[t] = 100;
				d1[s] = r;
				s++;
				if (s == 20) exit(0);
				goto o;
			}
		}
		e1[z1] = r;
		z1++;
		goto l;
	}
	else goto o;
}
void main()
{
	setlocale(LC_ALL, "RUS");
	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD crd = { 80, 28 };
	SMALL_RECT src = { 0, 0, crd.X - 1, crd.Y - 1 };
	SetConsoleWindowInfo(out_handle, true, &src);
	SetConsoleScreenBufferSize(out_handle, crd);
	korabli x;
	x.linkor();
	x.kreiser();
	x.esmerets();
	x.kater();
	x.vibor();
	x.igra();
	_getch();
}
