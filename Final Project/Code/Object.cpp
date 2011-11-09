#include "Object.h"




Object::Object ()
	: m_render(NULL)
{
}

Object::~Object () {
	if(m_render != NULL)
		delete m_render;
}

void Object::setPosition (const vec3& position) {
	m_position = position;
}

void Object::setVelocity (const vec3& velocity) {
	m_velocity = velocity * m_speed;
}

void Object::setSize (float size) {
	m_size = size;
}

void Object::setSpeed(float speed) {
	m_speed = speed;
}

void Object::setRenderBatch(RenderBatch* rb) {
	m_render = rb;
}

vec3* Object::getPosition () {
	return &m_position;
}

RenderBatch* Object::getRenderBatch () {
	return m_render;
}

void Object::Update(float delta) {
}