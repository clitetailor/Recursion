#include <stdio.h>
#include "NoRecursion.h"
#include "Recursion.h"



void Menu1();
void Menu2(int upperselection);





void Menu1()
{
	har * menu []= { 
						"Day 1: 1, 2, 3, 6, 11, 20, 37, 68, 125, ...",
						"Day 2: 1, 2, 3, 7, 13, 23, 43, 79, 145, ...",
						"Day 3: 1, 2, 3, 4, 4, 5, 8, 11, 12, 14, 21, 30, 35, 40, 56, ...",
						"Day 4: 1, 2, 3, 4, 6, 9, 14, 21, 32, 48, 73, 110, 167, 252, ..."
						"Day 5: Xn = cbrt(n) * X0 + cbrt(n - 1) * X1 + ... + cbrt(1) * X(n - 1)",
						"Thoat"
					};
	
	int menusize = sizeof(menu) / sizeof(char *);
	
	int i;
	for (i = 0; i < menusize; ++i)
	{
		printf( "%d, %s\n", i+1, menu[i] );
	}
	
	printf("\n");
	
	int selection;
	
	do
	{
		printf("\nLua chon (1-%d)", menusize);
		fflush(stdin);
		scanf("%d", selection);
		if (selection < 1 || selection > menusize - 1)
		{
			printf("\nLoi nhap tu ban phim!\n");
		}
		else if (selection == menusize)
		{
			break;
		}
		else
		{
			Menu2(selection);
			continue;
		}
	} while (1);
}


void Menu2(int upperselection)
{
	char * menu[] = {
						"Gia tri phan tu thu i cua day",
						"Tong cac phan tu cua day den phan tu thu i dung de quy",
						"Tong cac phan tu cua day den phan tu thu i khong dung de quy",
						"Thoat"
					};
	
	int menusize = sizeof(menu) / sizeof(char *);
	
	int i;
	for (i = 0; i < menusize; ++i)
	{
		printf( "%d, %s\n", i+1, menu[i] );
	}
	
	printf("\n");
	
	int selection;
	int index;
	
	do
	{
		printf("\nLua chon (1-%d)", menusize);
		fflush(stdin);
		scanf("%d", selection);
		if (selection < 1 || selection > menusize - 1)
		{
			printf("\nLoi nhap tu ban phim!\n");
		}
		else if (selection == menusize)
		{
			break;
		}
		else
		{
			do
			{
				printf("Nhap vao phan tu thu i:");
				fflush(stdin);
				scanf("%d", &index);
				if (index < 0)
				{
					continue;
				}
			} while (1)
			
			Command(upperselection, selection, index);
			continue;
		}
	} while (1);
}

void Command(int para1, int para2, int index)
{
	switch (para1)
	{
		case 1: {
			switch (para2)
			{
				case 1: {printf("\nGia tri phan tu thu %d cua day: %d", index, }; break;};
				case 2: {printf("\nTong cua day den phan tu thu %d dung de quy: %d", index, seq1sumrec(index)), break;}
				case 3: {printf("\nTong cua day den phan tu thu %d khong dung de quy: %d", index, seq1sum(index)), break;}
			}
		}
		case 2: {
			switch (para2)
			{
				case 1: {printf("\nGia tri phan tu thu %d cua day: %d", index, }; break;};
				case 2: {printf("\nTong cua day den phan tu thu %d dung de quy: %d", index, seq2sumrec(index)), break;}
				case 3: {printf("\nTong cua day den phan tu thu %d khong dung de quy: %d", index, 0), break;}
			}
		}
		case 3: {
			switch (para2)
			{
				case 1: {printf("\nGia tri phan tu thu %d cua day: %d", index, }; break;};
				case 2: {printf("\nTong cua day den phan tu thu %d dung de quy: %d", index, seq3sumrec(index)), break;}
				case 3: {printf("\nTong cua day den phan tu thu %d khong dung de quy: %d", index, seq3sum(index)), break;}
			}
		}
		case 4: {
			switch (para2)
			{
				case 1: {printf("\nGia tri phan tu thu %d cua day: %d", index, }; break;};
				case 2: {printf("\nTong cua day den phan tu thu %d dung de quy: %d", index, seq4sumrec(index)), break;}
				case 3: {printf("\nTong cua day den phan tu thu %d khong dung de quy: %d", index, seq4sum(index)), break;}
			}
		}
		case 5: {
			switch (para2)
			{
				case 1: {printf("\nGia tri phan tu thu %d cua day: %d", index, seq5rec(index)}; break;};
				case 2: {printf("!"), break;}
				case 3: {printf("!"), break;}
			}
		}
	}
}


int main(int argc, char ** argv)
{
	Menu1();
	
	return 0;
}