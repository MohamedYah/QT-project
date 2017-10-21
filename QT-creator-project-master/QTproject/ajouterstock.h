#ifndef AJOUTERSTOCK_H
#define AJOUTERSTOCK_H

#include <QDialog>

namespace Ui {
class ajouterstock;
}

class ajouterstock : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajouterstock(QWidget *parent = 0);
    ~ajouterstock();
    
private slots:


    void on_precedentaPB_clicked();

private:
    Ui::ajouterstock *ui;
};

#endif // AJOUTERSTOCK_H
