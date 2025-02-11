#include "Cola.h"

void Cola::DibujarCola(int n, float angle, float x, float y, float z)
{
    glPushMatrix();
    glTranslatef(x, y, z);
    glRotatef(angle, 0.0, 0.0, 1.0);

    for (int i = 0; i < n; i++) {
        glPushMatrix();
        float escala = 1.0 - (i * 0.1);
        glScalef(2.0 * escala, 0.4 * escala, 1.0 * escala);
        glutSolidCube(1.0);
        glPopMatrix();
        glTranslatef(1.0 * escala, 0.0, 0.0);
        glRotatef(angle, 0.0, 0.0, 1.0);
    }

    glPopMatrix();
}