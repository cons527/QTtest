#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QLineEdit *ageLineEdit = new QLineEdit(this);
    QLineEdit *ageLineEdit2 = new QLineEdit(this);
    QLabel *ageLabel = new QLabel("B&aC", this);
    ageLabel->setBuddy(ageLineEdit);
    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->addWidget(ageLineEdit,0,1);
    mainLayout->addWidget(ageLineEdit2,1,1);
}

Dialog::~Dialog()
{
    delete ui;
}
