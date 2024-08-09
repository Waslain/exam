#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}

void TargetGenerator::learnTargetType(ATarget* Target)
{
	if (Target)
		_knownTargets[Target->getType()] = Target;
}

void TargetGenerator::forgetTargetType(std::string const &Targetname)
{
	if (_knownTargets.find(Targetname) != _knownTargets.end())
		_knownTargets.erase(_knownTargets.find(Targetname));
}

ATarget* TargetGenerator::createTarget(std::string const &newTarget)
{
	ATarget* tmp = NULL;
	if (_knownTargets.find(newTarget) != _knownTargets.end())
		tmp = _knownTargets[newTarget];
	return (tmp);
}