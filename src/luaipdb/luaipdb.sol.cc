/********************************************************************
**       This cc file is generated by program,                     **
**            Please do not change it directly.                    **
**                   Auther: brinkqiang                            **
********************************************************************/
// source: luaipdb.pkg

#include "luaipdb.sol.h"
#include <limits>


#include "ipdb.h"


#include "sol/sol.hpp"
#include "luaipdb.sol.inl"

namespace lua_module_luaipdb
{
    static sol::table require_api(sol::this_state L)
    {
        sol::state_view lua(L);
        sol::table module = lua.create_table();

        module.new_usertype<MetaData>(
            "MetaData"
            , sol::constructors<>()
            , sol::base_classes, sol::bases<>()
            , "Parse", sol::make_reference<sol::function>(lua.lua_state(), &MetaData::Parse)
            
            , "Build", &MetaData::Build
            , "IPVersion", &MetaData::IPVersion
            , "Languages", &MetaData::Languages
            , "NodeCount", &MetaData::NodeCount
            , "TotalSize", &MetaData::TotalSize
            , "Fields", &MetaData::Fields
            );
        module.new_usertype<Reader>(
            "Reader"
            , sol::constructors<Reader(const string&)>()
            , sol::meta_function::garbage_collect, sol::destructor([](Reader& temp) { temp.~Reader(); })
            , sol::base_classes, sol::bases<>()
            , "Find", sol::make_reference<sol::function>(lua.lua_state(), &Reader::Find)
            , "FindMap", sol::make_reference<sol::function>(lua.lua_state(), &Reader::FindMap)
            , "IsIPv4Support", sol::make_reference<sol::function>(lua.lua_state(), &Reader::IsIPv4Support)
            , "IsIPv6Support", sol::make_reference<sol::function>(lua.lua_state(), &Reader::IsIPv6Support)
            , "BuildTime", sol::make_reference<sol::function>(lua.lua_state(), &Reader::BuildTime)
            , "Languages", sol::make_reference<sol::function>(lua.lua_state(), &Reader::Languages)
            , "Fields", sol::make_reference<sol::function>(lua.lua_state(), &Reader::Fields)
            
            );
        module.new_usertype<ASNInfo>(
            "ASNInfo"
            , sol::constructors<ASNInfo(const vector<string>&,const vector<string>&)>()
            , sol::base_classes, sol::bases<>()
            , "GetAsn", sol::make_reference<sol::function>(lua.lua_state(), &ASNInfo::GetAsn)
            , "GetReg", sol::make_reference<sol::function>(lua.lua_state(), &ASNInfo::GetReg)
            , "GetCc", sol::make_reference<sol::function>(lua.lua_state(), &ASNInfo::GetCc)
            , "GetNet", sol::make_reference<sol::function>(lua.lua_state(), &ASNInfo::GetNet)
            , "GetOrg", sol::make_reference<sol::function>(lua.lua_state(), &ASNInfo::GetOrg)
            , "GetType", sol::make_reference<sol::function>(lua.lua_state(), &ASNInfo::GetType)
            , "GetDomain", sol::make_reference<sol::function>(lua.lua_state(), &ASNInfo::GetDomain)
            , "str", sol::make_reference<sol::function>(lua.lua_state(), &ASNInfo::str)
            
            );
        module.new_usertype<DistrictInfo>(
            "DistrictInfo"
            , sol::constructors<DistrictInfo(const vector<string>&,const vector<string>&)>()
            , sol::base_classes, sol::bases<>()
            , "GetCountryName", sol::make_reference<sol::function>(lua.lua_state(), &DistrictInfo::GetCountryName)
            , "GetRegionName", sol::make_reference<sol::function>(lua.lua_state(), &DistrictInfo::GetRegionName)
            , "GetCityName", sol::make_reference<sol::function>(lua.lua_state(), &DistrictInfo::GetCityName)
            , "GetDistrictName", sol::make_reference<sol::function>(lua.lua_state(), &DistrictInfo::GetDistrictName)
            , "GetChinaAdminCode", sol::make_reference<sol::function>(lua.lua_state(), &DistrictInfo::GetChinaAdminCode)
            , "GetCoveringRadius", sol::make_reference<sol::function>(lua.lua_state(), &DistrictInfo::GetCoveringRadius)
            , "GetLatitude", sol::make_reference<sol::function>(lua.lua_state(), &DistrictInfo::GetLatitude)
            , "GetLongitude", sol::make_reference<sol::function>(lua.lua_state(), &DistrictInfo::GetLongitude)
            , "str", sol::make_reference<sol::function>(lua.lua_state(), &DistrictInfo::str)
            
            );
        module.new_usertype<District>(
            "District"
            , sol::constructors<District(const string&)>()
            , sol::base_classes, sol::bases<Reader>()
            , "FindInfo", sol::make_reference<sol::function>(lua.lua_state(), &District::FindInfo)
            
            );
        module.new_usertype<CityInfo>(
            "CityInfo"
            , sol::constructors<CityInfo(const vector<string>&,const vector<string>&)>()
            , sol::base_classes, sol::bases<>()
            , "GetCountryName", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetCountryName)
            , "GetRegionName", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetRegionName)
            , "GetCityName", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetCityName)
            , "GetOwnerDomain", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetOwnerDomain)
            , "GetIspDomain", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetIspDomain)
            , "GetLatitude", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetLatitude)
            , "GetLongitude", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetLongitude)
            , "GetTimezone", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetTimezone)
            , "GetUtcOffset", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetUtcOffset)
            , "GetChinaAdminCode", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetChinaAdminCode)
            , "GetIddCode", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetIddCode)
            , "GetCountryCode", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetCountryCode)
            , "GetContinentCode", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetContinentCode)
            , "GetIDC", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetIDC)
            , "GetBaseStation", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetBaseStation)
            , "GetCountryCode3", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetCountryCode3)
            , "GetEuropeanUnion", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetEuropeanUnion)
            , "GetCurrencyCode", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetCurrencyCode)
            , "GetCurrencyName", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetCurrencyName)
            , "GetAnycast", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetAnycast)
            , "GetLine", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetLine)
            , "GetDistrictInfo", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetDistrictInfo)
            , "GetRoute", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetRoute)
            , "GetASN", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetASN)
            , "GetASNInfo", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetASNInfo)
            , "GetAreaCode", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetAreaCode)
            , "GetUsageType", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::GetUsageType)
            , "str", sol::make_reference<sol::function>(lua.lua_state(), &CityInfo::str)
            
            );
        module.new_usertype<City>(
            "City"
            , sol::constructors<City(const string&)>()
            , sol::base_classes, sol::bases<Reader>()
            , "FindInfo", sol::make_reference<sol::function>(lua.lua_state(), &City::FindInfo)
            
            );
        module.new_usertype<BaseStationInfo>(
            "BaseStationInfo"
            , sol::constructors<BaseStationInfo(const vector<string>&,const vector<string>&)>()
            , sol::base_classes, sol::bases<>()
            , "GetCountryName", sol::make_reference<sol::function>(lua.lua_state(), &BaseStationInfo::GetCountryName)
            , "GetRegionName", sol::make_reference<sol::function>(lua.lua_state(), &BaseStationInfo::GetRegionName)
            , "GetCityName", sol::make_reference<sol::function>(lua.lua_state(), &BaseStationInfo::GetCityName)
            , "GetOwnerDomain", sol::make_reference<sol::function>(lua.lua_state(), &BaseStationInfo::GetOwnerDomain)
            , "GetIspDomain", sol::make_reference<sol::function>(lua.lua_state(), &BaseStationInfo::GetIspDomain)
            , "GetBaseStation", sol::make_reference<sol::function>(lua.lua_state(), &BaseStationInfo::GetBaseStation)
            , "str", sol::make_reference<sol::function>(lua.lua_state(), &BaseStationInfo::str)
            
            );
        module.new_usertype<BaseStation>(
            "BaseStation"
            , sol::constructors<BaseStation(const string&)>()
            , sol::base_classes, sol::bases<Reader>()
            , "FindInfo", sol::make_reference<sol::function>(lua.lua_state(), &BaseStation::FindInfo)
            
            );
        module.new_usertype<IDCInfo>(
            "IDCInfo"
            , sol::constructors<IDCInfo(const vector<string>&,const vector<string>&)>()
            , sol::base_classes, sol::bases<>()
            , "GetCountryName", sol::make_reference<sol::function>(lua.lua_state(), &IDCInfo::GetCountryName)
            , "GetRegionName", sol::make_reference<sol::function>(lua.lua_state(), &IDCInfo::GetRegionName)
            , "GetCityName", sol::make_reference<sol::function>(lua.lua_state(), &IDCInfo::GetCityName)
            , "GetOwnerDomain", sol::make_reference<sol::function>(lua.lua_state(), &IDCInfo::GetOwnerDomain)
            , "GetIspDomain", sol::make_reference<sol::function>(lua.lua_state(), &IDCInfo::GetIspDomain)
            , "GetIDC", sol::make_reference<sol::function>(lua.lua_state(), &IDCInfo::GetIDC)
            , "str", sol::make_reference<sol::function>(lua.lua_state(), &IDCInfo::str)
            
            );
        module.new_usertype<IDC>(
            "IDC"
            , sol::constructors<IDC(const string&)>()
            , sol::base_classes, sol::bases<Reader>()
            , "FindInfo", sol::make_reference<sol::function>(lua.lua_state(), &IDC::FindInfo)
            
            );
        return module;
    }
}

LUA_API int luaopen_luaipdb(lua_State* L)
{
    return sol::stack::call_lua(L, 1, lua_module_luaipdb::require_api);
}

LUA_API int require_luaipdb(lua_State* L)
{
    luaL_requiref(L, "luaipdb", luaopen_luaipdb, 0);
    printf("lua module: require luaipdb\n");
    return 1;
}
