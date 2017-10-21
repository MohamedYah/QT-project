#ifndef CLIENTAFFICH_H
#define CLIENTAFFICH_H

#include <QDialog>

namespace Ui {
class clientaffich;
}

class clientaffich : public QDialog
{
    Q_OBJECT
    
public:
    explicit clientaffich(QWidget *parent = 0);
    ~clientaffich();
    
private slots:
    void on_personneview_activated(const QModelIndex &index);

private:
    Ui::clientaffich *ui;
};

#endif // CLIENTAFFICH_H
