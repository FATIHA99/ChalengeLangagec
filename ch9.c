#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	



 float x1,y1,x2,y2,distance=0;
 printf("entrer les coordonner de la premiers point (M) \n");
 scanf("%f %f",&x1,&y1);
  printf("entrer les coordonner de la deuxieme  point  (N)\n");
 scanf("%f %f",&x2,&y2);

//// distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
 printf("la distance entre M(%f,%f) et N(%f,%f) est %f \n",x1,y1,x2,y2,distance);

return 0;

}
