//
//  main.c
//  goto statement
//
//  Created by Eun Jae Lee on 17/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a, check = 0;
    
start:
    printf("Enter one number \n");
    scanf("%d",&a);
    
    if(a%2 == 0)
        printf("%d is even number \n",a);
    else
        printf("%d is Odd number \n",a);
    
    printf("Press 1 to test again or press any key to exit \n");
    
    scanf("%d", &check);
    
    if (check == 1) {
        goto start;
    }
    
   // getch();
    
    return 0;
}
