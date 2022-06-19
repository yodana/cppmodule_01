/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:10:21 by yodana            #+#    #+#             */
/*   Updated: 2022/06/18 12:15:01 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie(void){
    return ;
}

Zombie::~Zombie(void){
    std::cout << this->_name << std::endl;
    return ;    
}

std::string Zombie::getName(void) const{
    return this->_name;
}

void Zombie::announce(void) const{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void Zombie::addName(std::string name){
    this->_name = name;
    return ;
}
