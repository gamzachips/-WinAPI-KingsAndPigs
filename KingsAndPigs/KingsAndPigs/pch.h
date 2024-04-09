#pragma once

#include "Types.h"
#include "Defines.h"
#include "Enums.h"
#include <windows.h>
#include <wchar.h>
#include <string>
#include <format>

using namespace std;

#include "TimeManager.h"

#include <vector>

#define _CRTDEBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#ifdef _DEBUG
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif