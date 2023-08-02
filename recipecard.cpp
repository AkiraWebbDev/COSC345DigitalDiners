#include "recipecard.h"
#include "ui_recipecard.h"
#include <QPainter>

RecipeCard::RecipeCard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecipeCard)
{
    ui->setupUi(this);
}

RecipeCard::~RecipeCard()
{
    delete ui;
}

