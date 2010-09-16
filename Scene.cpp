#include "Scene.h"

Scene* Scene::_instance = NULL;

Scene* Scene::getInstance()
{
	if( _instance == NULL )
		_instance = new Scene();

	return _instance;
}

Scene::Scene()
{
	//empty
}

Scene::~Scene()
{
	delete _instance;
	_instance = NULL;
}

int Scene::setupCamera()
{
	Group::setupCamera();
	return 1;
}

int Scene::setupLights()
{
	glEnable(GL_LIGHTING);
	glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
	Group::setupLights();
	return 1;
}

void Scene::render()
{
	Group::render();
}
