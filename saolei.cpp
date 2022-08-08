#include"saolei.h"
ExMessage m;
void init_saolei(char ch[][dif], char ch1[][dif])
{
	setlinecolor(YELLOW);
	for (int i = 1; i <= dif; i++)
	{
		line(0, i * 80, dif * 80, i * 80);
	}
	for (int i = 1; i <= dif; i++)
	{
		line(i * 80, 0, i * 80, dif * 80);
	}
	srand(time(NULL));
	for (int i = 0; i < dif; i++)
	{
		for (int j = 0; j < dif; j++)
		{
			ch[i][j] = ' ';
			ch1[i][j] = ' ';
		}
	}
	for (int k = 1; k <= 8; k++)
	{
	in_rand:
		int i = rand() % 8;
		int j = rand() % 8;
		if (ch[i][j] == ' ')
		{
			ch[i][j] = '*';
		}
		else
		{
			goto in_rand;
		}
	}
}
int in_saolei(char ch[][dif], char ch1[][dif])
{
	while (1)
	{
		int a = -1, b = -1;
	Scanf:
		m = getmessage(EM_MOUSE | EM_KEY);
		a = m.y / 80;
		b = m.x / 80;
		if (ch[a][b] != ' ' && ch[a][b] != '*')
		{
			goto Scanf;
		}
		else
		{
			if (m.message == WM_RBUTTONDOWN)
			{
				if ((ch[a][b] == ' ' || ch[a][b] == '*') && ch1[a][b] != '#')
				{
					ch1[a][b] = '#';
					outtextxy(m.x / 80 * 80 + 35, m.y / 80 * 80 + 35, ch1[a][b]);
				}
				else if ((ch[a][b] == ' ' || ch[a][b] == '*') && ch1[a][b] == '#')
				{
					ch1[a][b] = ' ';
					wchar_t s[] = _T("  ");
					outtextxy(m.x / 80 * 80 + 35, m.y / 80 * 80 + 35, s);
				}
				goto Scanf;
			}
			else if (ch[a][b] != '*' && ch1[a][b] != '#' && m.message == WM_LBUTTONDOWN)
			{
				if (a == 0 && b == 0)
				{
					int i = 0;
					if (ch[a][b + 1] == '*')
					{
						i++;
					}
					if (ch[a + 1][b] == '*')
					{
						i++;
					}
					if (ch[a + 1][b + 1] == '*')
					{
						i++;
					}
					ch[a][b] = i + 48;
				}
				else if (a == 0 && b > 0 && b < dif)
				{
					int i = 0;
					if (ch[a][b + 1] == '*')
					{
						i++;
					}
					if (ch[a][b - 1] == '*')
					{
						i++;
					}
					if (ch[a + 1][b] == '*')
					{
						i++;
					}
					if (ch[a + 1][b - 1] == '*')
					{
						i++;
					}
					if (ch[a + 1][b + 1] == '*')
					{
						i++;
					}
					ch[a][b] = i + 48;
				}
				else if (a == 0 && b == dif)
				{
					int i = 0;
					if (ch[a][b - 1] == '*')
					{
						i++;
					}
					if (ch[a + 1][b] == '*')
					{
						i++;
					}
					if (ch[a + 1][b - 1] == '*')
					{
						i++;
					}
					ch[a][b] = i + 48;
				}
				else if (a > 0 && a < dif && b == 0)
				{
					int i = 0;
					if (ch[a - 1][b] == '*')
					{
						i++;
					}
					if (ch[a + 1][b] == '*')
					{
						i++;
					}
					if (ch[a][b + 1] == '*')
					{
						i++;
					}
					if (ch[a - 1][b + 1] == '*')
					{
						i++;
					}
					if (ch[a + 1][b + 1] == '*')
					{
						i++;
					}
					ch[a][b] = i + 48;

				}
				else if (a > 0 && a < dif && b>0 && b < dif)
				{
					int i = 0;
					if (ch[a][b + 1] == '*')
					{
						i++;
					}
					if (ch[a][b - 1] == '*')
					{
						i++;
					}
					if (ch[a + 1][b] == '*')
					{
						i++;
					}
					if (ch[a - 1][b] == '*')
					{
						i++;
					}
					if (ch[a - 1][b - 1] == '*')
					{
						i++;
					}
					if (ch[a - 1][b + 1] == '*')
					{
						i++;
					}
					if (ch[a + 1][b - 1] == '*')
					{
						i++;
					}
					if (ch[a + 1][b + 1] == '*')
					{
						i++;
					}
					ch[a][b] = i + 48;
				}
				else if (a > 0 && a < dif && b == dif)
				{
					int i = 0;
					if (ch[a - 1][b] == '*')
					{
						i++;
					}
					if (ch[a][b - 1] == '*')
					{
						i++;
					}
					if (ch[a + 1][b] == '*')
					{
						i++;
					}
					if (ch[a - 1][b - 1] == '*')
					{
						i++;
					}
					if (ch[a + 1][b - 1] == '*')
					{
						i++;
					}
					ch[a][b] = i + 48;
				}
				else if (a == dif && b == 0)
				{
					int i = 0;
					if (ch[a][b + 1] == '*')
					{
						i++;
					}
					if (ch[a - 1][b] == '*')
					{
						i++;
					}
					if (ch[a - 1][b + 1] == '*')
					{
						i++;
					}
					ch[a][b] = i + 48;
				}
				else if (a == dif && b > 0 && b < dif)
				{
					int i = 0;
					if (ch[a][b + 1] == '*')
					{
						i++;
					}
					if (ch[a][b - 1] == '*')
					{
						i++;
					}
					if (ch[a - 1][b] == '*')
					{
						i++;
					}
					if (ch[a = 1][b - 1] == '*')
					{
						i++;
					}
					if (ch[a - 1][b + 1] == '*')
					{
						i++;
					}
					ch[a][b] = i + 48;
				}
				else if (a == dif && b == dif)
				{
					int i = 0;
					if (ch[a - 1][b] == '*')
					{
						i++;
					}
					if (ch[a][b - 1] == '*')
					{
						i++;
					}
					if (ch[a - 1][b - 1] == '*')
					{
						i++;
					}
					ch[a][b] = i + 48;
				}
				outtextxy(m.x / 80 * 80 + 35, m.y / 80 * 80 + 35, ch[a][b]);
			}
			else if (ch[a][b] == '*' && m.message == WM_LBUTTONDOWN)
			{
				wchar_t s[10];
				if (true == InputBox(s, 10, L"游戏结束,是否重试？", NULL, NULL, 0, 0, false))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		int k = 0, l = 0;
		for (int i = 0; i < dif; i++)
		{
			for (int j = 0; j < dif; j++)
			{
				if (ch[i][j] == ' ')
				{
					k++;
				}
				else if (ch1[i][j] == '#')
				{
					l++;
				}
			}
		}
		if (k == 0 && l == 8)
		{
			wchar_t s[10];
			if (true == InputBox(s, 10, L"游戏结束,是否重试？", NULL, NULL, 0, 0, false))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
}
int saolei(void)
{
	char ch[dif][dif]{};
	char ch1[dif][dif]{};
	init_saolei(ch, ch1);
	int r = 0;
	r = in_saolei(ch, ch1);
	cleardevice();
	return r;
}