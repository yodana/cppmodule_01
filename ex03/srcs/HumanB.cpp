/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:17:28 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 11:23:40 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name):_weapon(NULL),_name(name){
    return ;
}


HumanB::~HumanB(){
    return ;
}

std::string HumanB::getName() const{
    return this->_name;
}

Weapon*  HumanB::getWeapon() const{
    return this->_weapon;    
}

void HumanB::setWeapon(Weapon& weapon){
    this->_weapon = &weapon;
    return ;
}

void HumanB::attack() const{
    if (this->getWeapon() == NULL){
        std::cout << "I HAVE NO WEAPON" << std::endl;
        return ;
    }
    std::cout << getName() <<  " attacks with their " << this->getWeapon()->getType() << std::endl;
}


