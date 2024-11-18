#include "view.h"

View::View() {}

void View::setModel(Model *model)
{
    this->model = model;
}

void View::setController(Controller *controller)
{
    this->controller = controller;
}

