/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:32:24 by yodana            #+#    #+#             */
/*   Updated: 2022/06/18 12:24:52 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie* z = new Zombie[N];
    for (int i = 0; i < N; i++){
        z[i].addName(name);
        z[i].announce();
    }
    return z;
}