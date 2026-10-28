#pragma once
#include <windows.h>
#include <stdio.h>
inline LRESULT CALLBACK SimpleProc(HWND h, UINT m, WPARAM w, LPARAM l){
  if (m == WM_DESTROY) PostQuitMessage(0);
  return DefWindowProc(h,m,w,l);
}
