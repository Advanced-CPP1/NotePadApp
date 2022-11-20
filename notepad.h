#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class NotePad; }
QT_END_NAMESPACE

class NotePad : public QMainWindow
{
    Q_OBJECT

public:
    NotePad(QWidget *parent = nullptr);
    ~NotePad();

private slots:
    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_comboBox_activated(int index);

private:
    Ui::NotePad *ui;
};
#endif // NOTEPAD_H
