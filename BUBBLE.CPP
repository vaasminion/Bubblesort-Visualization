#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>
#define  width  100
#define  height getmaxy()
float *array;
void swap(float *a,float *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
void draw(int value)
{       int i;
	for(i=0;i<width;i++)
	{       if(i==value)
		{
			setcolor(random(7));
			line(i,height,i,height-array[i]);
		}
		else{
			setcolor(15);
			line(i,height,i,height-array[i]);
			}

	}
}
void bubblesort()
{
	int i,j;
	for(i=0;i<width-1;i++)
	{       for(j=0;j<width-1;j++)
		{
			if(array[j]>array[j+1])
			{
			swap(&array[j],&array[j+1]);
			cleardevice();
			draw(j);
			}
		}

	  }
}
void main()
{
	int gm,gd=DETECT;
	int i;
	initgraph(&gd,&gm,"c://turboc3//bgi");
	array = new float[width];
	for(i=0;i<width;i++)  //storing random data in array using random()
	{
	   array[i]=random(height);
	}

	 draw(0);
	 cout<<"Bubbleshot";
	 bubblesort();
	 delete array;
	 getch();
}