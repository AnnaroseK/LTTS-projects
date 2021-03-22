#include <stdio.h>
#include "complex.h"

typedef struct complex
{/* data */
    float x;
    float y;
};

struct complex c1,c2;

void addition(float x1,float x2,float y1,float y2){
    c1.x=x1;c1.y=y1;c2.x=x2;c2.y=y2;
    float real=c1.x+c2.x;
    float imag=c1.y+c2.y;
    printf("\nSum of complex numbers is %f+i%f",real,imag);
}

void subtraction(float x1,float x2,float y1,float y2){
    c1.x=x1;c1.y=y1;c2.x=x2;c2.y=y2;
    float real=c1.x-c2.x;
    float imag=c1.y-c2.y;
    printf("\nDifference of complex numbers is %f+i%f",real,imag);
}

void multiplication(float x1,float x2,float y1,float y2){
    c1.x=x1;c1.y=y1;c2.x=x2;c2.y=y2;
    float real=c1.x*c2.x-c1.y*c2.y;
    float imag=c1.x*c2.y+c1.x*c2.y;
    printf("\nProduct of complex numbers is %f+i%f",real,imag);
}

void division(float x1,float x2,float y1,float y2){
    c1.x=x1;c1.y=y1;c2.x=x2;c2.y=y2;
    float den=(c2.x*c2.x)+(c2.y*c2.y);
    float real=(c1.x*c2.x+c1.y*c2.y)/den;
    float imag=(c1.y*c2.x-c2.y*c1.x)/den;
    printf("\nDivision of complex numbers is %f+i%f",real,imag);
}

