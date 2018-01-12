#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
    //------ BEGIN initialisation ------
    //--- version ---
    app_version = "v0.0.0";
    app_name = tr("Jazh Converter %1").arg(app_version);

    //--- UI elements ---
    original_text = new QTextEdit();
    converted_text = new QTextEdit();
    convert_button = new QPushButton();
    convert_button->setText(tr("Convert"));

    //------ END initialisation ------

    //------ BEGIN UI ------
    //--- layouts ---
    QGridLayout *main_layout = new QGridLayout(this);
    main_layout->addWidget(original_text, 0,0);
    main_layout->addWidget(converted_text, 1,0);
    main_layout->addWidget(convert_button, 2,0);

    setLayout(main_layout);
    resize(840,600);
    setWindowTitle(app_name);

    //------ END UI ------
}

MainWindow::~MainWindow() {}
