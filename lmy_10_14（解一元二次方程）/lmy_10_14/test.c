#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d, e, delta;
	printf("请输入函数的a、b、c值\n");
	scanf_s("%f%f%f", &a, &b, &c);
	if (a == 0 && b == 0)
		printf("该函数不存在\n");
	if (a == 0 && b != 0)
	{
		d = c / b;
		printf("x1=x2=%f\n", d);
	}
	if (a != 0)
	{
		delta = b * b - 4 * a * c;
		d = (-b - sqrt(delta)) / 2 * a;
		e = (-b + sqrt(delta)) / 2 * a;
		if (delta < 0)
			printf("该函数无解\n");
		if (delta == 0)
			printf("该函数解为x1=x2=%f\n", d);
		if (delta > 0)
			printf("该函数解为x1=%f,x2=%f\n", d, e);
	}
	return 0;
}

