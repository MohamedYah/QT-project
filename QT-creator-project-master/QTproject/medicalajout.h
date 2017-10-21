#ifndef MEDICALAJOUT_H
#define MEDICALAJOUT_H

#include <QDialog>

namespace Ui {
class medicalajout;
}

class medicalajout : public QDialog
{
    Q_OBJECT
    
public:
    explicit medicalajout(QWidget *parent = 0);
    ~medicalajout();
    
private slots:
    void on_ajoutermMPB_clicked();



    void on_stockmedicalPB_clicked();

    void on_stocktechniquePB_clicked();

private:
    Ui::medicalajout *ui;
};

#endif // MEDICALAJOUT_H
