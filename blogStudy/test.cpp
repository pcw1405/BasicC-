#include <stdio.h>

int main(){

int i = 10, b = 20, c = 30;
    // 1st 표현식
	i = b, c;
	printf("%i\n", i);
    // 2nd 표현식
	(i = b), c;
	printf("%i\n", i);
    // 3rd 표현식
	i = (b, c);
	printf("%i\n", i);  

    return 0;
}