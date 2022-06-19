/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:11:17 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 11:22:49 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type):_type(type){
    return ;
}
 
Weapon::~Weapon(){
    return ;
}
const std::string& Weapon::getType() const{
    return this->_type;
}

void Weapon::setType(std::string type){
    this->_type = type;
    return ;
}