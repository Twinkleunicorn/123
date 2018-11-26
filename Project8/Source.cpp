#include <stdio.h>
#include <iostream>
#include<locale.h>
#include <math.h>

int main()
//
//{
//	setlocale(LC_All, "");
//
//	float x, b, e, c,y ,a;
//
//	x = (float)35 / 10;
//
//	b = (float)4 / 10;
//
//	e = (float)271 / 100;
//
//	a = (float)log(x) / log(10);
//
//	c = a * a + (float) pow(b*x,2);
//
//	y = (float)pow(e, 2 * x) + (float)pow(97 / 10, c);
//
//
//
//	
//	printf("Результат: %f\n", y);
//
//	system("pause");
//
//}
//
//{
//	setlocale(LC_ALL, "");
//
//	float x, k, a, e, y, b;
//
//	x = (float)13 / 10;
//
//	e = (float)271 / 100;
//
//	a = (float)log(x) / log(e);
//
//	b = (float)exp(2 * x) + (float)a*x;
//
//	y = (float)x*pow(a, 3) + (float)pow(b, 2);
//
//	printf("Результат: %f\n", y);
//
//	system("pause");
//
//
//
//}

//{
//	setlocale(LC_ALL, "");
//
//	float x, a,b, e, y, p;
//
//	x = (float)21 / 10;
//
//	p = 1;
//
//	e = (float)271 / 100;
//
//	a = (float)exp(sqrt(abs(x)));
//
//	b = (float)sin(pow(p,2))+pow(x,3);
//
//	y = (float)pow(a, 3) + (float)pow(b, 2);
//
//	printf("Результат: %f\n", y);
//
//	system("pause");
//
//
//
//}


//{
//	setlocale(LC_ALL, "");
//
//	float x, c , b, y, a;
//
//	c =9 ;
//
//	x = (float)852 / 100;
//
//	b = (float)x + pow(c, 2);
//
//	a = pow(abs(b + c), (1 / 3));
//
//
//	y = (float)pow(cos(b), 2) + (float)b*pow(cos(pow(a,2)), 4);
//
//	printf("Результат: %f\n", y);
//
//	system("pause");
//
//
//
//}

//{
//setlocale(LC_ALL, "");
//
//float x, t, b, y, a;
//
//t=2;
//
//x = (float)9 / 10;
//
//b = log(abs(x))/log(10);
//
//a = t*x+abs(sqrt(b));
//
//y = (float)pow(cos(a+pow(b,3)),3) ;
//
//printf("Результат: %f\n", y);
//
//system("pause");
//
//}

//{
//	setlocale(LC_ALL, "");
//
//	float x, e, b, y, c,a;
//
//	e = (float)271 / 100;
//
//
//	b=(float)95/10;
//
//	x = -8 ;
//
//	a = (float)sqrt(abs(x)) + (float)exp(sqrt(b));
//
//	c =(float)(log(a) / log(10)) + (float)pow(b, 2);
//
//
//	y = (float)pow(a,3)/cos(c);
//
//	printf("Результат: %f\n", y);
//
//	system("pause");
//
//}

//{
//  setlocale(LC_ALL," ");
//
//float k, H, M;
//
//printf("Введем секунды: ");
//scanf_s("%f", &k);
//
//M = k / 60;
//
//H = M / 60;
//
//printf("Минуты: %f\n", M);
//
//printf("Часы: %f\n", H);
//
//system("pause");
//
//}

//{
//  setlocale(LC_ALL,"");
//
//float a,b,x;
//
//printf("Введем : ");
//scanf_s("%f", &a);
//
//printf("Введем : ");
//scanf_s("%f", &b);
//
//x = (12 - b)*a / 2;
//
//printf("Корень: %f\n", x);
//
//
//system("pause");
//
//}

{
setlocale(LC_ALL, "");

float p, s,s2,s1, x;

printf("Прибыль : ");
scanf_s("%f", &p);

printf("Себестоимость : ");
scanf_s("%f", &s1);

s2 = s1 * 5 / 100;

s = s1 - s2;

x =p/s*100;

printf("Рентабельность: %f\n", x);


system("pause");

}
