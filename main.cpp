#include "window.h"
#include <QApplication>
#include <QMainWindow>
#include <string>
#include <vector>
#include <string_view>
#include <iostream>
using namespace std;

vector<string_view> split(string_view str, string_view delimiter) {
    vector<string_view> tokens;
    size_t start = 0;
    size_t end = str.find(delimiter);

    while (end != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + delimiter.length();
        end = str.find(delimiter, start);
    }

    tokens.push_back(str.substr(start));
    return tokens;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow() {
        QWidget *centralWidget = new QWidget(this);
        ui.setupUi(centralWidget);
        QObject::connect(ui.pushButton_5, &QPushButton::clicked, this, &MainWindow::exitfunc);
        QObject::connect(ui.up, &QPushButton::clicked, this, &MainWindow::digitup);
        QObject::connect(ui.down, &QPushButton::clicked, this, &MainWindow::digitdown);
        QObject::connect(ui.key0, &QPushButton::clicked, this, &MainWindow::key_0);
        QObject::connect(ui.key1, &QPushButton::clicked, this, &MainWindow::key_1);
        QObject::connect(ui.key2, &QPushButton::clicked, this, &MainWindow::key_2);
        QObject::connect(ui.key3, &QPushButton::clicked, this, &MainWindow::key_3);
        QObject::connect(ui.key4, &QPushButton::clicked, this, &MainWindow::key_4);
        QObject::connect(ui.key5, &QPushButton::clicked, this, &MainWindow::key_5);
        QObject::connect(ui.key6, &QPushButton::clicked, this, &MainWindow::key_6);
        QObject::connect(ui.key7, &QPushButton::clicked, this, &MainWindow::key_7);
        QObject::connect(ui.key8, &QPushButton::clicked, this, &MainWindow::key_8);
        QObject::connect(ui.key9, &QPushButton::clicked, this, &MainWindow::key_9);
        QObject::connect(ui.backspace, &QPushButton::clicked, this, &MainWindow::key_back);
        ui.keyboard->hide();
        setCentralWidget(centralWidget);
    }
    void exitfunc() {
        exit(0);
    }
    void update(int value) {
        string value_str = to_string(value);
        ui.open_kb->setText(QString::fromStdString(value_str));
        ui.lcdNumber->setProperty("intValue", value);
    }
    void digitup() {
        try {
            current_int++;
            update(current_int);
        }
        catch (exception &e) {cout << "Fail!";}
    }
    void digitdown() {
        try {
            current_int--;
            update(current_int);
        }
        catch (exception &e) {cout << "Fail!";}
    }
    void kb_add(int what) {
        string what_str = to_string(what);
        string value_str = to_string(current_int);
        try {
            what_str = value_str + what_str;
            current_int = stoi(what_str);
            update(current_int);
        }
        catch (exception &e) {cout << "Fail!";}
    }
    void key_back() {
        try {
            string current = to_string(current_int);
            if (current.length() != 1) {
                current.erase(current.length()-1);
                current_int = stoi(current);
            }
            else {
                current_int = 0;
            }
            update(current_int);
        }
        catch (exception &e) {cout << "Fail!";}
    }
    void key_0() {kb_add(0);}
    void key_1() {kb_add(1);}
    void key_2() {kb_add(2);}
    void key_3() {kb_add(3);}
    void key_4() {kb_add(4);}
    void key_5() {kb_add(5);}
    void key_6() {kb_add(6);}
    void key_7() {kb_add(7);}
    void key_8() {kb_add(8);}
    void key_9() {kb_add(9);}



private:
    int current_int = 0;
    Ui_Form ui;

};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow w;
    w.show();
    return app.exec();
}


#include "main.moc"