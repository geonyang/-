#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void main()
{
	char a = 'Y';
	char b = 'Y';
	char c = 'Y';
	char d = 'Y';
	char e = 'Y';
	char f = 'Y';
	char g = 'Y';
	char h = 'Y';
	char i = 'Y';
	char j = 'Y';
	char k = 'Y';
	char l = 'Y';
	char m = 'Y';
	char n = 'Y';
	char o = 'Y';
	char p = 'Y';
	char q = 'Y';
	char r = 'Y';
	char s = 'Y';
	char t = 'Y';
	char u = 'Y';
	char v = 'Y';
	char w = 'Y';
	char x = 'Y';
	char y = 'Y';
	char z = 'Y';
	char aa = 'Y';
	char bb = 'Y';

	printf("�ȳ��ϼ���. ��Ű������ �Դϴ�. \n ������ yes�� y, no�� n�� �Է��� �ּ���. \n ���� �����մϴ�.\n");
	printf("�����Դϱ�?\n");
	scanf( "%c", &a);
	getchar();
	if (a == 'y')
	{
		printf("\n�Ȱ��� ����ϱ�?\n");
		scanf("%c", &b);
		getchar();
		if (b == 'y')
		{
			printf("\n���̰� 60�� �̻��Դϱ�?\n");
			scanf("%c", &c);
			getchar();
			if (c == 'y')
			{
				printf("\n���������� �ϼ̽��ϱ�?\n");
				scanf("%c", &d);
				getchar();
				if (d == 'y')
				{
					printf("\n�ܺ����Դϱ�?\n");
					scanf("%c", &e);
					getchar();
					if (e == 'n')
					{
						printf("\n������ ����ϰ� �ֽ��ϱ�?\n");
						scanf("%c", &f);
						getchar();
						if (f == 'y')
						{
							printf("\n������ ���ȯ ���м������Դϴ�.\n");

						}
						else if (f == 'n')
						{
							printf("\n������ ����� ���弱�����Դϴ�.\n");
						}

					}
					else if (e == 'y')
					{
						printf("������ ����� �ڻ� �� �Ǿ���� â���� �� �Ǿ���б� �����ڴ��Դϴ�.\n");
					}

				}
				else if (d == 'n')
				{
					printf("\n������ ���½� �����������Դϴ�.\n");
				}

			}
			else if (c == 'n')
			{
				printf("\n1�г� ������ �Ͻó���?\n");
				scanf("%c",&g);
				getchar();
				if (g == 'y')
				{
					printf("\n�߱� ���� Ű���� ����ϳ���?\n");
					scanf("%c", &h);
					getchar();
					if (h == 'y')
					{
						printf("\n������ ������ ��������Դϴ�.\n");

					}
					else if (h == 'n')
					{
						printf("\nŰ�� 180�̻��ΰ���?\n");
						scanf("%c", &i);
						getchar();
						if (i == 'y')
						{
							printf("\n������ ������ ���м������Դϴ�.\n");

						}
						else if (i == 'n')
						{
							printf("\n������ �̼��� ���Ǽ������Դϴ�.\n");
						}
					}

				}
				else if (g == 'n')
				{
					printf("\n������ ������ ���м������Դϴ�.\n");
				}
			}
		}
		else if (b == 'n')
		{
			printf("\n40�� ���ϽŰ���?\n");
			scanf("%c", &j);
			getchar();
			if (j == 'y')
			{
				printf("\n�ֿ����(��, ��, ��) ������ �ΰ���?\n");
				scanf("%c", &k);
				getchar();
				if (k == 'y')
				{
					printf("\n��Ī ���� 180cm�ΰ���?\n");
					scanf("%c", &l);
					getchar();
					if (l == 'y')
					{
						printf("\n������ �Ѽ��� ���м������Դϴ�.\n");

					}
					else if (l == 'n')
					{
						printf("\n�׽��� �ֿ��ϳ���?\n");
						scanf("%c", &m);
						getchar();
						if (m == 'y')
						{
							printf("\n������ ����� ��������Դϴ�.\n");

						}
						else if (m == 'n')
						{
							printf("\n������ ������ ��������Դϴ�.\n");
						}
					}

				}
				else if (k == 'n')
				{
					printf("\n�ִϽ�û�� �����Ͻó���?\n");
					scanf("%c", &n);
					getchar();
					if (n == 'y')
					{
						printf("\n������ �ŵ��� ��ȸ�������Դϴ�.\n");

					}
					else if (n == 'n')
					{
						printf("\n����� �ְ� �ƿ�ǲ?\n");
						scanf("%c", &o);
						getchar();
						if (o == 'y')
						{
							printf("\n������ �ڼ��� �����������Դϴ�.\n");

						}
						else if (o == 'n')
						{
							printf("\nå�� �����ϼ̳���?\n");
							scanf("%c", &p);
							getchar();
							if (p == 'y')
							{
								printf("\n������ �̺��� �����������Դϴ�.\n");

							}
							else if (p == 'n')
							{
								printf("\n��ȥ�Դϱ�?\n");
								scanf("%c", &q);
								getchar();
								if (q == 'y')
								{
									printf("\n������ ��ȭ�� ���м������Դϴ�.\n");

								}
								else if (q == 'n')
								{
									printf("\n������ ������ ü���������Դϴ�.\n");
								}
							}
						}
					}
				}

			}
			else if (j == 'n')
			{
				printf("\n��� �Ͻʴϱ�?\n");
				scanf("%c", &r);
				getchar();
				if (r == 'y')
				{
					printf("\n������ �ڴ�� ���м������Դϴ�.\n");

				}
				else if (r == 'n')
				{
					printf("\n������ ��ȫ�� ���μ������Դϴ�.\n");
				}
			}
		}
	}
	else if(a == 'n')
	{
		printf("\n���ڱ�� �м��� ���������� �ֽó���?\n");
		scanf("%c", &s);
		getchar();
		if (s == 'y')
		{
				printf("\n������ ������ �Ϻ�������Դϴ�.\n");
		}
		else if (s == 'n')
		{
			printf("\n�ֿ����(��, ��, ��) ������ �ΰ���?\n");
			scanf("%c", &t);
			getchar();
			if (t == 'y')
			{
				printf("\n1�г� ������ �Ͻó���?\n");
				scanf("%c", &u);
				getchar();
				if (u == 'y')
				{
					printf("\n�ٶ��㸦 �����̳���?\n");
					scanf("%c", &v);
					getchar();
					if (v == 'y')
					{
						printf("\n������ ������ ���м������Դϴ�.\n");

					}
					else if (v == 'n')
					{
						printf("\n��ȥ�̽Ű���?\n");
						scanf("%c", &w);
						getchar();
						if (w == 'y')
						{
							printf("\n��������Դϱ�?\n");
							scanf("%c", &x);
							getchar();
							if (x == 'y')
							{
								printf("\n����ũ�� ����Ͻó���?\n");
								scanf("%c", &y);
								getchar();
								if (y == 'y')
								{
									printf("\n������ Ȳ�¿� ��������Դϴ�.\n");

								}
								else if (y == 'n')
								{
									printf("\n������ ȫ���� ��������Դϴ�.\n");
								}

							}
							else if (x == 'n')
							{
								printf("\n������ ���ϴ� ��������Դϴ�.\n");
							}

						}
						else if (w == 'n')
						{
							printf("\n������ �̺��� ��������Դϴ�.\n");
						}
					}

				}
				else if (u == 'n')
				{
					printf("\n������ ������ ��������Դϴ�.\n");
				}

			}
			else if (t == 'n')
			{
				printf("\n����б�����ΰ���?\n");
				scanf("%c", &z);
				getchar();
				if (z == 'y')
				{
					printf("\n������ �̷̹� ���Ǽ������Դϴ�.\n");

				}
				else if (z == 'n')
				{
					printf("\n��ѱ���� �����ΰ���?\n");
					scanf("%c", &aa);
					getchar();
					if (aa == 'y')
					{
						printf("\n������ ���ƶ� ���缱�����Դϴ�.\n");

					}
					else if (aa == 'n')
					{
						printf("\n�ܹ��̽Ű���?\n");
						scanf("%c", &bb);
						getchar();
						if (bb == 'y')
						{
							printf("\n������ ������ ���м������Դϴ�.\n");

						}
						else if (bb == 'n')
						{
							printf("\n������ ������ ��Ŭ�����������Դϴ�.\n");
						}
					}
				}
			}
		}
	}

}