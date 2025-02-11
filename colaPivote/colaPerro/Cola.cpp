#include "Cola.h"

void Cola::dibujarCola(int n, float angle, float x, float y, float z) {

	int i;
	glPushMatrix();
	glTranslatef(-1.0, 0.0, 0.0);
	glRotatef(angle, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(2.0, 0.2, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	for (i = 0; i < n; i++) {
		glTranslatef(1.0, 0.0, 0.0);
		glRotatef(angle, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.2, 0.2);
		glutSolidCube(1.0);
		glPopMatrix();
	}

	glPushMatrix();
	glTranslatef(x, y, z + 2);
	glScalef(2.0, 2.0, 0.2);
	glutSolidSphere(0.5, 20, 20); 
	glPopMatrix();

	glPopMatrix();
}