#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("%s is a thing and %s is a thing too.\n", "balloon", "apple");
/*
"%s" is only for strings.
*/

    printf("I drinked %d liters of water yesterday.\n", 4);
/*
"%d" is only for decimals (numbers).
*/

    printf("The pi number starts as %f.\n", 3.141592);
    printf("The pi number starts as %.2f.\n", 3.141592);//"%.2f" that . 2 means after the dot it will only show up first 2 numbers.
    printf("The pi number starts as %.15f.\n", 3.141592653589793);
/*
"%f" is for floats (3.14, 5.12, 108.475654123 etc.)
Only first 6 numbers will show up after the dot (34.abcdef).
*/
}
/*
23.01.2018
Last episode is 6th one.
Watch the 7th one.
*/
