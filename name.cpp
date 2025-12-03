#include <graphics.h> 
int main()  
{ 
int gd = DETECT, gm; 
initgraph(&gd, &gm, ""); 
setcolor(YELLOW); 
outtextxy(100, 100, "This is Aashish Pandit !!");   
getch(); 
closegraph(); 
return 0; 
} 