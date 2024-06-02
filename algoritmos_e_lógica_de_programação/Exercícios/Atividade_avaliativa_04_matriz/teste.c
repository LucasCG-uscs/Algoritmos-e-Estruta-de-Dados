#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {

    srand(time(NULL));
    int v[30];
    int i=0;

    for(i=0;i<30;i++){
        v[i]=(rand()%72)-36;
    }

    for(i=0;i<30;i++){
        printf("%d ",v[i]);
    }

return 0;
}