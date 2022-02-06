#include <windows.h>  // for MS Windows

#include <GL/glut.h>  // GLUT, include glu.h and gl.h



void display() {

// Set background color to black and opaque

glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
glLineWidth(2);


// Draw a Red 1x1 Square centered at origin



	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 1.0f); // Red

	glVertex2f(1.0f, 1.0f);    // x, y
	glVertex2f(1.0f, -1.0f);    // x, y

	glVertex2f(-1.0f, -1.0f);    // x, y
	glVertex2f(-1.0f, 1.0f);    // x, y
	glEnd();


	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f); // Red

	glVertex2f(1.0f, 1.0f);    // x, y
	glVertex2f(1.0f, -1.0f);    // x, y

	glVertex2f(0.5f, -1.0f);    // x, y
	glVertex2f(0.5f, 1.0f);    // x, y
	glEnd();



	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red

	glVertex2f(0.5f, 0.25f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y

	glVertex2f(-1.0f, -0.25f);    // x, y
	glVertex2f(-1.0f, 0.25f);    // x, y
	glEnd();

    glLineWidth(3.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red

	glVertex2f(0.5f, 0.0f);    // x, y
	glVertex2f(-1.0f, 0.0f);    // x, y
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.8f, 1.0f, 1.0f); // Red

	glVertex2f(0.5f, 1.0f);    // x, y
	glVertex2f(0.5f, 0.25f);    // x, y

	glVertex2f(-1.0f, 0.25f);    // x, y
	glVertex2f(-1.0f, 1.0f);    // x, y
	glEnd();

	glBegin(GL_QUADS);              //House
	glColor3f(0.5f, 0.0f, 0.5f); // Red

	glVertex2f(0.1f, 0.9f);    // x, y
	glVertex2f(0.1f, 0.25f);    // x, y

	glVertex2f(-0.6f, 0.25f);    // x, y
	glVertex2f(-0.6f, 0.9f);    // x, y
	glEnd();
    glBegin(GL_QUADS);              // window1
	glColor3f(1.0f, 1.0f, 0.0f); // Red

	glVertex2f(0.0f, 0.8f);    // x, y
	glVertex2f(-0.1f, 0.8f);    // x, y
    glVertex2f(-0.1f, 0.7f);
	glVertex2f(0.0f, 0.7f);    // x, y
	   // x, y
	glEnd();
    glBegin(GL_QUADS);              // window2
	glColor3f(1.0f, 1.0f, 0.0f); // Red

	glVertex2f(-0.5f, 0.8f);    // x, y
	glVertex2f(-0.4f, 0.8f);    // x, y
    glVertex2f(-0.4f, 0.7f);
	glVertex2f(-0.5f, 0.7f);    // x, y
	   // x, y
	glEnd();
	glBegin(GL_QUADS);              // window3
	glColor3f(1.0f, 1.0f, 0.0f); // Red

	glVertex2f(-0.5f, 0.6f);    // x, y
	glVertex2f(-0.4f, 0.6f);    // x, y
    glVertex2f(-0.4f, 0.5f);
	glVertex2f(-0.5f, 0.5f);    // x, y
	   // x, y
	glEnd();
	glBegin(GL_QUADS);              // window4
	glColor3f(1.0f, 1.0f, 0.0f); // Red

	glVertex2f(0.0f, 0.6f);    // x, y
	glVertex2f(-0.1f, 0.6f);    // x, y
    glVertex2f(-0.1f, 0.5f);
	glVertex2f(0.0f, 0.5f);    // x, y
	   // x, y
	glEnd();
	glBegin(GL_QUADS);              // window5
	glColor3f(1.0f, 1.0f, 0.0f); // Red

	glVertex2f(-0.5f, 0.4f);    // x, y
	glVertex2f(-0.4f, 0.4f);    // x, y
    glVertex2f(-0.4f, 0.3f);
	glVertex2f(-0.5f, 0.3f);    // x, y
	   // x, y
	glEnd();
	glBegin(GL_QUADS);              // window5
	glColor3f(1.0f, 1.0f, 0.0f); // Red

	glVertex2f(0.0f, 0.4f);    // x, y
	glVertex2f(-0.1f, 0.4f);    // x, y
    glVertex2f(-0.1f, 0.3f);
	glVertex2f(0.0f, 0.3f);    // x, y
	   // x, y
	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.8, 0.8, 0.8); // Red

	glVertex2f(0.5f, -0.25f);    // x, y
	glVertex2f(0.0f, -0.25f);
	glVertex2f(0.25f, -0.6f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.8, 0.8, 0.8); // Red

	glVertex2f(0.0f, -0.25f);    // x, y
	glVertex2f(-0.5f, -0.25f);
	glVertex2f(-0.25f, -0.6f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.8, 0.8, 0.8); // Red

	glVertex2f(-1.0f, -0.25f);    // x, y
	glVertex2f(-0.50f, -0.25f);
	glVertex2f(-0.75f, -0.6f);

	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.75f, -0.6f);    // x, y
	glVertex2f(-1.0f, -0.25f);

	glVertex2f(-0.75f, -0.6f);
	glVertex2f(-0.5f, -0.25f);

	glVertex2f(-0.5f, -0.25f);
	glVertex2f(-0.25f, -0.6f);

	glVertex2f(-0.25f, -0.6f);
	glVertex2f(-0.0f, -0.25f);

	glVertex2f(-0.0f, -0.25f);
	glVertex2f(0.25f, -0.6f);

	glVertex2f(0.25f, -0.6f);
	glVertex2f(0.5f, -0.25f);

	 // x, y
    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red

	glVertex2f(0.85f, 0.4f);    // x, y
	glVertex2f(0.85f, -0.4f);    // x, y

	glVertex2f(0.65f, -0.4f);    // x, y
	glVertex2f(0.65f, 0.4f);    // x, y
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red

	glVertex2f(0.70f, -0.4f);    // x, y
	glVertex2f(0.70f, -0.5f);

	glVertex2f(0.75f, -0.4f);    // x, y
	glVertex2f(0.75f, -0.5f);

	glVertex2f(0.80f, -0.4f);    // x, y
	glVertex2f(0.80f, -0.5f);

	glVertex2f(0.70f, 0.4f);    // x, y
	glVertex2f(0.70f, 0.5f);

	glVertex2f(0.75f, 0.4f);    // x, y
	glVertex2f(0.75f, 0.5f);

	glVertex2f(0.80f, 0.4f);    // x, y
	glVertex2f(0.80f, 0.5f);
	glEnd();





glFlush();  // Render now

}



/* Main function: GLUT runs as a console application starting at main()  */

int main(int argc, char** argv) {

glutInit(&argc, argv);                 // Initialize GLUT

// Create a window with the given title

glutInitWindowSize(580, 720);
glutCreateWindow("House Building PlayGround");   // Set the window's initial width & height

glutDisplayFunc(display); // Register display callback handler for window re-paint

glutMainLoop();           // Enter the event-processing loop

return 0;

}
