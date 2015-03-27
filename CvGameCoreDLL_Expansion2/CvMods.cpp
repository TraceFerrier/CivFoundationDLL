//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//!	 \file		CvMods.cpp
//!
//!		This file includes class method additions for the Foundation Mod.
//!
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include "CvGameCoreDLLPCH.h"

void CvPlayerTraits::SetPopulationUnhappinessModifier(int popUnhappinessModifier)
{
	m_iPopulationUnhappinessModifier = popUnhappinessModifier;
}

void CvPlayerTraits::SetExtraFoundedCityTerritoryClaimRange(int range)
{
	m_iExtraFoundedCityTerritoryClaimRange = range;

}

void CvPlayerTraits::SetGreatScientistRateModifier(int rateModifier)
{
	m_iGreatScientistRateModifier = rateModifier;
};

void CvPlayerTraits::SetWonderProductionModifier(int rateModifier)
{
	m_iWonderProductionModifier = rateModifier;
};

void CvPlayerTraits::SetCityStateFriendshipModifier(int rateModifier)
{
	m_iCityStateFriendshipModifier = rateModifier;
};

void CvPlayerTraits::SetLandTradeRouteRangeBonus(int bonus)
{
	m_iLandTradeRouteRangeBonus = bonus;
};

void CvPlayerTraits::SetTradeRouteResourceModifier(int modifier)
{
	m_iTradeRouteResourceModifier = modifier;
};

void CvPlayerTraits::SetTradeReligionModifier(int modifier)
{
	m_iTradeReligionModifier = modifier;
};





