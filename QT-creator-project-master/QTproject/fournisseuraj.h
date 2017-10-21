#ifndef FOURNISSEURAJ_H
#define FOURNISSEURAJ_H

#include <QDialog>

namespace Ui {
class fournisseuraj;
}

class fournisseuraj : public QDialog
{
    Q_OBJECT
    
public:
    explicit fournisseuraj(QWidget *parent = 0);
    ~fournisseuraj();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::fournisseuraj *ui;
};

#endif // FOURNISSEURAJ_H
