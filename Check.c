#include "NoRecursion.h"
#include "Recursion.h"

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void MenuManager1();
void MenuManager2(int upperselection);
void Menu1();
void Menu2();
void Run(int para1, int para2, int i);



void Menu1()
{
	printf("\nDanh sach cac lua chon:\n");
	Sleep(100);
	int menusize = 6;
	
	char ** menu;
	menu = (char **) malloc(sizeof(char*) * menusize);
	
	menu[0] = "Day 1: 1, 2, 3, 6, 11, 20, 37, 68, 125, ...";
	menu[1] = "Day 2: 1, 2, 3, 7, 13, 23, 43, 79, 145, ...";
	menu[2] = "Day 3: 1, 2, 3, 4, 4, 5, 8, 11, 12, 14, 21, 30, 35, 40, 56, ...";
	menu[3] = "Day 4: 1, 2, 3, 4, 6, 9, 14, 21, 32, 48, 73, 110, 167, 252, ...";
	menu[4] = "Day 5: Xn = cbrt(n) * X0 + cbrt(n - 1) * X1 + ... + cbrt(1) * X(n - 1)";
	menu[5] = "Thoat";
	
	int i;
	for (i = 0; i < menusize; ++i)
	{
		printf( "%d, %s\n", i+1, menu[i] );
		Sleep(100);
	}
	
	printf("\nLua chon (1-%d):", menusize);
}


void MenuManager1()
{
	int selection;
	int menusize = 6;
	
	do
	{
		Menu1();
		
		fflush(stdin);
		scanf("%d", &selection);
		if (selection < 1 || selection > menusize)
		{
			printf("\nLoi nhap tu ban phim!\n");
			Sleep(100);
		}
		else if (selection == menusize)
		{
			break;
		}
		else if (selection == menusize - 1)
		{
			int i;
			do
			{
				printf("\nNhap vao gia tri cua i:");
				fflush(stdin);
				scanf("%d", &i);
				
				if (i < 0)
				{
					printf("\nLoi nhap tu ban phim!\n");
					Sleep(100);
					continue;
				}
				
				int j;
				for (j = 0; j <= i; ++j)
				{
					printf("\nGia tri phan tu thu %d cua day la: %f\n", j, seq5rec(j));
					Sleep(100);
				}
				
				break;
			} while (1);
		}
		else
		{
			MenuManager2(selection);
			continue;
		}
	} while (1);
}


void Menu2()
{
	printf("\nDanh sach cac lua chon:\n");
	Sleep(100);
	
	int menusize = 4;
	char ** menu;
	menu = (char **) malloc(sizeof(char *) * menusize);
	
	menu[0] = "Gia tri phan tu thu i cua day";
	menu[1] = "Tong cac phan tu cua day den phan tu thu i dung de quy";
	menu[2] = "Tong cac phan tu cua day den phan tu thu i khong dung de quy";
	menu[3] = "Thoat";
	
	int i;
	for (i = 0; i < menusize; ++i)
	{
		printf( "%d, %s\n", i+1, menu[i] );
		Sleep(100);
	}
	
	
}


void MenuManager2(int upperselection)
{
	int selection;
	int menusize = 4;
	
	Menu2();
	
	do
	{	
		printf("\nLua chon (1-%d):", menusize);
		fflush(stdin);
		scanf("%d", &selection);
		if (selection < 1 || selection > menusize)
		{
			printf("\nLoi nhap tu ban phim!\n");
			Sleep(100);
		}
		else if (selection == menusize)
		{
			break;
		}
		else
		{
			int i;
			do
			{
				printf("\nNhap vao gia tri cua i: ");
				fflush(stdin);
				scanf("%d", &i);
				
				if (i < 0)
				{
					printf("\nLoi nhap tu ban phim!\n");
					Sleep(100);
					continue;
				}
				else
				{
					Run(upperselection, selection, i);
					break;
				}
			} while (1);
			
			continue;
		}
	} while (1);
}


void Run(int para1, int para2, int i)
{
	switch (para1)
	{
		case 1: {
			switch (para2)
			{
				case 1: 
				{
					printf("\nGia tri phan tu thu %d cua day: %d\n", i, seq1rec(i));
					Sleep(100);
					break;
				}
				case 2: 
				{
					printf("\nTong cua day den phan tu thu %d dung de quy: %d\n", i, seq1sumrec(i));
					Sleep(100);
					break;
				}
				case 3:
				{
					printf("\nTong cua day den phan tu thu %d khong dung de quy: %d\n", i, seq1sum(i));
					Sleep(100);
					break;
				}
			}
			break;
		}
		case 2: {
			switch (para2)
			{
				case 1:
				{
					printf("\nGia tri phan tu thu %d cua day: %d\n", i, seq2rec(i));
					Sleep(100);
					break;
				}
				case 2:
				{
					printf("\nTong cua day den phan tu thu %d dung de quy: %d\n", i, seq2sumrec(i));
					Sleep(100);
					break;
				}
				case 3:
				{
					printf("\nTong cua day den phan tu thu %d khong dung de quy: %d\n", i, seq2sum(i));
					Sleep(100);
					break;
				}
			}
			break;
		}
		case 3: {
			switch (para2)
			{
				case 1: 
				{
					printf("\nGia tri phan tu thu %d cua day: %d\n", i, seq3rec(i));
					Sleep(100);
					break;
				}
				case 2:
				{
					printf("\nTong cua day den phan tu thu %d dung de quy: %d\n", i, seq3sumrec(i));
					Sleep(100);
					break;
				}
				case 3:
				{
					printf("\nTong cua day den phan tu thu %d khong dung de quy: %d\n", i, seq3sum(i));
					Sleep(100);
					break;
				}
			}
			break;
		}
		case 4: {
			switch (para2)
			{
				case 1: 
				{
					printf("\nGia tri phan tu thu %d cua day: %d\n", i, seq4rec(i));
					Sleep(100);
					break;
				}
				case 2:
				{
					printf("\nTong cua day den phan tu thu %d dung de quy: %d\n", i, seq4sumrec(i));
					Sleep(100);
					break;
				}
				case 3: 
				{
					printf("\nTong cua day den phan tu thu %d khong dung de quy: %d\n", i, seq4sum(i));
					Sleep(100);
					break;
				}
			}
			break;
		}
	}
}


int main(int argc, char ** argv)
{
	MenuManager1();
	
	return 0;
}