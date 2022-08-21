#include <GL/glut.h>         //incluye librerias del lenguaje GL por libreria grafica                     
void inicializa (void) 		//inizializa rutina siempre igual.
{   
	glClearColor(1.0,1.0,1.0,1.0); //clear color limpia la pantalla y pone color de fondo

glMatrixMode(GL_PROJECTION); 		//matriz d proyeccion
			 gluOrtho2D(0,450,0,380);  //x inicial, x final, y inicial, Yfinal de la pantalla grafica.
}
void Fondo(void)	//rutina pinta
{   
	//glClear(GL_COLOR_BUFFER_BIT); //colorbuferbit limpia la ventana al correr diferentes graficos se coloca al inicio
	//cielo
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(178.0/255,227.0/255,255.0/255);
	glVertex2i(0,175);
	glVertex2i(450,175);
	glColor3f(15.0/255,168.0/255,255.0/255);
	glVertex2i(450,380);
	glVertex2i(0,380);
	glEnd();
	
	//pasto
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(205.0/255,255.0/255,90.0/255);
	glVertex2i(0,0);
	glVertex2i(150,0);
	glColor3f(178.0/255,255.0/255,0.0/255);
	glVertex2i(210,175);
	glVertex2i(0,175);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(194.0/255,255.0/255,63.0/255);
	glVertex2i(300,0);
	glVertex2i(450,0);
	glColor3f(221.0/255,255.0/255,147.0/255);
	glVertex2i(450,175);
	glVertex2i(240,175);
	glEnd();
	//rio
	//Azul
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(150,0);
	glVertex2i(200,0);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(190,5);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(150,0);
	glVertex2i(153,10);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(190,5);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(200,0);
	glVertex2i(200,10);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(190,5);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(153,10);
	glVertex2i(190,20);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(200,10);
	glVertex2i(190,5);
	glEnd();
	//5
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(153,10);
	glVertex2i(157,20);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(190,20);
	glEnd();
	//6
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(200,10);
	glVertex2i(210,20);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(190,20);
	glEnd();
	//7
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(200,0);
	glVertex2i(230,0);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(230,20);
	glEnd();
	//8
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(210,20);
	glVertex2i(230,20);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(200,0);
	glVertex2i(200,10);
	glEnd();
	//9
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(230,0);
	glVertex2i(260,20);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(300,0);
	glEnd();
	//10
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(300,0);
	glVertex2i(286,40);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(250,40);
	glVertex2i(260,20);
	glEnd();
	//11
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(230,0);
	glVertex2i(230,20);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(250,40);
	glVertex2i(260,20);
	glEnd();
	//12
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(230,20);
	glVertex2i(250,40);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(220,40);
	glEnd();
	//13
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(210,20);
	glVertex2i(230,20);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(220,40);
	glEnd();
	//14
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(210,20);
	glVertex2i(220,40);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(200,40);
	glEnd();
	//15
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(157,20);
	glVertex2i(210,20);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(200,40);
	glVertex2i(160,30);
	glEnd();
	//16
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(171,60);
	glVertex2i(160,30);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(200,40);
	glEnd();
	//17
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(184,100);
	glVertex2i(200,100);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(200,70);
	glVertex2i(171,60);
	glEnd();
	//18
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(200,40);
	glVertex2i(220,40);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(200,70);
	glEnd();
	//19
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(172,60);
	glVertex2i(200,70);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(200,40);
	glEnd();
	//20
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(220,40);
	glVertex2i(240,70);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(200,70);
	glEnd();
	//21
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(220,40);
	glVertex2i(250,40);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(240,70);
	glEnd();
	//22
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(286,40);
	glVertex2i(276,70);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(240,70);
	glVertex2i(250,40);
	glEnd();
	//23
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(240,70);
	glVertex2i(276,70);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(250,100);
	glEnd();
	//24
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(276,70);
	glVertex2i(266,100);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(250,100);
	glEnd();
	//25
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(240,70);
	glVertex2i(230,100);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(250,100);
	glEnd();
	//26
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(230,70);
	glVertex2i(240,70);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(230,100);
	glEnd();
	//27
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(230,70);
	glVertex2i(230,100);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(200,100);
	glEnd();
	//28
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(200,70);
	glVertex2i(200,100);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(230,70);
	glEnd();
	//29
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(191,120);
	glVertex2i(210,130);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(200,100);
	glVertex2i(184,100);
	glEnd();
	//30
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(200,100);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(230,100);
	glVertex2i(210,130);
	glEnd();
	//31
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(230,100);
	glVertex2i(210,130);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(240,130);
	glVertex2i(250,100);
	glEnd();
	//32
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(266,100);
	glVertex2i(240,130);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(250,100);
	glEnd();
	//33
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(266,100);
	glVertex2i(255,130);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(240,130);
	glEnd();
	//34
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(205,160);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(191,120);
	glVertex2i(210,130);
	glEnd();
	//35
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(210,130);
	glVertex2i(210,160);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(205,160);
	glEnd();
	//36
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(240,160);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(210,160);
	glVertex2i(210,130);
	glEnd();
	//37
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(210,130);
	glVertex2i(240,130);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(240,160);
	glEnd();
	//38
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(240,130);
	glVertex2i(240,160);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(255,130);
	glEnd();
	//39
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(255,130);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(245,160);
	glVertex2i(240,160);
	glEnd();
	//40
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(205,160);
	glVertex2i(210,160);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(210,175);
	glEnd();
	//41

		//42
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(210,160);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(240,175);
	glVertex2i(240,160);
	glEnd();
	//43
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(210,175);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(210,160);
	glVertex2i(240,175);
	glEnd();
	//44
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,212.0/255,255.0/255);
	glVertex2i(240,160);
	glColor3f(107.0/255,228.0/255,255.0/255);
	glVertex2i(240,175);
	glVertex2i(245,160);
	glEnd();

	glFlush();}

