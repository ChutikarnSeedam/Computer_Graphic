
#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display() {

  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
  
 glBegin(GL_QUADS); //BLUE
	glColor3f(0.0f, 0.0f, 1.0f); 
	glVertex2f( -0.75f, 0.75f); 
	glVertex2f( 0.25f, 0.75f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f( -0.75f, -0.25f);
 glEnd();

 glBegin(GL_QUADS); //GREEN
	glColor3f(0.0f, 1.0f, 0.0f); 
	glVertex2f(-0.5f, -0.5f); 
	glVertex2f( 0.5f, -0.5f);
	glVertex2f( 0.5f, 0.5f);
	glVertex2f(-0.5f, 0.5f);
 glEnd();
 glBegin(GL_QUADS); //RED
	glColor3f(1.0f, 0.0f, 0.0f); 
	glVertex2f(-0.25f, -0.75f); 
	glVertex2f( 0.75f, -0.75f);
	glVertex2f( 0.75f, 0.25f);
	glVertex2f(-0.25f, 0.25f);
 glEnd();
 glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv); 
	glutCreateWindow("RGB_Cube_6404062620109");
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50); 
	glutDisplayFunc(display); 
	glutMainLoop(); 
	return 0;
}

