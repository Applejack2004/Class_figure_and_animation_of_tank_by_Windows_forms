#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
//#include "Exeption.h"


using namespace System::Drawing;
 class figure
{
protected:
	int x, y;
public:
	figure(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
	virtual void Show1(Graphics^ gr) = 0;
	virtual void Show2(Graphics^ gr) = 0;
	virtual void Show3(Graphics^ gr) = 0;
	virtual void Hide(Graphics^ gr) = 0;
	virtual int get_rightx() = 0;
	virtual int get_upy() = 0;
	virtual int get_leftx() = 0;
	virtual int get_lowy() = 0;
	virtual void Move1(Graphics^ gr, int dx, int dy)
	{
		
		//gr->Clear(Color::White);

		Hide(gr);
		x += dx;
		y += dy;
		Show1(gr);
	}
	virtual void Move2(Graphics^ gr, int dx, int dy)
	{


		//gr->Clear(Color::White);

		Hide(gr);
		x += dx;
		y += dy;
		Show2(gr);
	}
	virtual void Move3(Graphics^ gr, int dx, int dy)
	{
	
		//gr->Clear(Color::White);

		Hide(gr);
		x += dx;
		y += dy;
		Show3(gr);
	}
	//virtual double perimetr() = 0;

	//virtual double area() = 0;

	//virtual void print() = 0;

};
class rectangle :public figure {
protected:
	 int w, h;
public:
	rectangle(int _w, int _h, int _x, int _y) :figure(_x, _y)
	{
		w = _w;
		h = _h;
	}
	int get_rightx()
	{
		x = x + w;
		return x;
	}
	int get_leftx()
	{
		return x ;
	}
	int get_upy()
	{
		y = y + h;
		return y;
	}
	int get_lowy()
	{
		return y;
	}
	void Show1(Graphics^ gr)
	{
		gr->FillRectangle(Brushes::Black, x, y, w, h);
	}
	void Show2(Graphics^ gr)
	{
		gr->FillRectangle(Brushes::Green, x, y, w, h);
	}
	void Show3(Graphics^ gr)
	{
		gr->FillRectangle(Brushes::Gray, x, y, w, h);
	}
	void Hide(Graphics^ gr)
	{
		gr->FillRectangle(Brushes::White, x, y, w, h);
	}
};
 class Square : public rectangle
{
public:
	Square(int _a, int _x, int _y) : rectangle(_a, _a,  _x, _y)
	{

	}
};
 class Ellips : public rectangle
 {

 public:
	 Ellips(int _w, int _h, int _x, int _y) :rectangle(_w, _h, _x, _y)
	 {}

	 int get_rightx()
	 {
		
		 return x+w;
	 }
	 int get_leftx()
	 {
		 return x;
	 }
	 int get_upy()
	 {
		 return y;
	 }
	 int get_lowy()
	 {
		 return y+h;
	 }
	 void Show1(Graphics^ gr)
	 {
		 gr->FillEllipse(Brushes::Black, x, y, w, h);
	 }
	 void Show2(Graphics^ gr)
	 {
		 gr->FillEllipse(Brushes::Green, x, y, w, h);
	 }
	 void Show3(Graphics^ gr)
	 {
		 gr->FillEllipse(Brushes::Gray, x, y, w, h);
	 }
	 void Hide(Graphics^ gr)
	 {
		 gr->FillEllipse(Brushes::White, x, y, w, h);
	 }

 };
