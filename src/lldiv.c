/*
 * ArduinoExt is a set of utility libraries for Arduino
 * 
 * Copyright (C) 2016-2018 Andrey V. Skvortsov <starling13@mail.ru>
 * Copyright (C) 2019,2021 Terminal-BASIC team
 *     <https://github.com/terminal-basic-team>
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

#include "stdlib.h"

#ifdef ARDUINO_ARCH_AVR

lldiv_t lldiv(long long int num, long long int den)
{
	lldiv_t result;
	
	result.quot = num / den;
	result.rem = num % den;
	
	return result;
}

#endif // ARDUINO_ARCH_AVR
