#ifndef _TRANSFORM_H_
#define _TRANSFORM_H_

#include "Group.h"

class Transform : public Group
{
public:
	Transform();

	virtual int setupCamera();

	virtual int setupLights();

	virtual void render();

	void translate( double x, double y, double z );

	void rotate( double angle, double x, double y, double z );

	void scale( double x, double y, double z );

	double* loadIdentity();

private:
	double* _tMatrix;
	double* _iMatrix;
};

#endif