#ifndef __EDITOR_H__
#define __EDITOR_H__

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>


class Editor : public QWidget
{
    Q_OBJECT
public:
    Editor();
    ~Editor();

private slots:
   void quit();

private:
    QTextEdit *textEdit;
    QPushButton *quitButton;
};

#endif //__EDITOR_H__
