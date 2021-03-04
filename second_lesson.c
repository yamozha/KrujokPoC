// bubble sort (?)

#include <stdio.h>

void main() {
    int masiv[] = {5,90,12,6,2,100,1,5,77,8};

    while(1){
        int a = 0;
        
        for(int i=0;i<sizeof(masiv)/sizeof(int)-1;i++){
            if(masiv[i] > masiv[ i+1 ]){
                int purvi = masiv[i];
                int vtori = masiv[i+1];
                masiv[i] = vtori;
                masiv[i+1] = purvi;
                int iter_changed = 1;
                a = 1;
            }
        }

        if (a == 0){
            for(int i=0;i<sizeof(masiv)/sizeof(int);i++){
                printf("%d; ", masiv[i]);
            }
            printf("\n");

            break;
        }
    }
}