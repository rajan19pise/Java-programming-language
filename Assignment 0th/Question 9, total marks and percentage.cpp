#include <stdio.h>
int main()
{
	int english=99;
	int maths=90;
	int marathi=89;
	int hindi=77;
	int science=100;
	int res1= english+maths+marathi+science+hindi;
	float res2= res1/500*100;
	printf("The total marks of the student is %d and the total percentage he has scored is %f", res1, res2);
}
