#include "Casa.h"

void Casa :: dibujarCasa(float x, float y, float z){

	glPushMatrix();


		glTranslatef(x, y, z);

		glBegin(GL_TRIANGLES);
			glVertex3f(-1, 0, 0);
			glVertex3f(1, 0, 0);
			glVertex3f(0, 1, 0);
		glEnd();






	glPopMatrix();

}
