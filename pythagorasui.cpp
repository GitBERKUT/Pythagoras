#include "pythagorasui.h"
#include "ui_pythagorasui.h"

PythagorasUI::PythagorasUI(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::PythagorasUI)
{
	ui->setupUi(this);
}

PythagorasUI::~PythagorasUI()
{
	delete ui;
}
