//
// Created by Dmitriy Steshenko on 09.05.2020.
//

#ifndef FINALPROJECTCPP_MENU_H
#define FINALPROJECTCPP_MENU_H

#include "Table.h"

class Menu {
private:
    void CarModelMenu();
    void CarMenu();

    CarModelTable _carModelMenu;
    CarTable _carMenu;

public:
    void MainMenu();
};


#endif //FINALPROJECTCPP_MENU_H