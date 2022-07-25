#include "Header.h"
int main()
{
	char * s = new char[255];
			s = char *("mu.ogg");
	Singleton::getInstance()->music.openFromFile(s);
}