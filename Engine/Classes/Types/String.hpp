#pragma once

#include "Types/CoreTypes.h"

/** @TODO(Chrisr): Implement custom String class */
// @TEMPHACK: The string class won't use std::string
#include <string>
using String = std::string;

class MString
{

public:

	MString(const std::string& From){}
	MString(const std::string&& From){}
	MString(const char* From){}
	MString(const char** From){}
};