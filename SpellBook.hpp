#pragma once 

#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;

class SpellBook
{
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spellname);
		ASpell *createSpell(std::string const &newspell);
	private:
		SpellBook(SpellBook const &copy);
		SpellBook &operator=(SpellBook const &src);
		std::map<std::string, ASpell *> _knownSpells;
};