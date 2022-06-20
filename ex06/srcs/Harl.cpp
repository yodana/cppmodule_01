/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:58:30 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 19:01:19 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <iostream>
#include <array>
#include <string>

Harl::Harl(void){
    this->array[0] = &Harl::debug;
    this->array[1] = &Harl::info;
    this->array[2] = &Harl::warning;
    this->array[3] = &Harl::error;
}

Harl::~Harl(void){

}

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ){
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::getWarning(){
    return this->warning();
}

void Harl::complain(std::string level){
    std::array<std::string,4> tab = {"debug", "info", "warning", "error"};
    int i = 0;
    int change = 0;

    while (i < 4){
        if (tab[i] == level || change == 1){
            std::cout << "[" << tab[i] << "]" << std::endl << std::endl;
            ((*this).*array[i])();
            change = 1;
            std::cout << std::endl;
        }
        i++;
    }
    //return (H->*level)(void);
}