void ArbolI(void)	
{   
	//glClear(GL_COLOR_BUFFER_BIT);
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(171.0/255,86.0/255,0.0/255);
	glVertex2i(80,30);
	glVertex2i(90,120);
	glVertex2i(70,140);
	glVertex2i(50,0);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(100,0);
	glVertex2i(80,30);
	glVertex2i(50,0);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(90,120);
	glVertex2i(140,140);
	glVertex2i(120,150);
	glVertex2i(70,140);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(140,140);
	glVertex2i(150,170);
	glVertex2i(130,170);
	glVertex2i(120,150);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(70,140);
	glVertex2i(90,150);
	glVertex2i(90,210);
	glVertex2i(70,200);
	glEnd();
	
	//sombra
	glBegin (GL_POLYGON);
	glColor3f(122.0/255,61.0/255,0.0/255);
	glVertex2i(50,0);
	glVertex2i(0,20);
	glVertex2i(40,90);
	glVertex2i(70,140);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(40,90);
	glVertex2i(70,140);
	glVertex2i(70,200);
	glVertex2i(30,190);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(70,140);
	glVertex2i(70,160);
	glVertex2i(120,150);
	glEnd();
	
	
	//copa de ArbolI
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(66.0/255,110.0/255,47.0/255);
	glVertex2i(10,175);
	glVertex2i(110,210);
	glVertex2i(100,250);
	glVertex2i(30,220);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(77.0/255,166.0/255,38.0/255);
	glVertex2i(10,175);
	glVertex2i(30,220);
	glVertex2i(20,270);
	glVertex2i(0,270);
	glVertex2i(0,210);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(77.0/255,205.0/255,20.0/255);
	glVertex2i(0,270);
	glVertex2i(20,270);
	glVertex2i(0,300);
	glVertex2i(30,220);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(77.0/255,166.0/255,38.0/255);
	glVertex2i(20,270);
	glVertex2i(30,320);
	glVertex2i(0,300);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(77.0/255,205.0/255,20.0/255);
	glVertex2i(100,270);
	glVertex2i(120,270);
	glVertex2i(110,310);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(130.0/255,255.0/255,74.0/255);
	glVertex2i(30,320);
	glVertex2i(20,270);
	glVertex2i(100,270);
	glVertex2i(110,310);
	glEnd();
		
	
	
	glBegin (GL_POLYGON);
	glColor3f(77.0/255,166.0/255,38.0/255);
	glVertex2i(30,220);
	glVertex2i(20,270);
	glVertex2i(100,270);
	glVertex2i(100,250);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(77.0/255,205.0/255,20.0/255);
	glVertex2i(110,210);
	glVertex2i(130,220);
	glVertex2i(140,270);
	glVertex2i(100,270);
	glVertex2i(100,250);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(66.0/255,110.0/255,47.0/255);
	glVertex2i(110,160);
	glVertex2i(120,190);
	glVertex2i(130,220);
	glVertex2i(110,210);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(77.0/255,166.0/255,38.0/255);
	glVertex2i(110,160);
	glVertex2i(180,170);
	glVertex2i(160,190);
	glVertex2i(120,190);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(77.0/255,205.0/255,20.0/255);
	glVertex2i(120,190);
	glVertex2i(160,190);
	glVertex2i(190,220);
	glVertex2i(130,220);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(77.0/255,166.0/255,38.0/255);
	glVertex2i(160,190);
	glVertex2i(190,220);
	glVertex2i(180,170);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(130.0/255,255.0/255,74.0/255);
	glVertex2i(130,220);
	glVertex2i(190,220);
	glVertex2i(160,250);
	glVertex2i(140,270);
	glEnd();
	
	//sombrapiso
	glBegin (GL_POLYGON);
	glColor3f(156.0/255,193.0/255,73.0/255);
	glVertex2i(0,0);
	glVertex2i(0,20);
	glVertex2i(50,0);
	glEnd();
	
	glFlush();}

