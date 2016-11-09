#ifndef PYTHAGORASUI_H
#define PYTHAGORASUI_H

#include <QMainWindow>

namespace Ui {
class PythagorasUI;
}

class PythagorasUI : public QMainWindow
{
	Q_OBJECT

public:
	explicit PythagorasUI(QWidget *parent = 0);
	~PythagorasUI();

private:
	Ui::PythagorasUI *ui;
};

#endif // PYTHAGORASUI_H
