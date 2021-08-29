#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void textcolor(int color)
{
    static int __BACKGROUND;

    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;


    GetConsoleScreenBufferInfo(h, &csbiInfo);

    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
                             color + (__BACKGROUND << 4));
}
char element;
void ele(int x)
{
	for (int i = 0; i < x; i++)
	{
		printf("%c", element);
	}
}
void emp(int x)
{
	for (int i = 0; i < x; i++)
	{
		printf(" ");
	}
}
void Render(char str[], int left, int right)
{
	//printf("%d--%d",left,right);
	for (int height = 0; height < 7; height++)
	{

		for (int i = left; i <= right; i++)
		{
			char c = str[i];

			switch (c)
			{		
			case '7':

				switch (height)
				{
				case 0:
					textcolor(4);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 1:
					textcolor(12);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 2:
					textcolor(14);
					emp(1);
					ele(5);
					emp(1);
					break;

				case 3:
					textcolor(14);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 4:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 5:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 6:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;
				}
				break;

			case '6':

				switch (height)
				{
				case 0:
					textcolor(4);
					emp(7);

					break;

				case 1:
					textcolor(12);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 2:
					textcolor(14);
					emp(1);
					ele(5);
					emp(1);
					break;

				case 3:
					textcolor(14);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 4:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 5:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 6:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;
				}
				break;

			case '5':

				switch (height)
				{
				case 0:
					textcolor(4);
					emp(7);

					break;

				case 1:
					textcolor(12);
					emp(7);

					break;

				case 2:
					textcolor(14);
					emp(1);
					ele(5);
					emp(1);
					break;

				case 3:
					textcolor(14);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 4:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 5:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 6:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;
				}
				break;

			case '4':

				switch (height)
				{
				case 0:
					textcolor(4);
					emp(7);

					break;

				case 1:
					textcolor(12);
					emp(7);

					break;

				case 2:
					textcolor(14);
					emp(7);
					break;

				case 3:
					textcolor(14);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 4:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 5:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 6:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;
				}
				break;

			case '3':

				switch (height)
				{
				case 0:
					textcolor(4);
					emp(7);

					break;

				case 1:
					textcolor(12);
					emp(7);

					break;

				case 2:
					textcolor(14);
					emp(7);
					break;

				case 3:
					textcolor(14);
					emp(7);

					break;

				case 4:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 5:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 6:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;
				}
				break;

			case '2':

				switch (height)
				{
				case 0:
					emp(7);

					break;

				case 1:
					emp(7);

					break;

				case 2:
					emp(7);
					break;

				case 3:
					emp(7);

					break;

				case 4:
					emp(7);

					break;

				case 5:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;

				case 6:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;
				}
				break;

			case '1':

				switch (height)
				{
				case 0:
					emp(7);

					break;

				case 1:
					emp(7);

					break;

				case 2:
					emp(7);
					break;

				case 3:
					emp(7);

					break;

				case 4:
					emp(7);

					break;

				case 5:
					emp(7);

					break;

				case 6:
					textcolor(10);
					emp(1);
					ele(5);
					emp(1);

					break;
				}
				break;

			case '0':

				switch (height)
				{
				case 0:
					emp(7);

					break;

				case 1:
					emp(7);

					break;

				case 2:
					emp(7);
					break;

				case 3:
					emp(7);

					break;

				case 4:
					emp(7);

					break;

				case 5:
					emp(7);

					break;

				case 6:
					emp(7);

					break;
				}
				break;

			default:
				break;
			}
		}

		printf("\n");
	}

	for (int i = 0; i < 4; i++)
	{
		printf("\n");
	}
}


void print(char str[], char font)
{
	element = font;
	int i;
	for (i = 0; str[i] != '\0'; ++i)
	  ;

	int left = 0;
	int right = 0;

	for (int j = 0; j < i; j++)
	{
		if (str[j] != ' ')
		{
			right = j;
		}
		else
		{

			Render(str, left, right);
			left = ++right;
		}
	}

	Render(str, left, right);
}



// int main()
// {
// 	char c[50] = "1234567";
// 	char font[5] = "|";
// 		print(c, font[0]);
// 	return 0;
// }

//int main()
//{
//    char c[50] = "01234567";
//    char font[5] = "|";
//    print(c,font[0]);
//    return 0;
//}








//void hidecursor()
//{
//	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HSNDLE);
//	CONSOLE_CURSOR_INFO info;
//	info.dwSize = 100;
//	info.bVisible = false;
//	SetConsoleCursorInfo(consoleHandle, &info);
//}
void maximizedWindow()
{
	HWND hwnd = GetConsoleWindow();
	ShowWindow(hwnd,SW_SHOWMAXIMIZED);
}
void sleep(long milli)
{
	clock_t end, current = clock();
	for(end = current + milli; current < end;current = clock());
}
int random()
{
	   int lower = 0;
	   int upper = 7;
	   int count = 1;
	   int n;
	   for(int i = 0; i<count; i++)
	   {
	        n= (rand()%(upper-lower +1))+lower;
	   }
	   return n;
}
void main()
{
	printf("\e[?25l");
	maximizedWindow();
	int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	char result[10];
	char font[1]="|";
	char space[50] = " ";
	for(;;)
	{
	    char sp[50] = "0000000000";
		n0=random();
		n1=random();
		n2=random();
		n3=random();
		n4=random();
		n5=random();
		n6=random();
		n7=random();
		n8=random();
		n9=random();
		n10=random();
	    int num=(n10*10000000000)+(n9*1000000000)+(n8*100000000)+(n7*10000000)+(n6*1000000)+(n5*100000)+(n4*10000)+(n3*1000)+(n2*100)+(n1*10)+(n0);
	    itoa(num,result,10);
	    strcat(sp,result);
	    print(space,font[0]);
	    print(sp,font[0]);
	    sleep(20);
	    system("cls");
	}
}