void mariposa(void)	//rutina pinta
{   
	//glClear(GL_COLOR_BUFFER_BIT); //colorbuferbit limpia la ventana al correr diferentes graficos se coloca al inicio
	//ala izquuerda
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,255.0/255,178.0/255);
	glVertex2i(225,270);
	glColor3f(0.0/255,192.0/255,134.0/255);
	glVertex2i(190,240);
	glVertex2i(180,260);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(211.0/255,211.0/255,0.0/255);
	glVertex2i(225,270);
	glVertex2i(225,300);
	glColor3f(242.0/255,242.0/255,0.0/255);
	glVertex2i(180,260);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,255.0/255,178.0/255);
	glVertex2i(225,300);
	glColor3f(0.0/255,192.0/255,134.0/255);
	glVertex2i(180,260);
	glVertex2i(150,280);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,255.0/255,178.0/255);
	glVertex2i(225,300);
	glColor3f(0.0/255,192.0/255,134.0/255);
	glVertex2i(170,285);
	glVertex2i(150,300);
	glVertex2i(160,320);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(211.0/255,211.0/255,0.0/255);
	glVertex2i(225,300);
	glVertex2i(220,330);
	glColor3f(242.0/255,242.0/255,0.0/255);
	glVertex2i(160,320);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,255.0/255,178.0/255);
	glVertex2i(220,330);
	glColor3f(0.0/255,192.0/255,134.0/255);
	glVertex2i(160,320);
	glVertex2i(140,350);
	glVertex2i(160,370);
	glVertex2i(180,370);
	glVertex2i(200,360);
	glEnd();
	
	//ala derecha
	
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,255.0/255,178.0/255);
	glVertex2i(225,270);
	glColor3f(0.0/255,192.0/255,134.0/255);
	glVertex2i(260,240);
	glVertex2i(270,260);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(211.0/255,211.0/255,0.0/255);
	glVertex2i(225,270);
	glVertex2i(225,300);
	glColor3f(242.0/255,242.0/255,0.0/255);
	glVertex2i(270,260);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,255.0/255,178.0/255);
	glVertex2i(225,300);
	glColor3f(0.0/255,192.0/255,134.0/255);
	glVertex2i(270,260);
	glVertex2i(300,280);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,255.0/255,178.0/255);
	glVertex2i(225,300);
	glColor3f(0.0/255,192.0/255,134.0/255);
	glVertex2i(280,285);
	glVertex2i(300,300);
	glVertex2i(290,320);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(211.0/255,211.0/255,0.0/255);
	glVertex2i(225,300);
	glVertex2i(230,330);
	glColor3f(242.0/255,242.0/255,0.0/255);
	glVertex2i(290,320);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,255.0/255,178.0/255);
	glVertex2i(230,330);
	glColor3f(0.0/255,192.0/255,134.0/255);
	glVertex2i(290,320);
	glVertex2i(310,350);
	glVertex2i(290,370);
	glVertex2i(270,370);
	glVertex2i(250,360);
	glEnd();
	
	//cuerpo
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(0.0/255,0.0/255,0.0/255);
	glVertex2i(225,250);
	glVertex2i(220,330);
	glVertex2i(225,350);
	glVertex2i(230,330);
	glEnd();
	
	glFlush();}
