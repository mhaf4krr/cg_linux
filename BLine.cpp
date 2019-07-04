#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

int itterations_number;
int dx;
int dy;

void plot(int itt,int x,int y,int decision){
    if(itt == itterations_number) return;
    else {

        if(decision < 1){
            putpixel(x+1,y,RED);

            plot(itt+1,x+1,y,decision+2*dy);
        }

        else{
            putpixel(x+1,y+1,RED);

            plot(itt+1,x+1,y+1,decision+(2*dy-2*dx));
        }
    }
}

int main(){
    int gd = DETECT ,gm;
    initgraph(&gd,&gm,NULL);

    int x1=50,y1=50,x2=300,y2=350;

    dx= abs(x2-x1);
    dy = abs(y2-y1);
    
    itterations_number = dx;

    

    /* Initial Decision Parameter */
    int d0 = 2*dy - dx;

    plot(0,x1,y1,d0);

    getch();

}