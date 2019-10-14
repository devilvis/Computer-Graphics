
/*Midpoint Circle Algorithm Example Program In C */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main() {
   int gd = DETECT, gm;
   int x, y, r;
   void Drawcircle(int x, int y, int r);
   printf("Enter the Mid points and Radius:",&x,&y,&r);
   scanf("%d%d%d", &x, &y, &r);
   initgraph(&gd, &gm, "C:/TURBOC3/BGI");
   Drawcircle(x, y, r);
   getch();
   closegraph();
}

void Drawcircle(int x1, int y1, int r) {
   int x = 0, y = r, p = 1 - r;
   void cliplot(int x1, int y1, int x, int y);
   cliplot(x1, y1, x, y);
   while (x < y) {
      x++;
      if (p < 0)
     p += 2 * x + 1;
      else {
     y--;
     p += 2 * (x - y) + 1;
      }
      cliplot(x1, y1, x, y);
   }
}

void cliplot(int xctr, int yctr, int x, int y) {
   putpixel(xctr + x, yctr + y, 1);
   putpixel(xctr - x, yctr + y, 1);
   putpixel(xctr + x, yctr - y, 1);
   putpixel(xctr - x, yctr - y, 1);
   putpixel(xctr + y, yctr + x, 1);
   putpixel(xctr - y, yctr + x, 1);
   putpixel(xctr + y, yctr - x, 1);
   putpixel(xctr - y, yctr - x, 1);
   getch();
}
