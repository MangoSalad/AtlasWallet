#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include "restore_wallet.h"
#include "start_menu.h"
#include "../../wallet/stdafx.h"

namespace Ui {
class app;
}

class app : public QMainWindow
{
    Q_OBJECT

public:
    explicit app(QWidget *parent = 0);
    ~app();

private slots:
    void on_tabWidget_tabBarClicked(int index);

    void on_copy_btc_address_clicked();

private:
    Wallet * wallet;

    std::string menu_choice;

    Ui::app *ui;
    restore_wallet * restore_wallet;
    start_menu * start_menu;

    std::vector<std::string> word_list;

    void init_start_menu();
    void init_wallet();

    void get_mnemonic_phrase();

    // Change widgets on main tab.
    void set_main_tab();
    void set_available_payment_address();
    void set_btc_recieved();
    void set_btc_sent();
    void set_btc_balance();

};

#endif // APP_H
