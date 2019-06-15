#include "qdbmp.h"
#include <stdio.h>
#include <math.h>
int main(void)
{
    BMP*    bmp;
    UCHAR   r,r1,r2,r3,r4,r5,r6,r7,r8,r9,g,g1,g2,g3,g4,g5,g6,g7,g8,g9,b,b1,b2,b3,b4,b5,b6,b7,b8,b9;
    UINT    width, height;
    UINT    x, y;


    bmp = BMP_ReadFile( "/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya5c/lena.bmp" );
    BMP_CHECK_ERROR( stderr, -1 );

    width = BMP_GetWidth( bmp );
    height = BMP_GetHeight( bmp );

    while (x < width - 5){
        y=1;
        while (y < height- 5)
        {
            BMP_GetPixelRGB(bmp, x-4, y -4, &r, &g, &b);
            BMP_GetPixelRGB(bmp, x-4, y, &r1, &g1, &b1);
            BMP_GetPixelRGB(bmp, x-4, y+4, &r2, &g2, &b2);
            BMP_GetPixelRGB(bmp, x, y-4, &r3, &g3, &b3);
            BMP_GetPixelRGB(bmp, x, y, &r4, &g4, &b4);
            BMP_GetPixelRGB(bmp, x, y+4, &r5, &g5, &b5);
            BMP_GetPixelRGB(bmp, x+4, y - 4, &r6, &g6, &b6);
            BMP_GetPixelRGB(bmp, x+4, y, &r7, &g7, &b7);
            BMP_GetPixelRGB(bmp, x+4, y+4, &r8, &g8, &b8);
            r = (r+r1+r2+r3+r4+r5+r6+r7+r8)/10;
            g = (g+g1+g2+g3+g4+g5+g6+g7+g8)/10;
            b = (b+b1+b2+b3+b4+b5+b6+b7+b8)/10;
            BMP_SetPixelRGB( bmp, x, y, r,g,b);
            y+=1;
        }
        x+=1;
    }

    BMP_WriteFile( bmp, "/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya5c/output.bmp");
    BMP_CHECK_ERROR( stderr, -2 );

    BMP_Free( bmp );

    return 0;
}