/*
05.
Write a C code that defines 3 int variables x, y and z and 3 pointers to int px, py and pz.
Set x, y, z to three distinct values. Set px, py and pz to the addresses of x, y, z respectively.
Can you expect the output before you run the program ... ?
a- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz.
b- Print the message: Swapping pointers.
c- Execute the swap code: pz = px; px = py; py = pz;
d- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz.
*/

#include <stdio.h>




int main()
{
    int x = 10 , y = 20 , z = 30  , *px = &x , *py = &y, *pz = &z;
    printf("x=%d y=%d z=%d px=%d py=%d pz=%d *px=%d *py=%d *pz=%d ",x,y,z,pz,py,pz,*px,*py,*pz);
    /*
    x,y,z will print the values 10,20,30;
    px,py,pz will print the addresses of x,y,z;
    *px,*py,*pz will print the values 10,20,30;
    */
   
}