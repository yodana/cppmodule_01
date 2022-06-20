/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:58:37 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 18:58:45 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <iostream>

void modulo(void){
    std::cout << "this work " << std::endl;
    return ;
}



int main(){
    Harl instance;
    instance.complain("warning");
    instance.complain("debug");
    instance.complain("info");
    instance.complain("error");
    instance.complain("dontexist");
    return 0;
}