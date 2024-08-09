#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
		ASpell(std::string const &name, std::string const &effects);
		virtual ~ASpell();

		std::string const & getName() const;
		std::string const & getEffects() const;
		virtual ASpell *clone() = 0;
		void launch(ATarget const &target) const;
	private:
		ASpell();
		ASpell(ASpell const &copy);
		ASpell &operator=(ASpell const &src);
		std::string _name;
		std::string _effects;
};