#ifndef TRANSFERTAJOUT_H
#define TRANSFERTAJOUT_H

#include <QDialog>

namespace Ui {
class transfertajout;
}

class transfertajout : public QDialog
{
    Q_OBJECT
    
public:
    explicit transfertajout(QWidget *parent = 0);
    ~transfertajout();
    
private slots:
    void on_Ajouter_clicked();

private:
    Ui::transfertajout *ui;
};

#endif // TRANSFERTAJOUT_H
