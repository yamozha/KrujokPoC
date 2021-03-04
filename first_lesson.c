// fibonacci sequence, printed

#include <stdio.h>

void main() {

    int old_number = 1;

    int newNumber = 1;

// 1,1,2,3,5,8

    for(int i=0; i<3; i++){

        oldNumber += newNumber;
        newNumber += oldNumber;
        printf("%d %d\n", oldNumber,newNumber);
    }
        // printf("%d\n", newNumber += oldNumber);
        
    
}