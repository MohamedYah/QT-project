#ifndef FACTURECLIENTELE_H
#define FACTURECLIENTELE_H

#include <QDialog>

namespace Ui {
class factureclientele;
}

class factureclientele : public QDialog
{
    Q_OBJECT
    
public:
    explicit factureclientele(QWidget *parent = 0);
    ~factureclientele();
    
private slots:
    void on_AjoutePB_clicked();

private:
    Ui::factureclientele *ui;
};

#endif // FACTURECLIENTELE_H
