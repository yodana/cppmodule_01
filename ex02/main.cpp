/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 08:59:36 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 09:10:27 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string v = "HI THIS IS BRAIN";
    std::string *stringPTR = &v;
    std::string& stringREF = v;

    std::cout << "Adress of string variable: " << &v << std::endl;
    std::cout << "Adress of stringPTR: " << stringPTR << std::endl;
    std::cout << "Adress of stringREF: " << &stringREF << std::endl;

    std::cout << "Value of string variable: " << v << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

    return 0;
}