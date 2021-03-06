/***********************************************************************
FrameBuffer - Base class for data structures to store frames received
from a raw video stream.
Copyright (c) 2009-2010 Oliver Kreylos

This file is part of the Basic Video Library (Video).

The Basic Video Library is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as published
by the Free Software Foundation; either version 2 of the License, or (at
your option) any later version.

The Basic Video Library is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License along
with the Basic Video Library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
***********************************************************************/

#ifndef VIDEO_FRAMEBUFFER_INCLUDED
#define VIDEO_FRAMEBUFFER_INCLUDED

#include <stddef.h>

namespace Video {

class FrameBuffer
	{
	/* Elements: */
	public:
	unsigned char* start; // Pointer to start of buffer in application address space
	size_t size; // Size of buffer in bytes
	size_t used; // Actual amount of data in the frame
	
	/* Constructors and destructors: */
	FrameBuffer(void) // Creates an empty, unallocated frame buffer
		:start(0),size(0),used(0)
		{
		}
	virtual ~FrameBuffer(void) // Destroys the frame buffer and releases all allocated resources
		{
		}
	};

}

#endif
