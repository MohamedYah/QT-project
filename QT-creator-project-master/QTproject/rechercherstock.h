#ifndef RECHERCHERSTOCK_H
#define RECHERCHERSTOCK_H

#include <QDialog>

namespace Ui {
class rechercherstock;
}

class rechercherstock : public QDialog
{
    Q_OBJECT
    
public:
    explicit rechercherstock(QWidget *parent = 0);
    ~rechercherstock();
    
private slots:
    void on_RprecedentPB_clicked();

private:
    Ui::rechercherstock *ui;
};

#endif // RECHERCHERSTOCK_H
