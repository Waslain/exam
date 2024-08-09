#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
	_knownSpells.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		if (_knownSpells.find(spell->getName()) == _knownSpells.end())
			_knownSpells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string spellname)
{
	std::map<std::string, ASpell*>::iterator it = _knownSpells.find(spellname);
	if (it != _knownSpells.end())
	 {
		delete it->second;
		_knownSpells.erase(it);
	 }
}

ASpell* SpellBook::createSpell(std::string const &newspell)
{
	ASpell* tmp = NULL;
	if (_knownSpells.find(newspell) != _knownSpells.end())
		tmp = _knownSpells[newspell];
	return (tmp);
}