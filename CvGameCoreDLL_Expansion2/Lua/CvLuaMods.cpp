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
//void SetTraitPopUnhappinessMod(int iValue);
int CvLuaPlayer::lSetTraitExtraFoundedCityTerritoryClaimRangeMod(lua_State* L)
{
	CvPlayerAI* pkPlayer = GetInstance(L);
	const int iValue = lua_tointeger(L, 2);
	pkPlayer->GetPlayerTraits()->SetPopulationUnhappinessModifier(iValue);
	return 1;
}