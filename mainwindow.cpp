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
    RecipeCard * recipecard = new RecipeCard;
    ui->CardsLayout->setWidget(recipecard);
}
