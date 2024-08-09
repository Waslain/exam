#pragma once 

#include <iostream>
#include <map>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget* Target);
		void forgetTargetType(std::string const &Targetname);
		ATarget *createTarget(std::string const &newTarget);
	private:
		TargetGenerator(TargetGenerator const &copy);
		TargetGenerator &operator=(TargetGenerator const &src);
		std::map<std::string, ATarget *> _knownTargets;
};