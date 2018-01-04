#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "redpackets.h"

#define PROMPT_MSG "please input gross(double) max(double) min(double) number(int)"

int main(int argc, const char *argv[])
{

	double gross;
	double max;
	double min;
	int number;
	while(1){
		printf(PROMPT_MSG"\n");
		scanf("%lf %lf %lf %d",&gross,&max,&min,&number);

		if(max > gross || min > (gross-max)/(number-1)){
			printf("input is illegal\n");
			continue;
		}

		redPackets(gross, number, min, max);

	}



	return 0;
}
