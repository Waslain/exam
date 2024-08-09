#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;
class ATarget;
class SpellBook;

class Warlock
{
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);
		void introduce() const;
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spellname);
		void launchSpell(std::string spellname, ATarget &target);
	private:
		Warlock();
		Warlock(const Warlock &copy);
		Warlock &operator=(const Warlock &src);
		std::string _name;
		std::string _title;
		// std::map<std::string, ASpell *> _knownSpells;
		SpellBook _spellBook;
};