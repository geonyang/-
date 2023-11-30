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

	printf("안녕하세요. 건키네이터 입니다. \n 질문에 yes면 y, no면 n을 입력해 주세요. \n 이제 시작합니다.\n");
	printf("남성입니까?\n");
	scanf( "%c", &a);
	getchar();
	if (a == 'y')
	{
		printf("\n안경을 썼습니까?\n");
		scanf("%c", &b);
		getchar();
		if (b == 'y')
		{
			printf("\n나이가 60세 이상입니까?\n");
			scanf("%c", &c);
			getchar();
			if (c == 'y')
			{
				printf("\n정년퇴직을 하셨습니까?\n");
				scanf("%c", &d);
				getchar();
				if (d == 'y')
				{
					printf("\n외부인입니까?\n");
					scanf("%c", &e);
					getchar();
					if (e == 'n')
					{
						printf("\n교과를 담당하고 있습니까?\n");
						scanf("%c", &f);
						getchar();
						if (f == 'y')
						{
							printf("\n정답은 김두환 과학선생님입니다.\n");

						}
						else if (f == 'n')
						{
							printf("\n정답은 김관중 교장선생님입니다.\n");
						}

					}
					else if (e == 'y')
					{
						printf("정답은 김희수 박사 및 건양재단 창립자 및 건양대학교 설립자님입니다.\n");
					}

				}
				else if (d == 'n')
				{
					printf("\n정답은 김태식 교감선생님입니다.\n");
				}

			}
			else if (c == 'n')
			{
				printf("\n1학년 수업을 하시나요?\n");
				scanf("%c",&g);
				getchar();
				if (g == 'y')
				{
					printf("\n야구 구단 키움을 사랑하나요?\n");
					scanf("%c", &h);
					getchar();
					if (h == 'y')
					{
						printf("\n정답은 이윤석 국어선생님입니다.\n");

					}
					else if (h == 'n')
					{
						printf("\n키가 180이상인가요?\n");
						scanf("%c", &i);
						getchar();
						if (i == 'y')
						{
							printf("\n정답은 민혜찬 과학선생님입니다.\n");

						}
						else if (i == 'n')
						{
							printf("\n정답은 이석주 음악선생님입니다.\n");
						}
					}

				}
				else if (g == 'n')
				{
					printf("\n정답은 노형래 수학선생님입니다.\n");
				}
			}
		}
		else if (b == 'n')
		{
			printf("\n40세 이하신가요?\n");
			scanf("%c", &j);
			getchar();
			if (j == 'y')
			{
				printf("\n주요과목(국, 수, 영) 선생님 인가요?\n");
				scanf("%c", &k);
				getchar();
				if (k == 'y')
				{
					printf("\n자칭 신장 180cm인가요?\n");
					scanf("%c", &l);
					getchar();
					if (l == 'y')
					{
						printf("\n정답은 한선린 수학선생님입니다.\n");

					}
					else if (l == 'n')
					{
						printf("\n테슬라를 애용하나요?\n");
						scanf("%c", &m);
						getchar();
						if (m == 'y')
						{
							printf("\n정답은 윤상봉 영어선생님입니다.\n");

						}
						else if (m == 'n')
						{
							printf("\n정답은 정재희 국어선생님입니다.\n");
						}
					}

				}
				else if (k == 'n')
				{
					printf("\n애니시청을 좋아하시나요?\n");
					scanf("%c", &n);
					getchar();
					if (n == 'y')
					{
						printf("\n정답은 신동권 사회선생님입니다.\n");

					}
					else if (n == 'n')
					{
						printf("\n군산대 최고 아웃풋?\n");
						scanf("%c", &o);
						getchar();
						if (o == 'y')
						{
							printf("\n정답은 박성우 정보선생님입니다.\n");

						}
						else if (o == 'n')
						{
							printf("\n책을 출판하셨나요?\n");
							scanf("%c", &p);
							getchar();
							if (p == 'y')
							{
								printf("\n정답은 이병우 윤리선생님입니다.\n");

							}
							else if (p == 'n')
							{
								printf("\n기혼입니까?\n");
								scanf("%c", &q);
								getchar();
								if (q == 'y')
								{
									printf("\n정답은 김화랑 과학선생님입니다.\n");

								}
								else if (q == 'n')
								{
									printf("\n정답은 박인혁 체육선생님입니다.\n");
								}
							}
						}
					}
				}

			}
			else if (j == 'n')
			{
				printf("\n운동을 하십니까?\n");
				scanf("%c", &r);
				getchar();
				if (r == 'y')
				{
					printf("\n정답은 박대규 수학선생님입니다.\n");

				}
				else if (r == 'n')
				{
					printf("\n정답은 이홍재 진로선생님입니다.\n");
				}
			}
		}
	}
	else if(a == 'n')
	{
		printf("\n전자기기 압수시 졸업선물로 주시나요?\n");
		scanf("%c", &s);
		getchar();
		if (s == 'y')
		{
				printf("\n정답은 유재희 일본어선생님입니다.\n");
		}
		else if (s == 'n')
		{
			printf("\n주요과목(국, 수, 영) 선생님 인가요?\n");
			scanf("%c", &t);
			getchar();
			if (t == 'y')
			{
				printf("\n1학년 수업을 하시나요?\n");
				scanf("%c", &u);
				getchar();
				if (u == 'y')
				{
					printf("\n다람쥐를 닮으셨나요?\n");
					scanf("%c", &v);
					getchar();
					if (v == 'y')
					{
						printf("\n정답은 강나영 수학선생님입니다.\n");

					}
					else if (v == 'n')
					{
						printf("\n기혼이신가요?\n");
						scanf("%c", &w);
						getchar();
						if (w == 'y')
						{
							printf("\n영어선생님입니까?\n");
							scanf("%c", &x);
							getchar();
							if (x == 'y')
							{
								printf("\n마이크를 사용하시나요?\n");
								scanf("%c", &y);
								getchar();
								if (y == 'y')
								{
									printf("\n정답은 황태연 영어선생님입니다.\n");

								}
								else if (y == 'n')
								{
									printf("\n정답은 홍연수 영어선생님입니다.\n");
								}

							}
							else if (x == 'n')
							{
								printf("\n정답은 강하니 국어선생님입니다.\n");
							}

						}
						else if (w == 'n')
						{
							printf("\n정답은 이보람 국어선생님입니다.\n");
						}
					}

				}
				else if (u == 'n')
				{
					printf("\n정답은 조보경 영어선생님입니다.\n");
				}

			}
			else if (t == 'n')
			{
				printf("\n사관학교출신인가요?\n");
				scanf("%c", &z);
				getchar();
				if (z == 'y')
				{
					printf("\n정답은 이미례 보건선생님입니다.\n");

				}
				else if (z == 'n')
				{
					printf("\n비둘기단의 단주인가요?\n");
					scanf("%c", &aa);
					getchar();
					if (aa == 'y')
					{
						printf("\n정답은 강아람 역사선생님입니다.\n");

					}
					else if (aa == 'n')
					{
						printf("\n단발이신가요?\n");
						scanf("%c", &bb);
						getchar();
						if (bb == 'y')
						{
							printf("\n정답은 김은지 과학선생님입니다.\n");

						}
						else if (bb == 'n')
						{
							printf("\n정답은 이윤숙 위클래스선생님입니다.\n");
						}
					}
				}
			}
		}
	}

}