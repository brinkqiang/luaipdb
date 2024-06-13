# luaipdb

Copyright (c) 2013-2018 brinkqiang (brink.qiang@gmail.com)

[![luaipdb](https://img.shields.io/badge/brinkqiang-luaipdb-blue.svg?style=flat-square)](https://github.com/brinkqiang/luaipdb)
[![License](https://img.shields.io/badge/license-MIT-brightgreen.svg)](https://github.com/brinkqiang/luaipdb/blob/master/LICENSE)
[![blog](https://img.shields.io/badge/Author-Blog-7AD6FD.svg)](https://brinkqiang.github.io/)
[![Open Source Love](https://badges.frapsoft.com/os/v3/open-source.png)](https://github.com/brinkqiang)
[![GitHub stars](https://img.shields.io/github/stars/brinkqiang/luaipdb.svg?label=Stars)](https://github.com/brinkqiang/luaipdb) 
[![GitHub forks](https://img.shields.io/github/forks/brinkqiang/luaipdb.svg?label=Fork)](https://github.com/brinkqiang/luaipdb)

## Build status
| [Linux][lin-link] | [Mac][mac-link] | [Windows][win-link] |
| :---------------: | :----------------: | :-----------------: |
| ![lin-badge]      | ![mac-badge]       | ![win-badge]        |

[lin-badge]: https://github.com/brinkqiang/luaipdb/workflows/linux/badge.svg "linux build status"
[lin-link]:  https://github.com/brinkqiang/luaipdb/actions/workflows/linux.yml "linux build status"
[mac-badge]: https://github.com/brinkqiang/luaipdb/workflows/mac/badge.svg "mac build status"
[mac-link]:  https://github.com/brinkqiang/luaipdb/actions/workflows/mac.yml "mac build status"
[win-badge]: https://github.com/brinkqiang/luaipdb/workflows/win/badge.svg "win build status"
[win-link]:  https://github.com/brinkqiang/luaipdb/actions/workflows/win.yml "win build status"

## env
install cmake
## Intro
luaipdb

win
```
build.bat
cd bin/relwithdebinfo
chcp 65001
lua ../script/main.lua
```

linux
```
./build.sh
cd bin/relwithdebinfo
./lua ../script/main.lua
```

```lua
-- lua script

local luaipdb = require("luaipdb")

local db_file = "ipip.ipdb"
print(luaipdb.City)
local db = luaipdb.City.new(db_file)

-- Print database information
print("IPv4 Support:", db:IsIPv4Support())
print("IPv6 Support:", db:IsIPv6Support())
print("Build Time:", db:BuildTime())

print("Languages:")
for _, lang in ipairs(db:Languages()) do
print(lang, " ")
end
print()

print("Fields:")
for _, field in ipairs(db:Fields()) do
print(field, " ")
end
print()

-- Look up IP address information
local ip = "27.190.24.0"
local country = "CN"

local results = db:Find(ip, country)
print(table.concat(results, ", "))

local map_results = db:FindMap(ip, country)
for key, value in pairs(map_results) do
print(key .. ": " .. value .. ", ")
end
print()

local info = db:FindInfo("127.0.0.1", country)
print(info:str())

```


## Contacts

## Thanks
