#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class Cola
{
public:
	Cola() {};
	void dibujarCola(int n, float angle, float x, float y, float z);
};