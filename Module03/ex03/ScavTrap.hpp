#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{

	protected :
		std::string _nameDaughter;


	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &other);
		virtual ~ScavTrap();

		void guardGate();
		void colorNameDaughter(const std::string &color);
		void attack(const std::string &target);

} ;



#endif