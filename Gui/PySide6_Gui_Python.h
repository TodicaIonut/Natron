/* ***** BEGIN LICENSE BLOCK *****
 * This file is part of Natron <https://natrongithub.github.io/>,
 * (C) 2018-2024 The Natron developers
 * (C) 2013-2018 INRIA and Alexandre Gauthier-Foichat
 *
 * Natron is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Natron is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Natron.  If not, see <http://www.gnu.org/licenses/gpl-2.0.html>
 * ***** END LICENSE BLOCK ***** */


#ifndef PYSIDE6_GUI_PYTHON_H
#define PYSIDE6_GUI_PYTHON_H

// Defined for shiboken6-specific tweaks
#define SBK6_RUN

#ifndef BOOST_SERIALIZATION_VERSION_HPP
#define BOOST_SERIALIZATION_VERSION_HPP
#define BOOST_CLASS_VERSION(T, N)
#endif /* BOOST_SERIALIZATION_VERSION_HPP */

#ifndef BOOST_SERIALIZATION_SPLIT_MEMBER_HPP
#define BOOST_SERIALIZATION_SPLIT_MEMBER_HPP
#define BOOST_SERIALIZATION_SPLIT_MEMBER()
#endif /* BOOST_SERIALIZATION_SPLIT_MEMBER_HPP */

#include "Pyside_Gui_Python.h"

#endif // PYSIDE6_GUI_PYTHON_H
