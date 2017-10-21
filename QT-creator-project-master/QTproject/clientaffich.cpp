#include "clientaffich.h"
#include "ui_clientaffich.h"

clientaffich::clientaffich(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clientaffich)
{
    ui->setupUi(this);
}

clientaffich::~clientaffich()
{
    delete ui;
}

void clientaffich::on_personneview_activated(const QModelIndex &index)
{
     ui->personneview->setModel(tmpCp.afficherPersonneclient());
}
