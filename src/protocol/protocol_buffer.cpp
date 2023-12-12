/*
  MyServer
  Copyright (C) 2002, 2003, 2004, 2007, 2009, 2010, 2011 Free Software
  Foundation, Inc.
  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "myserver.h"

#include <include/protocol/protocol_buffer.h>

/*!
  Create the buffer.
 */
ProtocolBuffer::ProtocolBuffer ()
{

}

/*!
  Destroy the protocol buffer object.
 */
ProtocolBuffer::~ProtocolBuffer ()
{

}

/*!
  Check if the protocol allows the connection to be removed.
  \param wait Define if the protocol can wait that the current job is
  finished before.
 */
bool ProtocolBuffer::allowDelete (bool wait)
{
  return true;
}