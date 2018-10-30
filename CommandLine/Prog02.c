/**Author : Asif Bhat
 * Desc : Basic program to understand command line argumets
 *
 *
 * here we will manipulate the pointer rather than index of array.
 *
 * compile:  gcc Prog01.c -o print
 *
 * Run : ./print hello Asif
 */


#include<stdio.h>

main(int argc,char *argv[]){
	int i;
		while(--argc)
			printf("%s ",*++argv);
printf("\n");
	return 0;


}
