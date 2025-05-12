#ifndef __PPM_H__
#define __PPM_H__

#define P3 0 // ASCII
#define P6 1 // BINARY

typedef struct ppm
{
    char type[3]; // P3 (ascii) ou P6 (binary)
    unsigned int width;
    unsigned int height;
    unsigned int max_color;
    unsigned int* image;
}ppm;



#endif