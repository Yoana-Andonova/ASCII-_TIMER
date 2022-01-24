/**
*
* Solution to course project # 4
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Yoana Andonova
* @idnumber 7MI0600027
* @compiler VSS
*
* <ASCII timer>
*
*/

#include <iostream>
#include "windows.h"
using namespace std;
char R[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
char Zero[11][11];
char One[11][2];
char Two[11][11];
char Three[11][11];
char Four[11][11];
char Five[11][11];
char Six[11][11];
char Seven[11][11];
char Eight[11][11];
char Nine[11][11];
char Colon[11][3];
char dots[11][5];

void zero(char zero1[11][11])
{
    for (int a = 0; a < 10; a++)
        zero1[0][a] = '0';
    zero1[0][10] = '\0';

    for (int b = 0; b < 9; b++)
    {
        zero1[b + 1][0] = '0';
        for (int i = 0; i < 8; i++)
            zero1[b + 1][i + 1] = ' ';
        zero1[b + 1][9] = '0';
        zero1[b + 1][10] = '\0';
    }

    for (int a = 0; a < 10; a++)
        zero1[10][a] = '0';
    zero1[10][10] = '\0';
}

void one(char one1[11][2])
{
	for (int a = 0; a < 11; a++)
	{
		One[a][0] = '1';
		One[a][1] = '\0';
	}
	
}

void two(char two1[11][11])
{
    for (int i = 0; i < 10; i++)
        two1[0][i] = '2';
    two1[0][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 9; i++)
            two1[j + 1][i] = ' ';
        two1[j + 1][9] = '2';
        two1[j + 1][10] = '\0';

    }

    for (int i = 0; i < 10; i++)
        two1[5][i] = '2';
    two1[5][10] = '\0';

    for (int j = 0; j < 4; j++)
    {
        two1[j + 6][0] = '2';
        for (int i = 0; i < 9; i++)
            two1[j + 6][i + 1] = ' ';
        two1[j + 6][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        two1[10][i] = '2';
    two1[10][10] = '\0';

}
void three(char three1[11][11])
{
    for (int a = 0; a < 10; a++)
        Three[0][a] = '3';
    Three[0][10] = '\0';

    for (int b = 0; b < 4; b++)
    {
        for (int c = 0; c < 9; c++)
            Three[b + 1][c] = ' ';
        Three[b + 1][9] = '3';
        Three[b + 1][10] = '\0';
    }

    for (int a = 0; a < 10; a++)
        Three[5][a] = '3';
    Three[5][10] = '\0';

    for (int h = 0; h < 4; h++)
    {
        for (int i = 0; i < 9; i++)
            Three[h + 6][i] = ' ';
        Three[h + 6][9] = '3';
        Three[h + 6][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        Three[10][i] = '3';
   Three[10][10] = '\0';
}

void four(char four1[11][11])
{
    for (int a = 0; a < 5; a++)
    {
        Four[a][0] = '4';
        for (int i = 0; i < 8; i++)
            Four[a][i + 1] = ' ';
        Four[a][9] = '4';
        Four[a][10] = '\0';
    }

    for (int a = 0; a < 10; a++)
        Four[5][a] = '4';
    Four[5][10] = '\0';

    for (int b = 0; b < 5; b++)
    {
        for (int i = 0; i < 9; i++)
            Four[b + 6][i] = ' ';
        Four[b + 6][9] = '4';
        Four[b + 6][10] = '\0';
    }
}

void five(char five1[11][11])
{
    for (int a = 0; a < 10; a++)
        Five[0][a] = '5';
    Five[0][10] = '\0';

    for (int b = 0; b < 4; b++)
    {
        Five[b + 1][0] = '5';
        for (int i = 0; i < 9; i++)
            Five[b + 1][i + 1] = ' ';
        Five[b + 1][10] = '\0';
    }

    for (int a = 0; a < 10; a++)
        Five[5][a] = '5';
    Five[5][10] = '\0';

    for (int b = 0; b < 4; b++)
    {
        for (int i = 0; i < 9; i++)
            Five[b + 6][i] = ' ';
        Five[b + 6][9] = '5';
        Five[b + 6][10] = '\0';
    }

    for (int i = 0; i < 10; i++)
        Five[10][i] = '5';
    Five[10][10] = '\0';
}

void six(char six1[11][11])
{
    for (int a = 0; a < 10; a++)
        Six[0][a] = '6';
    Six[0][10] = '\0';

    for (int b = 0; b < 4; b++)
    {
        Six[b + 1][0] = '6';
        for (int i = 0; i < 9; i++)
            Six[b + 1][i + 1] = ' ';
        Six[b + 1][10] = '\0';
    }

    for (int a = 0; a < 10; a++)
        Six[5][a] = '6';
    Six[5][10] = '\0';

    for (int b = 0; b < 4; b++)
    {
        Six[b + 6][0] = '6';
        for (int i = 0; i < 8; i++)
            Six[b + 6][i + 1] = ' ';
        Six[b + 6][9] = '6';
        Six[b + 6][10] = '\0';
    }

    for (int a = 0; a < 10; a++)
        Six[10][a] = '6';
    Six[10][10] = '\0';
}

void seven(char seven1[11][11])
{
    for (int a = 0; a < 10; a++)
        Seven[0][a] = '7';
    Seven[0][10] = '\0';

    for (int b = 0; b < 10; b++)
    {
        for (int i = 0; i < 9; i++)
            Seven[b + 1][i] = ' ';
        Seven[b + 1][9] = '7';
        Seven[b + 1][10] = '\0';
    }
}

void eight(char eight1[11][11])
{
    for (int a = 0; a < 10; a++)
        Eight[0][a] = '8';
    Eight[0][10] = '\0';

    for (int b = 0; b < 4; b++)
    {
        Eight[b + 1][0] = '8';
        for (int i = 0; i < 8; i++)
            Eight[b + 1][i + 1] = ' ';
        Eight[b + 1][9] = '8';
        Eight[b + 1][10] = '\0';
    }

    for (int a = 0; a < 10; a++)
        Eight[5][a] = '8';
    Eight[5][10] = '\0';

    for (int b = 0; b < 4; b++)
    {
        Eight[b + 6][0] = '8';
        for (int i = 0; i < 8; i++)
            Eight[b + 6][i + 1] = ' ';
        Eight[b + 6][9] = '8';
        Eight[b + 6][10] = '\0';
    }

    for (int a = 0; a < 10; a++)
        Eight[10][a] = '8';
    Eight[10][10] = '\0';
}


void nine(char nine1[11][11])
{
    for (int a = 0; a < 10; a++)
        Nine[0][a] = '9';
    Nine[0][10] = '\0';

    for (int b = 0; b < 4; b++)
    {
        Nine[b + 1][0] = '9';
        for (int i = 0; i < 8; i++)
            Nine[b + 1][i + 1] = ' ';
        Nine[b + 1][9] = '9';
        Nine[b + 1][10] = '\0';
    }

    for (int a = 0; a < 10; a++)
        Nine[5][a] = '9';
    Nine[5][10] = '\0';

    for (int b = 0; b < 4; b++)
    {
        for (int i = 0; i < 9; i++)
            Nine[b + 6][i] = ' ';
        Nine[b + 6][9] = '9';
        Nine[b + 6][10] = '\0';
    }

    for (int a = 0; a < 10; a++)
        Nine[10][a] = '9';
    Nine[10][10] = '\0';
}
void colon(char colon1[11][3])
{
    for (int a = 0; a < 11; a++)
    {
        Colon[a][0] = ' ';
        Colon[a][1] = '\0';

    }
}
void theDigit(int digit, int index)
{
    switch (digit)
    {
    case 0:
        cout << Zero[index];
        break;
    case 1:
        cout << One[index];
        break;
    case 2:
        cout << Two[index];
        break;
    case 3:
        cout << Three[index];
        break;
    case 4:
        cout << Four[index];
        break;
    case 5:
        cout << Five[index];
        break;
    case 6:
        cout << Six[index];
        break;
    case 7:
        cout << Seven[index];
        break;
    case 8:
        cout << Eight[index];
        break;
    case 9:
        cout << Nine[index];
        break;
    }

}
void theDots(int index)
{
    cout << dots[index];
    cout << Colon[index];
}
void timePrint(int time, int index)
{
    if (time < 10)
    {
        cout <<Zero[index];
        cout << Colon[index];
        theDigit(time, index);
        cout << Colon[index];
        
    }
    else
    {
        theDigit(time / 10, index);
        cout << Colon[index];
        theDigit(time % 10, index);
        cout << Colon[index]; 

    }
    
}


int main()
{
    int times;
    cin >> times;
    
   
    colon(Colon);
    zero(Zero);
    one( One);
    two( Two);
    three( Three);
    four( Four);
    five( Five);
    six( Four);
    seven( Seven);
    eight( Eight);
    nine(Nine);
    
    
    
    
    while (time >= 0)
    {
        int s = times;
        int sec = s % 60;
        s /= 60;
        int min = s % 60;
        s /= 60;
        int hours = s;
        system("CLS");
        for (int v = 0; v < 7; v++)
            
            cout << endl;
        
        for (int v = 0; v < 11; v++)
        {
            int Ra = rand() % 16;
            srand(time(NULL));
            char color_string[20];
            sprintf_s(color_string, "color %c%c", R[Ra], 0);
            system(color_string);
            if (hours > 0)
            {
                
                cout << " ";
                timePrint(hours, v);
                cout << "**";
                theDots(v);
                timePrint(min, v);
                cout << "**";
                theDots(v);
                timePrint(sec, v);
                
            }
            else if (min > 0)
            {
                for (int i = 0; i < 15; i++)
                {
                   
                cout << " ";
                }
                timePrint(min, v);
                cout << "**";
                theDots(v);
                timePrint(sec, v);
                
            }
            
            else
            {
                for (int i = 0; i <= 28; i++)
                    cout << " ";
                timePrint(sec, v);
                
            }
            
            cout << endl;
        }
        for (int j = 0; j < 7; j++)
            cout << endl;
        if (times == 0)
            cout << '\a';
        Sleep(1000);
        times--;
        cout << times;
        system("CLS");

    }
    
    
	return 0;

}