#include "posrednik.h"

Window::Window(Posrednik* posrednik){
    this->posrednik = posrednik;
};

void Window::changePosrednik(Posrednik* posrednik){
    this->posrednik = posrednik;
};
