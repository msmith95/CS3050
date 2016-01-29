/* 
 * File:   main.c
 * Author: Michael
 *
 * Created on January 28, 2016, 7:31 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int main(int argc, char** argv) {

    long i;
    srand ( time(NULL) );
    FILE* file=fopen(argv[1], "w");
    if(file == NULL){
        printf("Unable to open file");
        return 0;
    }
    for(i=0; i<1000000; i++){
        int random_number = (rand()%100)+1;
        fprintf(file, "%d\n", random_number);
    }
    fclose(file);
    printf("File created");
    return 0;
}

