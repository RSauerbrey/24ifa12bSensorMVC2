#include "controller.h"
#include "view.h"
#include "model.h"

Controller::Controller()
{

}

void Controller::setView(View *view)
{
    this->view = view;
}

void Controller::setModel(Model *model)
{
    this->model = model;
}

void Controller::action(QString str)
{
    model->update(str);
}