void Flores1(void)	//rutina pinta
{   
	//glClear(GL_COLOR_BUFFER_BIT); //colorbuferbit limpia la ventana al correr diferentes graficos se coloca al inicio
	
	//flor1
	glLineWidth(3);	//grosor de la linea
	glColor3f(29.0/255,93.0/255,0.0/255);	//Color de la linea/puntos
	glBegin(GL_LINES); //pintar dos puntos o linea (GL_POINTS, GL_LINES)con las instrucciones de abajo
	glVertex2i(110,30); 
	glVertex2i(110,50);
	glEnd(); 
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(29.0/255,93.0/255,0.0/255);
	glVertex2i(110,40);
	glVertex2i(112,45);
	glVertex2i(115,45);
	glVertex2i(112,43);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(255.0/255,73.0/255,131.0/255);
	glVertex2i(110,50);
	glVertex2i(105,50);
	glVertex2i(100,60);
	glVertex2i(105,70);
	glVertex2i(115,65);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(255.0/255,0.0/255,81.0/255);
	glVertex2i(110,50);
	glVertex2i(115,50);
	glVertex2i(120,60);
	glVertex2i(115,70);
	glEnd();
	
	
	glFlush();}
void Flores2(void){
	
	//flor2
	glLineWidth(3);
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(29.0/255,93.0/255,0.0/255);
	glVertex2i(130,80);
	glVertex2i(135,80);
	glVertex2i(135,100);
	glVertex2i(130,100);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(135,90);
	glVertex2i(140,95);
	glVertex2i(145,90);
	glVertex2i(140,85);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(255.0/255,91.0/255,91.0/255);
	glVertex2i(130,100);
	glVertex2i(125,105);
	glVertex2i(125,120);
	glVertex2i(140,120);
	glVertex2i(140,105);
	glVertex2i(135,100);
	glEnd();
	
	glBegin (GL_POLYGON);
	glColor3f(200.0/255,63.0/255,63.0/255);
	glVertex2i(130,103);
	glVertex2i(130,117);
	glVertex2i(127,117);
	glVertex2i(127,107);
	glEnd();
	glFlush();}
	
