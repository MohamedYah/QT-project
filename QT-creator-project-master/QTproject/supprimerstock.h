#ifndef SUPPRIMERSTOCK_H
#define SUPPRIMERSTOCK_H

#include <QDialog>

namespace Ui {
class supprimerstock;
}

class supprimerstock : public QDialog
{
    Q_OBJECT
    
public:
    explicit supprimerstock(QWidget *parent = 0);
    ~supprimerstock();
    
private slots:
    void on_SprecedentPB_clicked();

private:
    Ui::supprimerstock *ui;
};

#endif // SUPPRIMERSTOCK_H
