#include<stdio.h>
#include <conio.h>
#include<time.h>
#include <ctime>

int main(int argc, char *argv[]) 
{
   FILE *fp;

   int temp = 0;
   fp = fopen("/sys/class/thermal/thermal_zone0/temp", "r");

   fscanf(fp, "%d", &temp);
   clrscr();
   textcolor(GREEN);
   cprintf("***********************\n");
   textcolor(WHITE);
   cprintf(">> CPU Temp: %.2f°C <<\n", temp / 1000.0);
   textcolor(GREEN);
   cprintf("***********************\n");
   fclose(fp);

   return 0;
}