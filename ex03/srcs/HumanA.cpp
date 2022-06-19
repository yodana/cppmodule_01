/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 09:46:24 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 10:47:59 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon):_weapon(weapon), _name(name){
    return ;
}

HumanA::~HumanA(){
    return ;
}

std::string HumanA::getName() const{
    return this->_name;
}

Weapon HumanA::getWeapon() const{
    return this->_weapon;    
}

void HumanA::attack() const{
    std::cout << getName() <<  "attacks with their " << getWeapon().getType() << std::endl;
}