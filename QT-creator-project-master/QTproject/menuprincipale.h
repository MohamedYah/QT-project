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

    void on_afficherstockPB_clicked();

    void on_ajouterstockPB_clicked();

    void on_rechercherstockPB_clicked();

    void on_supprimerstockPB_clicked();

    void on_modifierstockPB_clicked();



    void on_afficherclientPB_clicked();

    void on_ajouterclientPB_clicked();

    void on_rechercherclientPB_clicked();

    void on_supprimerclientPB_clicked();

    void on_modifierclientPB_clicked();

    void on_afficherfinancePB_clicked();

    void on_ajouterfinancePB_clicked();

    void on_rechercherfinancePB_clicked();

    void on_supprimerfinancePB_clicked();

    void on_modifierfinancePB_clicked();

private:
    Ui::menuprincipale *ui;

};

#endif // MENUPRINCIPALE_H
