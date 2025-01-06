//1,bereket getye 00717/14
//solomon melkamu 02683/14
#include <windows.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Set the coordinate system to match the screen
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0); // Coordinate system from (0,0) to (1,1)
    glMatrixMode(GL_MODELVIEW);

    // Draw the red upper rectangle
    glColor3f(0.85, 0.0, 0.0); // Red
    glBegin(GL_QUADS);
    glVertex2f(0.0, 0.5);
    glVertex2f(1.0, 0.5);
    glVertex2f(1.0, 1.0);
    glVertex2f(0.16, 1.0);
    glEnd();

    // Draw the blue lower rectangle
    glColor3f(0.0, 0.0, 0.85); // Blue
    glBegin(GL_QUADS);
    glVertex2f(0.0, 0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(1.0, 0.5);
    glVertex2f(0.0, 0.5);
    glEnd();

    //Draw the white border around the green Y-shape
    glColor3f(1.0, 1.0, 1.0); // White
    glBegin(GL_POLYGON);
    glVertex2f(0.16, 1.0);    // Top left
    glVertex2f(0.15, 1.0);
    glVertex2f(0.0, 0.1);    // Bottom left
    glVertex2f(0.35, 0.4);   // Bottom left of Y
    glVertex2f(0.55, 0.5);   // Middle tip of Y
   // glVertex2f(0.35, 0.6);   // Top left of Y
     //glVertex2f(0.42, 0.4);
     //glVertex2f(0.47, 0.4);
     // glVertex2f(0.12, 0.0);
       glVertex2f(0.16, 0.0);
        glVertex2f(0.12, 0.0);


    glEnd();


    // Draw the white border around the green rectangle
    glBegin(GL_QUADS);
    glVertex2f(0.38, 0.35);  // Bottom left of border
    glVertex2f(0.38, 0.65);  // Top left of border
    glVertex2f(1.0, 0.65);   // Top right of border
    glVertex2f(1.0, 0.35);   // Bottom right of border
    glEnd();

    // Draw the green Y-shape inside the white border
    glColor3f(0.0,0.4, 0.0); // Green
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.88);   // Top left of Y
    glVertex2f(0.0, 1.0);
    glVertex2f(0.12, 1.0);
       glVertex2f(0.5, 0.5);    // Middle tip of Y
    glVertex2f(0.0, 0.12);   // Bottom left of Y
    glVertex2f(0.37, 0.42);  // Bottom-left of Y
    glVertex2f(0.37, 0.58);  // Top-left of Y
    glVertex2f(0.42, 0.4);    // Middle tip of 3
    glVertex2f(0.12, 0.0);    // Middle tip of Y
    glVertex2f(0.0, 0.0);    // Middle tip of Y
       glVertex2f(0.0, 0.12);


    /*
     glVertex2f(0.37, 0.58);
      glVertex2f(0.37, 0.58);
       glVertex2f(0.37, 0.58);
        glVertex2f(0.37, 0.58);
        glVertex2f(0.37, 0.58);
        */

    glEnd();

    // Draw the green rectangle inside the white border
    glBegin(GL_QUADS);
    glVertex2f(0.4, 0.38);  // Bottom left of rectangle
    glVertex2f(0.4, 0.62);  // Top left of rectangle
    glVertex2f(1.0, 0.62);  // Top right of rectangle
    glVertex2f(1.0, 0.38);  // Bottom right of rectangle
    glEnd();

    // Draw the yellow triangle inside the green Y-shape
    glColor3f(1.0, 0.8, 0.0); // Yellow
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 0.88);    // Top left
    glVertex2f(0.0, 0.12);    // Bottom left
    glVertex2f(0.3, 0.5);    // Middle tip
    glEnd();

    // Draw the black triangle inside the yellow triangle
    glColor3f(0.0, 0.0, 0.0); // Black
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 0.8);
    glVertex2f(0.0, 0.2);
    glVertex2f(0.25, 0.5);
    glEnd();

    glFlush(); // Render now
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("South African Flag");

    // Set background color to white
    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
