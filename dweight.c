#include <stdio.h>

int main(){

        int height, length, width, volume;

        height = 8;
        length = 12;
        width = 10;
        volume = height * length * width;

        printf("Dimensions: %dx%dx%d\n", length, width, height);
        printf("Volume (Cubic inches): %d\n", volume);

        return 0;
}
