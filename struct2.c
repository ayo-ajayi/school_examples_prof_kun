#include <stdio.h>
typedef struct{
	float h;
	float r;
}CYL;

float vol_CYL(CYL c);
CYL hei_CYL(CYL c);

int main(){
	CYL c1 = {3.4, 1.0}, c2 = {4.4, 1.5}, c3 = {6.3, 2.0};
	printf("vloume of c1 is: %f\n", vol_CYL(c1));
	printf("The new value of the height of c2 is: %f\n", hei_CYL(c2).h);
	return 0;
}

float vol_CYL(CYL c){
	return 3.142 * (c.r * c.r) * c.h;
}
CYL hei_CYL(CYL c){
	c.h = c.h * 2;
	return c;
}

/*
Write a program where you introduce a structure which can represent cylinder shape objects. A cylinder is defined by providing its height $h$ and the radius of its base circle $r$. The structure can be called "cylinder".

In main declare 3 cylinder type structures and initialize them.

Write a function which gets a cylinder structure and returns the volume of the cylinder. Write a second function which gets a structure and doubles its height.

Call the functions in main.
*/