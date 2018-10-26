#include <stdio.h>


int main() {
    int znak;

    znak = 0;

    while(znak < 256)  {
        printf("wartosc calkowita: %d,\t kod ASCII %c\n", znak, znak);
        znak++;
    }
    return 0;
}