#include <QApplication>
#include <QtGui>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>


int main(int args, char *argv[])
{
    QApplication app(args, argv);

    QTextEdit *textEdit = new QTextEdit;
    QPushButton *quitButton = new QPushButton("&Quit");

    QObject::connect(quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(quitButton);

    QWidget window;
    window.setLayout(layout);

    window.show();

    return app.exec();
}
