#include <CvGameCoreDLLPCH.h>
#include "CvLuaPlayer.h"

//Utility macro for registering methods
#define Method(Name)			\
	lua_pushcclosure(L, l##Name, 0);	\
	lua_setfield(L, t, #Name);

void CvLuaPlayer::PushModMethods(lua_State *L, int t)
{
	Method(SetTraitPopUnhappinessMod);
	Method(SetTraitExtraFoundedCityTerritoryClaimRangeMod);
	Method(SetTraitSetGreatScientistRateMod);
}

//------------------------------------------------------------------------------
//void SetTraitPopUnhappinessMod(int iValue);
int CvLuaPlayer::lSetTraitPopUnhappinessMod(lua_State* L)
{
	CvPlayerAI* pkPlayer = GetInstance(L);
	const int iValue = lua_tointeger(L, 2);
	pkPlayer->GetPlayerTraits()->SetPopulationUnhappinessModifier(iValue);
	return 1;
}

//------------------------------------------------------------------------------
//void SetTraitExtraFoundedCityTerritoryClaimRangeMod(int iValue);
int CvLuaPlayer::lSetTraitExtraFoundedCityTerritoryClaimRangeMod(lua_State* L)
{
	CvPlayerAI* pkPlayer = GetInstance(L);
	const int iValue = lua_tointeger(L, 2);
	pkPlayer->GetPlayerTraits()->SetExtraFoundedCityTerritoryClaimRange(iValue);
	return 1;
}

//------------------------------------------------------------------------------
//void SetTraitSetGreatScientistRateMod(int iValue);
int CvLuaPlayer::lSetTraitSetGreatScientistRateMod(lua_State* L)
{
	CvPlayerAI* pkPlayer = GetInstance(L);
	const int iValue = lua_tointeger(L, 2);
	pkPlayer->GetPlayerTraits()->SetGreatScientistRateModifier(iValue);
	return 1;
}

//------------------------------------------------------------------------------
//void SetTraitWonderProductionMod(int iValue);
int CvLuaPlayer::lSetTraitWonderProductionMod(lua_State* L)
{
	CvPlayerAI* pkPlayer = GetInstance(L);
	const int iValue = lua_tointeger(L, 2);
	pkPlayer->GetPlayerTraits()->SetWonderProductionModifier(iValue);
	return 1;
}

//------------------------------------------------------------------------------
//void SetTraitCityStateFriendshipMod(int iValue);
int CvLuaPlayer::lSetTraitCityStateFriendshipMod(lua_State* L)
{
	CvPlayerAI* pkPlayer = GetInstance(L);
	const int iValue = lua_tointeger(L, 2);
	pkPlayer->GetPlayerTraits()->SetCityStateFriendshipModifier(iValue);
	return 1;
}

//------------------------------------------------------------------------------
//void SetTraitCityStateFriendshipMod(int iValue);
int CvLuaPlayer::lSetTraitLandTradeRouteRangeBonusMod(lua_State* L)
{
	CvPlayerAI* pkPlayer = GetInstance(L);
	const int iValue = lua_tointeger(L, 2);
	pkPlayer->GetPlayerTraits()->SetLandTradeRouteRangeBonus(iValue);
	return 1;
}