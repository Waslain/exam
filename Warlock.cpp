#include "Warlock.hpp"

Warlock::Warlock()
{
	//std::cout << "Default Warlock constructor called" << std::endl;
}

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &copy)
{
	//std::cout << "Warlock copy constructor called" << std::endl;
}

Warlock::~Warlock()
{
	//std::cout << "Warlock deconstructor called" << std::endl;
	std::cout << _name << ": My job here is done!" << std::endl; 
}

Warlock &Warlock::operator=(const Warlock &src)
{
	if (this != &src)
	{
		//STUFF TO DO
	}
	return *this;
}

std::string const & Warlock::getName() const
{
	return (_name);
}

std::string const & Warlock::getTitle() const
{
	return (_title);
}

void Warlock::setTitle(std::string const &title)
{
	_title = title;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
	if (spell)
		_spellBook.learnSpell(spell);
		// if (_knownSpells.find(spell->getName()) == _knownSpells.end())
		// 	_knownSpells[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spellname)
{
	_spellBook.forgetSpell(spellname);
	// if (_knownSpells.find(spellname) != _knownSpells.end())
		// _knownSpells.erase(spellname);
}

void Warlock::launchSpell(std::string spellname, ATarget &target)
{
	// if (_knownSpells.find(spellname) != _knownSpells.end())
	// 	_knownSpells[spellname]->launch(target);
	if(_spellBook.createSpell(spellname))
		_spellBook.createSpell(spellname)->launch(target);
}