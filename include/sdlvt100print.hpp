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


#ifndef SDLVT100PRINT_HPP
#define SDLVT100PRINT_HPP

#include "vt100.hpp"
#include "SDL.h"

class SDL2vt100Print : public VT100::Print
{
public:
	
	SDL2vt100Print(SDL_Renderer&);
	
private:
	
	SDL_Renderer& m_renderer;

// VT100::Print interface
protected:
	
	void clear() override;

	void writeChar(uint8_t) override;
	
	uint8_t getCursorX() override;

	void setCursorX(uint8_t) override;
	
	void setCursor(uint8_t, uint8_t) override;
	
	void addAttribute(VT100::TextAttr) override;
	
	void resetAttributes() override;
};

#endif // SDLVT100PRINT_HPP
