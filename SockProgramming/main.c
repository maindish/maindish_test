//
//  main.c
//  SockProgramming
//
//  Created by Maindish on 2015. 1. 13..
//  Copyright (c) 2015년 Maindish. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

/*int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}*/

int main(int argc, char * argv[])
{
    int firstAge, secondAge;
    char operation;
    bool finished;
    
    finished = false;
    
    while (finished != true) {
        printf("What operation do you want to do?\n");
        
        scanf("%c", &operation);
        fpurge(stdin);
        
        if (operation == '+') {
            printf("Enter left argument: ");
            scanf("%d", &firstAge);
            fpurge(stdin);
            
            printf("Enter right argument: ");
            scanf("%d", &secondAge);
            fpurge(stdin);
            
            printf("\n%d + %d = %d\n", firstAge, secondAge, (firstAge + secondAge));
        }
        else
        {
            finished = true;
        }
    }
    
    printf("Finished.\n");
    
    return 0;
}
