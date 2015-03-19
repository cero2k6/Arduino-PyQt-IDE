#include <QMessageBox>
#include <QVBoxLayout>
#include "Editor.h"

Editor::Editor()
{
    textEdit = new QTextEdit;
    quitButton = new QPushButton(tr("Quit"));

    connect(quitButton, SIGNAL(clicked()), this, SLOT(quit()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(quitButton);

    setLayout(layout);

    setWindowTitle(tr("Editor"));

}

Editor::~Editor()
{
    delete textEdit;
    delete quitButton;
}


void Editor::quit()
{
    QMessageBox messageBox;
    messageBox.setWindowTitle(tr("Editor"));
    messageBox.setText(tr("Do you really want to quit?"));
    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if (messageBox.exec() == QMessageBox::Yes)
        qApp->quit();
}
