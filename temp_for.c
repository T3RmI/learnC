#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

main(){

int fahr;

for(fahr=UPPER;fahr>LOWER;fahr-=STEP){
	printf("%d\t%6.2f\n",fahr,(5.0/9.0)*(fahr-32));
};

}
