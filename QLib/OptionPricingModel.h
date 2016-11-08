#pragma once
template<typename T>
class OptionPricingModel
{
public:
	OptionPricingModel();
	virtual double CalculatePrice(T option) const;
	virtual double CalculateDelta(T option) const;
	virtual double CalculateGama(T option) const;
	virtual double CalculateVega(T option) const;
	virtual double CalculateTheta(T option) const;
};

