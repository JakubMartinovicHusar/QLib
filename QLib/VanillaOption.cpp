#include "pch.h"
#include "VanillaOption.h"


VanillaOption::VanillaOption()
{
	
}

double VanillaOption::GetPrice()
{
	return this->model.CalculatePrice(this);
}

