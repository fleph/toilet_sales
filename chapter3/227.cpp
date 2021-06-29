//https://github.com/YinAoXiong/blog/blob/0b5c9346a9def3bcbf1e5c530a27c92dd0c7dc52/_posts/2017-3-10-%E8%B0%9C%E9%A2%98(Puzzle%20UVa227).md

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	//ifstream fin;
	//fin.open("data.txt");
	//cin.rdbuf(fin.rdbuf());
	//ofstream out;
	//out.open("data.out");
	//cout.rdbuf(out.rdbuf());

	char a[5][5];                    //二维数字表示拼图
	int key = 1,t=0;
	while (cin.get(a[0][0])&&a[0][0]!='Z')
	{
		if (++t>1)                   //用来控制输出中的空行，首行前和最后一行后无空行，输出用空行隔开
			cout << endl;
		int c = 0, d = 0;            //用来标记空白的位置
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (!i && !j)continue;
				cin.get(a[i][j]);
				if (a[i][j] == ' ')
					c = i, d = j;
			}
			cin.get();               //读取行尾的回车符
		}


		int i = 0;
		cout << "Puzzle #" << key++ <<':'<< endl;
		int flag = 0;                                          //标记是否遇到非法命令
		char s;
		while (cin.get(s) && s != '0')                           //模拟空格的移动，注意命令可能不在同一行
		{
			if (flag == 1 || s == '\n') continue;                
			switch (s)
			{
			case 'A': if (c - 1 < 0)
			{
				flag = 1;
				break;

			}
					  else
					  {
						  a[c][d] = a[c - 1][d];
						  a[c - 1][d] = ' ';
						  c -= 1;
						  break;
					  }
			case 'B': if (c + 1 > 4)
			{
				flag = 1;
				break;
			}
					  else
					  {
						  a[c][d] = a[c + 1][d];
						  a[c + 1][d] = ' ';
						  c += 1;
						  break;
					  }
			case 'L': if (d - 1 < 0)
			{
				flag = 1;
				break;
			}
					  else
					  {
						  a[c][d] = a[c][d - 1];
						  a[c][d - 1] = ' ';
						  d -= 1;
						  break;
					  }
			case 'R': if (d + 1 > 4)
			{
				flag = 1;
				break;
			}
					  else
					  {
						  a[c][d] = a[c][d + 1];
						  a[c][d + 1] = ' ';
						  d += 1;
						  break;
					  }
			default:              //遇到回车或者指定命令外的字母也为非法命令
				flag = 1;
				break;
			}

		}
		cin.get();              //去掉零后面的回车符

		if (flag)
		{
			cout << "This puzzle has no final configuration." << endl;
		}
		else
		{
			for (int i = 0; i < 5; ++i)
			{
				for (int j = 0; j < 4; ++j)
				{
					cout << a[i][j]<<' ';
				}
				cout <<a[i][4]<< endl;                              
			}
		}
	}
	return 0;

}
