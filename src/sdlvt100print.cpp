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

#include "sdlvt100print.hpp"
#include "SDL_ttf.h"

SDL2vt100Print::SDL2vt100Print(SDL_Renderer& ren) :
	m_renderer(ren)
{

}

void
SDL2vt100Print::addAttribute(VT100::TextAttr attr)
{

}

void
SDL2vt100Print::clear()
{

}

uint8_t
SDL2vt100Print::getCursorX()
{

}

void
SDL2vt100Print::resetAttributes()
{

}

void
SDL2vt100Print::setCursor(uint8_t, uint8_t)
{

}

void
SDL2vt100Print::setCursorX(uint8_t)
{

}

void
SDL2vt100Print::writeChar(uint8_t c)
{
}
