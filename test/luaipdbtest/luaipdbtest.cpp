
#include "luaipdb.sol.h"

int main( int argc, char* argv[] ) {

    lua_State* state = luaL_newstate();
    if (NULL == state)
    {
        return -1;
    }
    return require_luaipdb(state);
}
