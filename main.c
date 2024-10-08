#include <stdio.h>

int main(void) {
    float piGreco=3.14;
    float circonferenza,area;
    int raggio;
    raggio=1;
    while(raggio<=20){
    circonferenza=2*piGreco*raggio;
    printf("la circonferenza del cerchio con raggio %d e' di %.2f\n",raggio, circonferenza);
    area=piGreco*raggio*raggio;
    printf("l' area del cerchio con raggio %d e' di %.2f\n",raggio, area);
    raggio++;
    }
    return 0;
}
