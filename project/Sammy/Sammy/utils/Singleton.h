/*
	use:	Ä£°åµ¥ÀýÀà-Singleton

	author:	Sammy

	SL<XXX>::getMe()->memberFunc()
*/
#pragma once

template <class T>
class SL
{
public:
	SL();
	~SL();

	static T *getMe();
	static void DrawContent();
};

template <class T>
SL<T>::SL()
{
	std::cout << "call Singleton construct" << std::endl;
}

template <class T>
SL<T>::~SL()
{
	std::cout << "call Singleton destruct" << std::endl;
}

template <class T>
T *SL<T>::getMe()
{
	static T * p = new T;
	return p;
}

template <class T>
void SL<T>::DrawContent()
{
	SL<T>::getMe()->DrawContent();
}
