#include <stdio.h>
#include <math.h>

class giaipt
{
public:
	int a, b, c;
	float delta = (b * b) - (4 * a*c);
	float x1 = (-b + sqrt(delta)) / (2 * a);
	float x2 = (-b - sqrt(delta)) / (2 * a);
	giaipt()
	{}

	giaipt(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void timnghiem()
	{
		if (delta < 0)
			printf("Phuong trinh vo nghiem");
		if (delta == 0)
			printf("Phuong trinh co nghiem kep x = %.4f", x1);
		if (delta > 0)
			printf("Phuong trinh co 2 nghiem x1 = %.4f va x2 = %.4f", x1, x2);
	}
};

void main()
{

}