void Flores3(void){
	//flor3
	
	glLineWidth(2);	//grosor de la linea
	glColor3f(29.0/255,93.0/255,0.0/255);	//Color de la linea/puntos
	glBegin(GL_LINES); //pintar dos puntos o linea (GL_POINTS, GL_LINES)con las instrucciones de abajo
	glVertex2i(170,110); 
	glVertex2i(170,130);
	glVertex2i(170,130);
	glVertex2i(180,140);
	glEnd();
	
	
	glColor3f(251.0/255,255.0/255,0.0/255);
	glBegin (GL_TRIANGLES);
	glVertex2i(180,140);
	glVertex2i(170,140);
	glVertex2i(170,145);
	glEnd();
	glBegin (GL_TRIANGLES);
	glVertex2i(180,140);
	glVertex2i(180,150);
	glVertex2i(175,150);
	glEnd();
	glBegin (GL_TRIANGLES);
	glVertex2i(180,140);
	glVertex2i(190,145);
	glVertex2i(185,150);
	glEnd();
	
	glBegin (GL_TRIANGLES);
	glVertex2i(180,140);
	glVertex2i(190,135);
	glVertex2i(185,130);
	glEnd();
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(255.0/255,255.0/255,255.0/255);
	glVertex2i(185,140);
	glVertex2i(182.5,144);
	glVertex2i(180,145);
	glVertex2i(177.5,144);
	glVertex2i(175,140);
	glVertex2i(177.5,136);
	glVertex2i(180,135);
	glVertex2i(182.5,136);
	glEnd();
	glFlush();
}
void ArbolD(void)
{   
	//glClear(GL_COLOR_BUFFER_BIT); //colorbuferbit limpia la ventana al correr diferentes graficos se coloca al inicio
	//sombra
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(122.0/255,61.0/255,0.0/255);
	glVertex2i(420,10);
	glVertex2i(430,20);
	glVertex2i(430,90);
	glVertex2i(420,80);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(420,80);
	glVertex2i(430,90);
	glVertex2i(420,120);
	glVertex2i(410,110);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(420,150);
	glVertex2i(410,150);
	glVertex2i(410,110);
	glVertex2i(420,120);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(400,180);
	glVertex2i(390,180);
	glVertex2i(410,150);
	glVertex2i(420,150);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(400,180);
	glVertex2i(390,180);
	glVertex2i(430,240);
	glEnd();
	//tronco
	glBegin (GL_POLYGON);
	glColor3f(171.0/255,86.0/255,0.0/255);
	glVertex2i(400,0);
	glVertex2i(420,10);
	glVertex2i(420,80);
	glVertex2i(400,70);
	glVertex2i(380,80);
	glVertex2i(370,90);
	glVertex2i(370,20);
	glVertex2i(375,5);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(410,120);
	glVertex2i(380,120);
	glVertex2i(360,120);
	glVertex2i(370,90);
	glVertex2i(380,80);
	glVertex2i(400,70);
	glVertex2i(420,80);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(410,120);
	glVertex2i(410,150);
	glVertex2i(360,150);
	glVertex2i(360,120);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(410,150);
	glVertex2i(390,180);
	glVertex2i(350,180);
	glVertex2i(360,150);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(350,180);
	glVertex2i(390,180);
	glVertex2i(430,240);
	glVertex2i(420,250);
	glVertex2i(400,240);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(430,240);
	glVertex2i(420,250);
	glVertex2i(440,250);
	glVertex2i(440,240);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(450,260);
	glVertex2i(440,240);
	glVertex2i(440,250);
	glEnd();
	
	
	//rama1
	//sombra
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(122.0/255,61.0/255,0.0/255);
	glVertex2i(400,220);
	glVertex2i(380,250);
	glVertex2i(370,240);
	glVertex2i(390,210);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(380,250);
	glVertex2i(370,270);
	glVertex2i(360,270);
	glVertex2i(370,240);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(330,290);
	glVertex2i(360,270);
	glVertex2i(370,270);
	glEnd();
	//tronco rama1
	glBegin (GL_POLYGON);
	glColor3f(171.0/255,86.0/255,0.0/255);
	glVertex2i(390,210);
	glVertex2i(370,240);
	glVertex2i(360,230);
	glVertex2i(380,200);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(370,240);
	glVertex2i(360,270);
	glVertex2i(350,260);
	glVertex2i(360,230);
	glEnd();
	glBegin (GL_POLYGON);
	glVertex2i(330,290);
	glVertex2i(310,300);
	glVertex2i(320,280);
	glVertex2i(350,260);
	glVertex2i(360,270);
	glEnd();
	
	//rama2
	//sombra
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(122.0/255,61.0/255,0.0/255);
	glVertex2i(400,100);
	glVertex2i(440,110);
	glVertex2i(410,90);
	glEnd();
	//tronco
	glBegin (GL_POLYGON);
	glColor3f(171.0/255,86.0/255,0.0/255);
	glVertex2i(400,100);
	glVertex2i(440,110);
	glVertex2i(450,130);
	glVertex2i(410,110);
	glEnd();
	glFlush();}
