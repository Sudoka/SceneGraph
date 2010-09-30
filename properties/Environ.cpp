#include "Environ.h"
#include "Utility.h"

Environ::Environ()
{
	_fogStart = 0;
	_fogEnd   = 0;
	_fogMode  = GL_LINEAR;

	Utility::initVectorf( _fogColor, 4 );
}

void Environ::setFogColor( float r, float g, float b, float a )
{
	_fogColor[0] = r;
	_fogColor[1] = g;
	_fogColor[2] = b;
	_fogColor[3] = a;
}

void Environ::setFogDistance( float fogStart, float fogEnd )
{
	_fogStart = fogStart;
	_fogEnd   = fogEnd;
}

void Environ::setFogMode( GLenum fogMode )
{
	_fogMode = fogMode;
}

void Environ::enableFog()
{
	glEnable( GL_FOG );
	glFogfv(  GL_FOG_COLOR, _fogColor );
	glFogi(   GL_FOG_MODE,	_fogMode );
	glFogf(   GL_FOG_START, _fogStart );
	glFogf(   GL_FOG_END,	_fogEnd );
}

void Environ::disableFog()
{
	glDisable( GL_FOG );
}
