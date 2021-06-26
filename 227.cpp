#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
int wrong = 0;
int first=1;
int err()
{
	/*
	if(first!=1)
		printf("\n");
	else
		first=0;
		*/
	if (wrong == 1)
		return 0;
	else
	{
		printf("This puzzle has no final configuration.\n");
		wrong = 1;
		return 1;
	}
}
int main()
{
	int count = 0;
	
	while (1)
	{
		int column=0,row=0;
		char s[10][10] = {0};
		char operation='\0';
		for (int i = 0; i < 5; i++)
		{
			fgets(s[i], 10, stdin);
			if (s[0][0] == 'Z')
				//system("PAUSE");
				return 0;
			//printf("r:%s\n", s[i]);
		}
			if (s[0][0] == 'Z')
				//system("PAUSE");
				return 0;
			//find the space
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					//printf("%c ", s[i][j]);
					if (s[i][j] == 32)
					{
						column = i;
						row = j;
					}	
				}
			}
			//
			if(first!=1)
					printf("\n");
				else
					first=0;
			printf("Puzzle #%d:\n", ++count);
			//printf("1/c,r=%d %d\n", column, row);
		start:
			scanf("%c", &operation);
			while (operation != '0')
			{
				/*if (wrong == 1)
				{
					getchar();
					continue;
				}
				*/
				if (operation == 'A')
				{
					if (column > 0)
					{
						s[column][row] = s[column - 1][row];
						s[column - 1][row] = 32;
						column--;
						//printf("A/c,r=%d %d\n", column, row);
					}
					else
					{
						err();
						goto start;
					}
				}
				else if(operation=='B')
				{ 
					if (column < 4)
					{
						s[column][row] = s[column+1][row ];
						s[column+1][row ] = 32;
						column++;
						//printf("B/c,r=%d %d\n", column, row);
					}
					else
					{
						err();
						goto start;
					
					}
				}
				else if(operation=='L')
				{ 
					if (row > 0)
					{
						s[column][row] = s[column ][row-1];
						s[column ][row-1] = 32;
						row--;
						//printf("L/c,r=%d %d\n", column, row);
					}
					else
					{
						err();
						goto start;
						
					}
				}
				else if (operation == 'R')
				{
					if (row < 4)
					{
						s[column][row] = s[column ][row+1];
						s[column ][row+1] = 32;
						row++;
						//printf("R/c,r=%d %d\n", column, row);
					}
					else
					{
						err();
						goto start;
						
					}
				}
				else if (operation == '\n')
				{
					scanf("%c", &operation);
					continue;
				}
				else
				{
					err();
					goto start;
						
				}
				scanf("%c", &operation);
			}
			getchar();
			if (wrong == 0)
			{
				
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						if (j == 4)
							printf("%c\n", s[i][j]);
						else
							printf("%c ", s[i][j]);
					}
				}

				//printf("\n");
			}
			wrong = 0;
	}
	//system("PAUSE");
	return 0;
}