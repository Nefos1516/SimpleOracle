#include <stdio.h>
#include <time.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "Rus");
	time_t rawtime;
	time (&rawtime);
	struct tm * bday;
	int d, m, y;
	printf ("����� ���� ��������:\n");
	scanf ("%i.%i.%i", &d, &m, &y);
	int v=y%4;
	if (d<=31 && d>=1 && m<=12 && m>=1 && y>=1970)
	{ if (d==29 && m==2 && v>0)
		{
			printf ("��� ����� ����!");
		}
		else
		{
		
			bday=localtime (&rawtime);
			bday->tm_mday=d;
			bday->tm_mon=m-1;
			bday->tm_year=y-1900;
			long long int x=difftime(rawtime, mktime(bday));
			if (x>=0)
			{
				x=x/(60*60*24);
				printf ("���� �������: %d\n", x);
				if (v>0)
				{
					printf ("�� ������� � ������������ ��� \n");
				}
				else
				{
					printf ("�� ������� � ���������� ���\n");
				}
				if (bday->tm_yday<=18 || bday->tm_yday>=355)
				{
					printf ("�� ������� �� ����� �������");
				}
				else if (bday->tm_yday>=19 && bday->tm_yday<=49)
				{
					printf ("�� ������� �� ����� �������");
				}
				else if (bday->tm_yday>=50 && bday->tm_yday<=78)
				{
					printf ("�� ���� (� � ����) �� ����� �������");
				}
				else if (bday->tm_yday>=79 && bday->tm_yday<=109)
				{
					printf ("�� ���� �� ����� �������");
				}
				else if (bday->tm_yday>=110 && bday->tm_yday<=139)
				{
					printf ("�� ����� �� ����� �������");
				}
				else if (bday->tm_yday>=140 && bday->tm_yday<=170)
				{
					printf ("�� �������� �� ����� �������");
				}
				else if (bday->tm_yday>=171 && bday->tm_yday<=202)
				{
					printf ("�� ��� (� ����) �� ����� �������");
				}
				else if (bday->tm_yday>=203 && bday->tm_yday<=233)
				{
					printf ("�� ��� �� ����� �������");
				}
				else if (bday->tm_yday>=234 && bday->tm_yday<=264)
				{
					printf ("�� ���� �� ����� �������");
				}
				else if (bday->tm_yday>=265 && bday->tm_yday<=294)
				{
					printf ("�� ���� �� ����� �������");
				}
				else if (bday->tm_yday>=295 && bday->tm_yday<=325)
				{
					printf ("�� �������� �� ����� �������");
				}
				else if (bday->tm_yday>=326 && bday->tm_yday<=354)
				{
					printf ("�� ������� �� ����� �������");
				}
					
			}
			else
			{
				printf ("�� ���� �� �������!\n");
			}
			
		}
	}
	else
	{
		printf ("���������� ���������� �������� ������");
	}
}
