#include "pythagorasui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PythagorasUI w;
	w.show();

	return a.exec();
}
