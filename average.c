#include <stdio.h>


int main(){
    int a,b,c, sum;
    float avg;

    scanf("%d %d %d", &a,&b,&c);
    sum = a + b + c ;
    avg = sum / 3.0; // avg = (float)sum/3;
    printf("Sum : %d\n", sum);
    printf("Average : %g", avg);


    return 0;    
}
