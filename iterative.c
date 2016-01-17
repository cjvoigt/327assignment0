//
//  main.c
//  voigt_camden.assignment-0.1
//
//  Created by Camden Voigt on 1/14/16.
//  Copyright © 2016 Camden Voigt. All rights reserved.
//

#include <stdio.h>

void iterative();

int rationals[50000000];

int main(int argc, const char * argv[]) {
    iterative();
    return 0;
}

void iterative() {
    int i;
    
    rationals[0] = 1;
    rationals[1] = 1;
    rationals[2] = 2;
    
    printf("%d\n%d\n%d\n",rationals[0], rationals[1], rationals[2]);
    
    for(i = 1; i < 50000000; i++) {
        if ((2*i) + 1 > 50000000 ) {
            int first = rationals[i];
            if (i == 49999999) {
                printf("%d\n", first);
                break;
            }
            int second = rationals[i] + rationals[i+1];
            printf("%d\n%d\n", first, second);
        } else if ((2*i)+ 2 > 50000000) {
            rationals[(2*i)+1] = rationals[i];
            int second = rationals[i] + rationals[i+1];
            printf("%d\n%d\n", rationals[(2*i)+1],  second);
        } else {
            rationals[(2*i)+1] = rationals[i];
            rationals[(2*i)+2] = rationals[i] + rationals[i+1];
            printf("%d\n%d\n", rationals[(2*i)+1], rationals[(2*i)+2]);
        }
    }
}