void MariposaIn (void){
	//MAriposa en la jaula
	
	glPolygonMode(GL_FRONT,GL_FILL);
	glBegin (GL_POLYGON);
	glColor3f(235.0/255,87.0/255,255.0/255);
	glVertex2i(330,190);
	glVertex2i(325,200);
	glVertex2i(320,195);
	glEnd();
	
	glBegin (GL_POLYGON);
	glVertex2i(310,200);
	glVertex2i(320,210);
	glVertex2i(320,195);
	glEnd();
	
	glColor3f(0.0/255,0.0/255,0.0/255);
	glLineWidth(3);
	glBegin (GL_LINES);
	glVertex2i(330,190);
	glVertex2i(310,200);
	
	glVertex2i(310,200);
	glVertex2i(308,205);
	glEnd();
	glFlush();
}
void Red(void){
	//jaula
	glColor3f(0.0/255,0.0/255,0.0/255);
	glLineWidth(5);
	glBegin (GL_LINES);
	glVertex2i(300,170);
	glVertex2i(340,170);
	
	glVertex2i(300,220);
	glVertex2i(340,220);
	glEnd();
	glLineWidth(2);
	glBegin (GL_LINES);
	glVertex2i(340,170);
	glVertex2i(340,220);
	
	glVertex2i(330,170);
	glVertex2i(330,220);
	
	glVertex2i(320,170);
	glVertex2i(320,220);
	
	glVertex2i(310,170);
	glVertex2i(310,220);
	
	glVertex2i(300,170);
	glVertex2i(300,220);
	
	glVertex2i(300,220);
	glVertex2i(320,250);
	
	glVertex2i(310,220);
	glVertex2i(320,250);
	
	glVertex2i(320,220);
	glVertex2i(320,250);
	
	glVertex2i(330,220);
	glVertex2i(320,250);
	
	glVertex2i(340,220);
	glVertex2i(320,250);
	
	//cadena
	glVertex2i(320,250);
	glVertex2i(325,260);
	
	glVertex2i(320,250);
	glVertex2i(315,260);
	
	glVertex2i(315,260);
	glVertex2i(320,265);
	
	glVertex2i(325,260);
	glVertex2i(320,265);
	
	glVertex2i(320,265);
	glVertex2i(315,275);
	
	glVertex2i(320,265);
	glVertex2i(325,275);
	
	glVertex2i(325,275);
	glVertex2i(320,280);
	
	glVertex2i(315,275);
	glVertex2i(320,280);
	glEnd();
	
	
	
	
	glFlush();
}
//rutina que inicia
void PintaFlor(void){
	//glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(200,1,0.0);
	Flores1();
	Flores2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(150,20,0.0);
	Flores3();
	Flores2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(120,-55,0.0);
	Flores3();
	glPopMatrix();
	

}
void Anima (void){
	int i=0;
	int x=0;
	int y=0;
	do{
		glClear(GL_COLOR_BUFFER_BIT);
		if(i%2==0){
			//glClear(GL_COLOR_BUFFER_BIT);
			Fondo();
			glPushMatrix();
			glScalef(1,0.99,0.0);
			Flores1();
			Flores2();
			Flores3();
			ArbolD();
			ArbolI();
			Red();
			glPopMatrix();
			glPushMatrix();
			glScalef(1,1,0.0);
			glTranslatef(10,1,0.0);
			MariposaIn();
			glPopMatrix();
			Sleep(300);
			
		}else {
			//glClear(GL_COLOR_BUFFER_BIT);
			Fondo();
			glPushMatrix();
			glScalef(1,1,0.0);
			Flores1();
			Flores2();
			Flores3();
			ArbolD();
			ArbolI();
			Red();
			glPopMatrix();
			glPushMatrix();
			glScalef(1,1,0.0);
			glTranslatef(10,1,0.0);
			MariposaIn();
			glPopMatrix();
			Sleep(300);
			
		}
		i++;
		
		glFlush();
	}while(i<6);
	i=0;
	x=10;
	float x1=225;
	int y1=175;
	float x2=0.1;
	float y2=0.1;
	do{
		glClear(GL_COLOR_BUFFER_BIT);
		Fondo();
		glPushMatrix();
		Flores1();
		Flores2();
		Flores3();
		ArbolD();
		ArbolI();
		
		glPopMatrix();
		
		glPushMatrix();
		glScalef(1,1,0.0);
		glTranslatef(x,y,0.0);
		MariposaIn();
		if(i%2==0){
		x=x-1;
		y=3;
		}
		else{
		y=0;
		x=x-1;	
		}
		glPopMatrix();
		Red();
		Sleep(100);
		
		glPushMatrix();
		glTranslatef(x1,y1,0.0);
		glScalef(0.1,0.1,0.0);
		glScalef(x2,y2,0.0);
		mariposa();
		x1=x1-2.5;
		x2=x2+0.2;
		y2=y2+0.2;
		glPopMatrix();
		i++;
		Sleep(300);
		glFlush();
	}while(i<17);
	i=0;
	do{
		glClear(GL_COLOR_BUFFER_BIT);
		Fondo(); 
		Flores1();
		Flores2();
		Flores3();
		ArbolI();
		ArbolD();
		Red();
		MariposaIn();
		glPushMatrix();
		glTranslatef(x1,y1,0.0);
		glScalef(0.1,0.1,0.0);
		glScalef(x2,y2,0.0);
		mariposa();
		x1=x1+10;
		y1=y1-100;
		x2=x2+1;
		y2=y2+1;
		glPopMatrix();
		
		
		i++;
		Sleep(300);
		glFlush();
	} while(i<8);
	
	
	i=0;
	x=500;
	x1=600;
	x2=400;
	do{
		glClear(GL_COLOR_BUFFER_BIT);
		
		if(i<5){
		
		Fondo(); 
		Flores1();
		Flores2();
		Flores3();
		ArbolI();
		ArbolD();
		Red();
		MariposaIn();
		}
		else{
			Fondo(); 
			Flores1();
			Flores2();
			Flores3();
			ArbolI();
			ArbolD();
			Red();
			PintaFlor();
			MariposaIn();
		}
		
		
		glPushMatrix();
		glTranslatef(x,0,0.0);
		mariposa();
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(x2,-150,0.0);
		mariposa();
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(x1,-200,0.0);
		mariposa();
		glPopMatrix();
		x=x-100;
		x1=x1-100;
		x2=x2-100;
		
		
		Sleep(300);
		i++;
	} while(i<15);
	
	i=0;
	x=0;
	y=0;
	x2=0;
	y2=0;
	do{
		if (i<6){
		glClear(GL_COLOR_BUFFER_BIT);
		Fondo(); 
		Flores1();
		Flores2();
		Flores3();
		ArbolI();
		ArbolD();
		
		glPushMatrix();
		glTranslatef(0,y,0.0);
		Red();
		MariposaIn();
		glPopMatrix();
		PintaFlor();
		y=y-15;
		y2=y;
		Sleep(300);
		}else{
			glClear(GL_COLOR_BUFFER_BIT);
			Fondo(); 
			Flores1();
			Flores2();
			Flores3();
			ArbolI();
			ArbolD();
			PintaFlor();
			glPushMatrix();
			glTranslatef(0,y,0.0);
			Red();
			glPopMatrix();	
			glPushMatrix();
			glTranslatef(x2,y2,0.0);
			MariposaIn();
			glPopMatrix();
			
			y2=y2+5;
			x2=x2-5;
			Sleep(100);
		}
		i++;
	} while(i<70);
	
	glFlush();
}

//Rutina principal     
int main(int argc, char** argv) //main
{glutInitWindowSize(900,760);  // tamañño de la ventana de visualizacion
glutInit (&argc, argv);		
glutCreateWindow("Tenorio Malpica Jose Andres. Proyecto2"); //ventana y su nombre Siempre se inicia por apellidos y nombre. para la clase
inicializa();        //llamado de funcion                       
//llamas a funciones 

//glutDisplayFunc(Fondo); //linea9 (con el rio)
//glutDisplayFunc(ArbolI); //linea 435
//glutDisplayFunc(mariposa); //linea 611
//glutDisplayFunc(Flores); // Linea 746
//glutDisplayFunc(ArbolD);// Linea 868
glutDisplayFunc(Anima);
glutMainLoop(); 
return 0;}
