# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main ( int argc , char **argv){
	if (argc != 3){
		printf ("Error, please neter two arguments for the no. to find sqrt and precision you wnat");
		exit(1);
	}
	
	double x =  atof (argv [1]);
	 double epsilon = atof (argv [2]);
	if (x<=0 && epsilon <= 0 ){
		printf ("invalid inputs");
		exit (1);
	}
	 int power = 0;
    while (x < 0.5) {
        x = x * 4;
        power--;
    }
    while (x >= 2.0) {
        x = x / 4;
        power++;
    }
	
	double a= x, aprev, c = x-1;
	do{
		aprev = a ;
		a = a - a*c/2;
		c = c*c * (c-3)/4;
	} while (fabs(aprev - a) > epsilon);
	printf ("square root of %f is nearly equal to %f", x * pow(4, power), a * pow(2 , power));
	printf("this is a practice");
	return 0 ;
}
	
	
	
		