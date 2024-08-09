#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget(std::string const &type);
		virtual ~ATarget();

		std::string const & getType() const;
		virtual ATarget *clone() = 0;
		void getHitBySpell(ASpell const &spell) const;
	private:
		ATarget();
		ATarget(ATarget const &copy);
		ATarget &operator=(ATarget const &src);
		std::string _type;
};