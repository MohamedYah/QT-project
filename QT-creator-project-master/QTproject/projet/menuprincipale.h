#ifndef MENUPRINCIPALE_H
#define MENUPRINCIPALE_H

#include <QDialog>

namespace Ui {
class menuprincipale;
}

class menuprincipale : public QDialog
{
    Q_OBJECT
    
public:
    explicit menuprincipale(QWidget *parent = 0);
    ~menuprincipale();
    
private slots:
    void on_precedentPB_clicked();

    void on_quitterPB_clicked();

    void on_stockPB_clicked();

    void on_clientPB_clicked();

    void on_financePB_clicked();

private:
    Ui::menuprincipale *ui;
};

#endif // MENUPRINCIPALE_H
