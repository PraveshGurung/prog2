#pragma once
/*
 *  This file is part of the gobelijn software.
 *  Gobelijn is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or any later
 *  version. Gobelijn is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 *  or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for details. You should have received
 *  a copy of the GNU General Public License along with the software. If not,
 *  see <http://www.gnu.org/licenses/>.
 *
 *  Copyright 2012, Jan Broeckhove.
 */
/**
 * @file
 * Implementation for exception.
 */
#include <stdexcept>
#include <string>
#include <utility>

namespace UA_CoMP {
namespace Util {

/// Extremely simple Exception root class.
class Exception : public std::runtime_error
{
public:
        /// Constructor initializes message for the exception.
        Exception(const std::string m) : std::runtime_error(std::move(m)) {}
};

} // namespace Util
} // namespace UA_CoMP
