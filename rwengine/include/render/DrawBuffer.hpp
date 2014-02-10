#pragma once 
#ifndef _DRAWBUFFER_HPP_
#define _DRAWBUFFER_HPP_
#include <GL/glew.h>

class GeometryBuffer;
class DrawBuffer {
	GLuint vao;
	
	GLenum facetype;
public:
	
	DrawBuffer();
	~DrawBuffer();
	
	GLuint getVAOName() const
		{ return vao; }
	
	void setFaceType(GLenum ft)
		{ facetype = ft; }
	
	GLenum getFaceType() const
		{ return facetype; }
	
	/**
	 * Adds a Geometry Buffer to the Draw Buffer.
	 */
	void addGeometry(GeometryBuffer* gbuff);
};

#endif 