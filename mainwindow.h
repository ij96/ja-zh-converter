#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include <QMainWindow>

class MainWindow : public QWidget {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    // UI elements
    QTextEdit *original_text;
    QTextEdit *converted_text;
    QPushButton *convert_button;

    // application
    QString app_version;
    QString app_name;

};

#endif // MAINWINDOW_H
