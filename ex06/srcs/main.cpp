/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:58:37 by yodana            #+#    #+#             */
/*   Updated: 2022/06/20 08:38:20 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <iostream>

int main(int ac, char **ar){
    Harl instance;
    if (ac > 1)
        instance.complain(ar[1]);
    else
        instance.complain("");
    return 0;
}