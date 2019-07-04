#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>

void DDA(int x1,int y1,int x2,int y2){
    int dx = x2-x1;
    int dy = y2-y1;

    printf("dx: %d , dy: %d\n",dx,dy);

    float steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    printf("steps: %f",steps);

    float xinc = dx/steps;
    float yinc = dy/steps;
    
    // Plotting points need to be float

    float x=x1;
    float y=y1;

    for(int i=0;i<steps;i++){
        putpixel(x,y,RED);
        x= x+xinc;
        y= y+yinc;
    }
}

int main(){
    int gd = DETECT ,gm;
    initgraph(&gd,&gm,NULL);
    DDA(2,2,140,160);
    getch();
}