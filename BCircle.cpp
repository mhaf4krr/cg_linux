#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

int Xc=100,Yc=100;

void drawCircle(int x,int y){
    putpixel(Xc+x, Yc+y, RED); 
    putpixel(Xc-x, Yc+y, RED); 
    putpixel(Xc+x, Yc-y, RED); 
    putpixel(Xc-x, Yc-y, RED); 
    putpixel(Xc+y, Yc+x, RED); 
    putpixel(Xc-y, Yc+x, RED); 
    putpixel(Xc+y, Yc-x, RED); 
    putpixel(Xc-y, Yc-x, RED);  
}

void plot(int x,int y,int decision){
    if(x>y){
        return;
    }

    else {
        if(decision < 0){
            drawCircle(x+1,y);
           plot(x+1,y,decision+4*x+6);
        }

        else {
            drawCircle(x+1,y-1);
           plot(x+1,y-1,decision + 4 * (x-y) + 10);
        }
    }
}



int main(){
    int gd = DETECT, gm;
    initgraph(&gd,&gm,NULL);

    int radius=80;

    

   /* Inital Decision Parameter */

    int d0 = 3-2*radius;

    plot(0,radius,d0);

    getch();
}