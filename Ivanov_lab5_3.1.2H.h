#pragma once
#include <iostream>
using namespace std;
class Music
{
public:
	void openFromFile(char *) { std::cout << "OK" << std::endl; };
};

class Singleton
{
private:
	static Singleton * p_instance;
	// Конструкторы и оператор присваивания недоступны клиентам
	Singleton() {
	}


	Singleton(const Singleton&);
	Singleton& operator=(Singleton&);
public:
	static Singleton * getInstance() {
		if (!p_instance)
			p_instance = new Singleton();
		return p_instance;
	}
	Music music;
};
Singleton* Singleton::p_instance = 0;
