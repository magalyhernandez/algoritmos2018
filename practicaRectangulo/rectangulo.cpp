 #include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
	glClearColor(0.0,1.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    //glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    //cancha
    glVertex3f(9.0f,9.0f,0.0f);
    glVertex3f(9.0f,-9.0f,0.0f);
    glVertex3f(-9.0f,-9.0f,0.0f);
    glVertex3f(-9.0f,9.0f,0.0f);
    
    glVertex3f(9.0f,9.0f,0.0f);
    glVertex3f(-9.0f,9.0f,0.0f);
    
    glVertex3f(9.0f,-9.0f,0.0f);
    glVertex3f(-9.0f,-9.0f,0.0f);
    
    glVertex3f(0.0f,9.0f,0.0f);
    glVertex3f(0.0f,-9.0f,0.0f);
   
	//porteria izquierda 
	glVertex3f(-9.0f,3.0f,0.0f);
    glVertex3f(-7.0f,3.0f,0.0f);
    
    glVertex3f(-9.0f,-3.0f,0.0f);
    glVertex3f(-7.0f,-3.0f,0.0f);
    
    glVertex3f(-7.0f,3.0f,0.0f);
    glVertex3f(-7.0f,-3.0f,0.0f);
    
    glVertex3f(9.0f,-9.0f,0.0f);
    glVertex3f(-9.0f,-9.0f,0.0f);
    
    //porteria grande
    glVertex3f(-9.0f,5.0f,0.0f);
    glVertex3f(-6.0f,5.0f,0.0f);
    
    glVertex3f(-9.0f,-5.0f,0.0f);
    glVertex3f(-6.0f,-5.0f,0.0f);
    
    glVertex3f(-6.0f,5.0f,0.0f);
    glVertex3f(-6.0f,-5.0f,0.0f);
    
    glVertex3f(9.0f,-9.0f,0.0f);
    glVertex3f(-9.0f,-9.0f,0.0f);
    
    //porteria derecha
    glVertex3f(9.0f,-3.0f,0.0f);
    glVertex3f(7.0f,-3.0f,0.0f);
    
    glVertex3f(9.0f,3.0f,0.0f);
    glVertex3f(7.0f,3.0f,0.0f);
    
    glVertex3f(7.0f,-3.0f,0.0f);
    glVertex3f(7.0f,3.0f,0.0f);
    
    glVertex3f(-9.0f,9.0f,0.0f);
    glVertex3f(9.0f,9.0f,0.0f);
    
    //porteria grande
    glVertex3f(9.0f,-5.0f,0.0f);
    glVertex3f(6.0f,-5.0f,0.0f);
    
    glVertex3f(9.0f,5.0f,0.0f);
    glVertex3f(6.0f,5.0f,0.0f);
    
    glVertex3f(6.0f,-5.0f,0.0f);
    glVertex3f(6.0f,5.0f,0.0f);
    
    glVertex3f(-9.0f,9.0f,0.0f);
    glVertex3f(9.0f,9.0f,0.0f);
    
    //circulo
    glPointSize(0.1f);
    glBegin(GL_POINTS);
    double i;
    double cx;
    double cy;
    for (i=0; i<360; i+=0.01){
		cx=2*cos(i)+0;
		cy=2*sin(i)+0;
		glVertex3f(cx,cy,0.0);
	}

	 glEnd();
	//esquina superior derecha
	glPointSize(1.0f);
    glBegin(GL_POINTS);
   i=0;
	cx=0;
	cy=0;
	GLfloat angulo;
	for (i=0; i<90; i+=0.01){
		
		angulo= i*M_PI/180.0f;
		cx=2*cos(angulo)-9;
		cy=2*sin(angulo)-9;
		glVertex3f(cx,cy,0.0);
	}
	 glEnd();
	 
	 //esquina superior izq
	glPointSize(1.0f);
    glBegin(GL_POINTS);
   i=0;
	cx=0;
	cy=0;
	angulo=0;
	for (i=90; i<180; i+=0.01){
		
		angulo= i*M_PI/180.0f;
		cx=2*cos(angulo)+9;
		cy=2*sin(angulo)-9;
		glVertex3f(cx,cy,0.0);
	}
	 glEnd();
	 
	 //esquina inferior izq
	glPointSize(1.0f);
    glBegin(GL_POINTS);
   i=0;
	cx=0;
	cy=0;
	angulo=0;
	for (i=180; i<270; i+=0.01){
		
		angulo= i*M_PI/180.0f;
		cx=2*cos(angulo)+9;
		cy=2*sin(angulo)+9;
		glVertex3f(cx,cy,0.0);
	}
	 glEnd();
	 
	 //esquina inferior izq
	glPointSize(1.0f);
    glBegin(GL_POINTS);
   i=0;
	cx=0;
	cy=0;
	angulo=0;
	for (i=270; i<360; i+=0.01){
		
		angulo= i*M_PI/180.0f;
		cx=2*cos(angulo)-9;
		cy=2*sin(angulo)+9;
		glVertex3f(cx,cy,0.0);
	}
	 glEnd();
	 //medio circulo izq
	 glPointSize(1.0f);
    glBegin(GL_POINTS);
   i=0;
	cx=0;
	cy=0;
	angulo=0;
	for (i=90; i<270; i+=0.01){
		
		angulo= i*M_PI/180.0f;
		cx=2*cos(angulo)+6;
		cy=2*sin(angulo)+0;
		glVertex3f(cx,cy,0.0);
	}
	 glEnd();
	 
	 //medio circulo der
	 glPointSize(1.0f);
    glBegin(GL_POINTS);
   i=0;
	cx=0;
	cy=0;
	angulo=0;
	for (i=270; i<450; i+=0.01){
		
		angulo= i*M_PI/180.0f;
		cx=2*cos(angulo)-6;
		cy=2*sin(angulo)+0;
		glVertex3f(cx,cy,0.0);
	}
	 glEnd();
	 
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(10.0, -10.0, 10.0, -10.0, 10.0, -10.0); 
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

