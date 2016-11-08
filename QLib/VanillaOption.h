#pragma once
#include "OptionPricingModel.h"
class VanillaOption
{
public:
	VanillaOption();
	double spotPrice;
	double strikePrice;
	double expiry;
	double riskFreeInterestRate;
	double volatility;
	OptionType optionType;
	OptionPricingModel model;
	
	double GetPrice();
};

enum OptionType
{
	call,
	put
};

