#include "notepad.h"
#include "ui_notepad.h"

NotePad::NotePad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NotePad)
{
    ui->setupUi(this);
    this->resize(QSize(1100, 700));
    for (int i = 1; i <= 100; i++) {
        ui->comboBox->addItem(QString::number(i));
    }
}

NotePad::~NotePad()
{
    delete ui;
}


void NotePad::on_fontComboBox_currentFontChanged(const QFont &f)
{
    ui->textEdit->setFont(f);
}

void NotePad::on_comboBox_activated(int index)
{
    ui->textEdit->setStyleSheet(QString("font-size: ").append(ui->comboBox->itemText(index) + QString("px;")));
}
