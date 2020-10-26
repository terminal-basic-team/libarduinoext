/*
 * ArduinoExt is a set of utility libraries for Arduino
 * Copyright (C) 2016, 2017 Andrey V. Skvortsov <starling13@mail.ru>
 *
 * This program is free software: is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.

 * ArduinoExt library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with Posixcpp library. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#include <stdlib.h>
#include <iostream>

#include "matrix.hpp"

/*
 * Simple C++ Test Suite
 */

void test1()
{
	std::cout << "newsimpletest test 1" << std::endl;
	
	size_t M=4,N=3;
	float data[M*N] = {1,2,3, 4,5,6, 7,8,9, 10,11,12};
	Matricies<float>::transpose(data, M, N);
	return;
}

void test2()
{
	std::cout << "newsimpletest test 2" << std::endl;
	size_t N=2;

	float m1[4*3] = {1,2,3, 4,5,6, 7,8,9, 10,11,12};
	float m2[3*4] = {1,2,3,4, 5,6,7,8, 9,10,11,12};
	float m3[3*3] = {9,2,3, 4,5.76,6, 7,8,9};
	
	float buf1[1+4];
	float d;
	bool res = Matricies<float>::determinant(m3, 3, d, buf1);

	res = Matricies<float>::mul(m1,4,3,m2,3,4,m3);

	float data[2*2] = {1,2, 3,4};
	float buf[N+N+N*N];
	res = Matricies<float>::invert(data, N, buf);
	std::cout << res << std::endl;
	return;
}

int main(int argc, char** argv)
{
	std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
	std::cout << "%SUITE_STARTED%" << std::endl;

	std::cout << "%TEST_STARTED% test1 (newsimpletest)" << std::endl;
	test1();
	std::cout << "%TEST_FINISHED% time=0 test1 (newsimpletest)" << std::endl;

	std::cout << "%TEST_STARTED% test2 (newsimpletest)\n" << std::endl;
	test2();
	std::cout << "%TEST_FINISHED% time=0 test2 (newsimpletest)" << std::endl;

	std::cout << "%SUITE_FINISHED% time=0" << std::endl;

	return (EXIT_SUCCESS);
}

