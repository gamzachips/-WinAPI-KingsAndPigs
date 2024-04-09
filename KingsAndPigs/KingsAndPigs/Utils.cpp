#include "pch.h"
#include "Utils.h"

void Utils::DrawText(HDC hdc, Pos pos, const wstring& str)
{
	::TextOut(hdc, pos.x, pos.y, str.c_str(), static_cast<int32>(str.size()));
}
