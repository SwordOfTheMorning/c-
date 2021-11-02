#include<stdio.h>
#include<iostream>
#include<string.h>
//#include"lua.h"
//#include"lualib.h"
//#include"lauxlib.h"
extern "C" {
	#include"lua.h"	
	#include"lualib.h"
	#include"lauxlib.h"
};
using namespace std;

int sub(lua_State* L)
{
	int a = lua_tointeger(L, -2);
	int b = lua_tointeger(L, -1);
	int c = a - b;
	lua_pushinteger(L, c);	
	lua_pushstring(L, "hhh");
	return 2;
}

int main()
{
	cout<<"111"<<endl;
	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	//const char* s = "local add = function(a, b) return a + b end";
	//cout<< s <<endl;
	//luaL_loadstring(L, s);
	luaL_dofile(L, "add.lua");
	int type = lua_getglobal(L, "add");
	cout<<"add is :"<< type <<endl;
	//type = lua_getglobal(L, "sub");
	//cout<<"sub is :"<< type <<endl;
	//type = lua_getglobal(L, "x");
	//cout<<"x is :"<< type <<endl;
	if(!lua_isfunction(L, -1))
	{
		cout<<"func error"<<endl;
		return -1;
	}
	lua_pushinteger(L, 1);
	lua_pushinteger(L, 2);
	if(lua_pcall(L, 2, 1, 0))
	{
		string error = string(lua_tostring(L, -1));
		cout<< "pcall error:" << error <<endl;
		return -1;
	}
	if(!lua_isinteger(L, -1))
	{
		cout<<"return error"<<endl;
		return -1;
	}
	int sum = lua_tointeger(L, -1);
	cout<<"sum:"<<sum<<endl;

	int a = lua_gettop(L);
	cout<<a<<endl;
	lua_pop(L, a);

	//lua use c++
	const char* str = "print(sub(3, 1))";
	lua_register(L, "sub", sub);
	luaL_dostring(L, str);

	a = lua_gettop(L);
	cout<<a<<endl;
	lua_pop(L, a);
	return 0;
}
