/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:10:04 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 09:51:58 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie{
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void) const;
        std::string getName(void) const;
        void addName(std::string name);

    private:
        std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif