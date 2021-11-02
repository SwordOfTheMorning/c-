#include<stdio.h>
extern "C" {
	#include"lua.h"	
	#include"lualib.h"
	#include"lauxlib.h"
};

int add(lua_State* L)
{
	int a = lua_tointeger(L, -2);
	int b = lua_tointeger(L, -1);
	int c = a + b;
	lua_pushinteger(L, c);	
	return 1;
}

luaL_Reg array[] = {
	{"add", add},
	{NULL, NULL}
};

extern "C" int luaopen_ctestlib(lua_State* L)
{
	luaL_newlib(L, array);
	return 1;
}
