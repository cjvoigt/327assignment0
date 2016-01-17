//
//  main.c
//  voigt_camden.assinment-0.2
//
//  Created by Camden Voigt on 1/14/16.
//  Copyright © 2016 Camden Voigt. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void second(int);
int recursive(int);

int main(int argc, const char * argv[]) {
    if(argc != 2) {
        printf("Error not enough parameters\n");
        return -1;
    }
    
    second(atoi(argv[1]));
    return 0;
}

void second(int startIndex) {
    int num = recursive(startIndex);
    int denom = recursive(startIndex + 1);
    
    printf("The rational number at %d is %d/%d.\n", startIndex, num, denom);
}

int recursive(int currentIndex) {
    if (currentIndex == 0) {
        return 1;
    } else if (currentIndex % 2 == 0) {
        return recursive((currentIndex - 2)/2) + recursive(((currentIndex - 2)/2) + 1);
    } else {
        return recursive((currentIndex - 1)/2);
    }
}
