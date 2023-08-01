#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "recipecard.h"
#include <QBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
    RecipeCard * card = new RecipeCard;
    ui->CardsLayout->addWidget(card);
}
