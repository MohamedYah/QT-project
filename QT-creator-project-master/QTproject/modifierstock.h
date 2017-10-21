#ifndef MODIFIERSTOCK_H
#define MODIFIERSTOCK_H

#include <QDialog>

namespace Ui {
class modifierstock;
}

class modifierstock : public QDialog
{
    Q_OBJECT
    
public:
    explicit modifierstock(QWidget *parent = 0);
    ~modifierstock();
    
private slots:
    void on_MprecedentPB_clicked();

private:
    Ui::modifierstock *ui;
};

#endif // MODIFIERSTOCK_H
