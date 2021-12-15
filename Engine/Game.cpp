/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
	int x = 400;
	int y = 300;
	int z = 255;
	int color = (255, 0, 255);

	if(wnd.kbd.KeyIsPressed(VK_UP))
	{
		y = y - 50;
	}

	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		y = y + 50;
	}

	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		x = x - 50;
	}

	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		x = x + 50;
	}

	if (wnd.kbd.KeyIsPressed(VK_CONTROL))
	{
		z = 0;
	}

	gfx.PutPixel(x + 9, y + 1, 255, z, 255);
	gfx.PutPixel(x + 8, y + 2, 255, z, 255);
	gfx.PutPixel(x + 10, y, 255, z, 255);
	gfx.PutPixel(x + 9, y - 1, 255, z, 255);
	gfx.PutPixel(x + 8, y - 2, 255, z, 255);

	gfx.PutPixel(x - 9, y + 1, 255, z, 255);
	gfx.PutPixel(x - 8, y + 2, 255, z, 255);
	gfx.PutPixel(x - 10, y, 255, z, 255);
	gfx.PutPixel(x - 9, y - 1, 255, z, 255);
	gfx.PutPixel(x - 8, y - 2, 255, z, 255);

	gfx.PutPixel(x + 1, y + 9, 255, z, 255);
	gfx.PutPixel(x + 2, y + 8, 255, z, 255);
	gfx.PutPixel(x, y + 10, 255, z, 255);
	gfx.PutPixel(x - 1, y + 9, 255, z, 255);
	gfx.PutPixel(x - 2, y + 8, 255, z, 255);

	gfx.PutPixel(x + 1, y - 9, 255, z, 255);
	gfx.PutPixel(x + 2, y - 8, 255, z, 255);
	gfx.PutPixel(x, y - 10, 255, z, 255);
	gfx.PutPixel(x - 1, y - 9, 255, z, 255);
	gfx.PutPixel(x - 2, y - 8, 255, z, 255);

	
}