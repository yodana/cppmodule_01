/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:10:21 by yodana            #+#    #+#             */
/*   Updated: 2022/06/18 12:14:39 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name):_name(name){
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