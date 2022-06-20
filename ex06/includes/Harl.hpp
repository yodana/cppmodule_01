/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:58:00 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 18:58:28 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

class Harl{
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
        void getWarning();
        typedef void (Harl::* funcPtr)();
        funcPtr  array[4];

    private:
        void warning( void );
        void debug( void );
        void info( void );
        void error( void );
};

#endif