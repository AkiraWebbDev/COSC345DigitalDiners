#ifndef RECIPECARD_H
#define RECIPECARD_H

#include <QWidget>

namespace Ui {
class RecipeCard;
}

class RecipeCard : public QWidget
{
    Q_OBJECT

public:
    explicit RecipeCard(QWidget *parent = nullptr);
    ~RecipeCard();

private:
    Ui::RecipeCard *ui;

};


#endif // RECIPECARD_H
