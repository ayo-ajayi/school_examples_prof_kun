#include <stdio.h>
#include <math.h>

//template for vectors in 2D
typedef struct{
    float x;
    float y;
}VEC2D;

//N particle system
typedef struct{
    float mass;
    VEC2D r;
}PARTICLE;

void print_VEC(VEC2D v);
float length_VEC(VEC2D v);
float dot_VEC(VEC2D v1, VEC2D v2);
VEC2D centre_of_mass(PARTICLE p[], int PARTICLE_num);
float dist_PART(PARTICLE p1, PARTICLE p2);
PARTICLE greatest_PART(PARTICLE p[], int n);

int main()
{
    FILE *in;
    VEC2D v1 ={2.3, 5.6} , v2={3.5, 1.2}, v3={6.7, 4.4};
    PARTICLE p[10], g;
    int i = 0, PARTICLE_num;

    in = fopen("numbers.txt", "r");
    print_VEC(v1);
    printf("The length of vector v2 is: %.3f\n", length_VEC(v2));
    printf("The dot product of v1 and v2 is: %.3f\n", dot_VEC(v1, v2));
    while(!feof(in)){
        fscanf(in, "%f %f %f\n", &p[i].mass, &p[i].r.x, &p[i].r.y);
        printf("%f %f %f\n", p[i].mass, p[i].r.x, p[i].r.y);
        i++;
    }
    PARTICLE_num = i;
    printf("The center of mass of the system is: ");
    print_VEC(centre_of_mass(p, PARTICLE_num));
    int k = 0;
    while(k<10){
      printf("\nthe values of distances from index 0 are: %f\n", dist_PART(p[0], p[k]));
      k++;
    }
		g = greatest_PART(p, 10);
		printf("The particle with greatest distance from particle[0] is: (%.2f, %.2f) of mass %.2f\n", g.r.x,  g.r.y, g.mass);
	 

    fclose(in);
    return 0;
}

//function to print out structs
void print_VEC(VEC2D v){
    printf("\n(%.2f, %.2f)\n", v.x, v.y);
    return;
}

//func to print the length of a vector
float length_VEC(VEC2D v){
    return sqrt( (v.x*v.x) + (v.y*v.y) );
}

//func to calc dot product of 2 vectors
float dot_VEC(VEC2D v1, VEC2D v2){
    float r = v1.x*v2.x + v1.y*v2.y;
    return r;
}

//func to calc centre of mass
VEC2D centre_of_mass(PARTICLE p[], int PARTICLE_num){
    VEC2D rc = {0.0, 0.0};
    float t_mass = 0;
    int i;
    for(i=0; i<PARTICLE_num; i++){
        t_mass= t_mass + p[i].mass;
        rc.x = rc.x + (p[i].r.x * p[i].mass); //rc.x += (p[i].r.x * p[i].mass);
        rc.y = rc.y + (p[i].r.y * p[i].mass); //rc.y += (p[i].r.y * p[i].mass);
    }
    rc.x /= t_mass;
    rc.y /= t_mass;
    return rc;
}


float dist_PART(PARTICLE p1, PARTICLE p2){
	float d;
	d = sqrt(pow((p2.r.y - p1.r.y), 2) + pow((p2.r.y - p1.r.y), 2));
	return d;
}


PARTICLE greatest_PART(PARTICLE p[], int n){
	int i = 1;
	float g = 0.00;
  PARTICLE g_PART;
	while(i < n){
		if(dist_PART(p[0], p[i]) > g) g = dist_PART(p[0], p[i]);
	  i++;	
	}
  printf("The greatest distance is: %f\n", g);
	i = 0;
	while(i<n){
	if(dist_PART(p[0], p[i]) == g) g_PART= p[i];
		i++;
	}
	return g_PART;
}




/*

Extend the program on particles:

- add a function which gets two particles and returns their distance d, where d is defined as

d=sqrt((x2−x1)2+(y2−y1)2)

Find that particle in the array of particles which has the greatest distance from particle index 0! Write out the results on the screen.*/
