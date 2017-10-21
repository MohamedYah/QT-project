#ifndef CLIENTAJOUT_H
#define CLIENTAJOUT_H

#include <QDialog>

namespace Ui {
class clientajout;
}

class clientajout : public QDialog
{
    Q_OBJECT
    
public:
    explicit clientajout(QWidget *parent = 0);
    ~clientajout();
    
private slots:
    void on_ajouter_clicked();

private:
    Ui::clientajout *ui;
};

#endif // CLIENTAJOUT_H
