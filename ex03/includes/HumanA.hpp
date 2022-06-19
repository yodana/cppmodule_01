/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 09:52:18 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 10:44:11 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class HumanA{
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack() const;
        std::string getName() const;
        Weapon getWeapon() const;

    private:
        Weapon& _weapon;
        std::string _name;
};

#endif