#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {

	IShape* shape[2];

	shape[0] = new Circle;
	shape[1] = new Rectangle;

	printf("‰~‚Ì”¼Œa:4\n’ZŒ`‚Ì’ê•Ó:2\n’ZŒ`‚Ì‚‚³:3\n");

	for (int i = 0; i < 2; i++)
		shape[i]->Size();


	printf("\n");

	for (int i = 0; i < 2; i++)
		shape[i]->Draw();

	return 0;
}