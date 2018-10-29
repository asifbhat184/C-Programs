/**Author : Asif Bhat
 * Desc : Basic program to understand command line argumets
 *
 * compile:  gcc Prog01.c -o print
 *
 * Run : ./print hello Asif
 */


#include<stdio.h>

main(int argc,char *argv[]){
	int i;
	for(i=1;i<argc;i++)
		printf("%s ",argv[i]);
printf("\n");
	return 0;


}
