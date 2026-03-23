#include <stdio.h>
int force(float);
int force_of_attraction(int mass){
    float force;
    force = mass * 9.8 ;
    printf("Earth Will Exert %f on body of mass %d", force , mass );
    return 0;
}

int main(){
    int m;
    printf("\nEnter the mass of object ");
    scanf("%d",&m);
    force_of_attraction( m );
    return 0;
}
