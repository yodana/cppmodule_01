/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:26:08 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 18:56:21 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fileName.hpp"
#include <iostream>

int main(){
    
    //filename_replace("toto", "FILS","PAPA");
    //filename_replace("toto", "FILS","BARPAPAP");
    //filename_replace("toto", "BARPAPAP","BARPAPAP");
    filename_replace("toto", "\n", "totota");
    //filename_replace("toto", "toto", "totoa"); // bug a regler
    return 0;
}