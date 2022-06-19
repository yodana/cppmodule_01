/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <yodana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:41:52 by yodana            #+#    #+#             */
/*   Updated: 2022/06/19 18:49:51 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace(std::string s1, std::string s2, std::string contenu){
    std::string ret;
    int i = 0;
    size_t found = contenu.find(s1);

    if (found == std::string::npos){
        return contenu;
    }
    while (contenu.find(s1) != std::string::npos){
        i = 0;
        found = contenu.find(s1);
        while (i < (int)found){
            ret = ret + contenu[i];
            i++;
        }
        ret = ret + s2;
        i = i + (int)s1.size();
        contenu = &contenu[i];
    }
    ret = ret + contenu;
    return ret;
}

void filename_replace(std::string name, std::string s1, std::string s2){
    std::ifstream ifs(name, std::ios::in);
    std::string r;
    std::string c;
    int i = 0;

    if (ifs){
        std::ofstream ofs(name + ".replace");
        if(ofs){
            std::string contenu;
            int line = 0;
        
            while (getline(ifs, contenu)){
                line++;
            }
            ifs.close();
            std::ifstream ifs(name, std::ios::in);
            if (ifs){
                while (getline(ifs, contenu)){
                     if (i < line-1)
                            contenu = contenu + '\n';
                    if (contenu.find(s1) != std::string::npos && s1.size() != 0){
                        contenu = replace(s1, s2, contenu);
                    }
                    ofs << contenu;
                    i++;
                }
                ifs.close();
                ofs.close();
            }
        }
    }
    else
        std::cout << "Erreur fichier" << std::endl;
}