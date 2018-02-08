/*************************************************************************
  > File Name       : src/main.cpp
  > Author          : yezuoyi
  > Mail            : yezuoyi@163.com 
  > Created Time    : 2018年02月08日 星期四 13时34分31秒
 ************************************************************************/

#include "project/Vector.hpp"

int main () {

	Vector a(1,2), b(2, 1);
	a = a + b;
	a.print();
	return 0;
}
