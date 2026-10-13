#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    int vybor;
    double lit;

    double lYabloko = 0;
    double lApelsin = 0;
    double lAbrikos = 0;
    double lGrusha = 0;

    double lTomat = 0;
    double lLuk = 0;
    double lOgurec = 0;

    double lChesnok = 0;
    double lPetrushka = 0;

    while (true)
    {
        std::cout << "МАГАЗИН СОКИ СЕВЫ\n";
        std::cout << "1 - Фруктовые соки\n";
        std::cout << "2 - Овощные соки\n";
        std::cout << "3 - Чаи\n";
        std::cout << "0 - Получить чек\n";
        std::cout << "\n";
        std::cout << "Выберите категорию: ";
        std::cin >> vybor;
        std::cout << "\n";

        if (vybor == 0)
        {
            std::cout << "Оформляем заказ\n\n";
            break;
        }
        else if (vybor == 1)
        {
            while (true)
            {
                std::cout << "Фруктовые соки\n";
                std::cout << "1 - Яблочный - 80 руб/л\n";
                std::cout << "2 - Апельсиновый - 110 руб/л\n";
                std::cout << "3 - Абрикосовый - 120 руб/л\n";
                std::cout << "4 - Грушевый - 100 руб/л\n";
                std::cout << "0 - Назад в главное меню\n";
                std::cout << "\n";
                std::cout << "Выберите товар: ";
                std::cin >> vybor;
                std::cout << "\n";

                if (vybor == 0)
                {
                    break;
                }
                else if (vybor >= 1 && vybor <= 4)
                {
                    std::cout << "Сколько литров взять: ";
                    std::cin >> lit;
                    std::cout << "\n";

                    if (lit < 0)
                    {
                        std::cout << "Количество не может быть отрицательным!\n\n";
                    }
                    else
                    {
                        if (vybor == 1)
                        {
                            lYabloko = lYabloko + lit;
                        }
                        else if (vybor == 2)
                        {
                            lApelsin = lApelsin + lit;
                        }
                        else if (vybor == 3)
                        {
                            lAbrikos = lAbrikos + lit;
                        }
                        else if (vybor == 4)
                        {
                            lGrusha = lGrusha + lit;
                        }
                    }
                }
                else
                {
                    std::cout << "ERRORRRRRR\n\n";
                }
            }
        }
        else if (vybor == 2)
        {
            while (true)
            {
                std::cout << "Овощные соки\n";
                std::cout << "1 - Томатный - 70 руб/л\n";
                std::cout << "2 - Луковый  - 60 руб/л\n";
                std::cout << "3 - Огуречный - 80 руб/л\n";
                std::cout << "0 - Назад в главное меню\n\n";
                std::cout << "Выберите товар: ";
                std::cin >> vybor;
                std::cout << "\n";

                if (vybor == 0)
                {
                    break;
                }
                else if (vybor >= 1 && vybor <= 3)
                {
                    std::cout << "Сколько литров взять: ";
                    std::cin >> lit;
                    std::cout << "\n";

                    if (lit < 0)
                    {
                        std::cout << "Количество не может быть отрицательным!\n\n";
                    }
                    else
                    {
                        if (vybor == 1)
                        {
                            lTomat = lTomat + lit;
                        }
                        else if (vybor == 2)
                        {
                            lLuk = lLuk + lit;
                        }
                        else if (vybor == 3)
                        {
                            lOgurec = lOgurec + lit;
                        }
                    }
                }
                else
                {
                    std::cout << "ERRORRRRRR\n\n";
                }
            }
        }
        else if (vybor == 3)
        {
            while (true)
            {
                std::cout << "Чаи\n";
                std::cout << "1 - Чесночный - 90 руб/л\n";
                std::cout << "2 - Петрушевый - 110 руб/л\n";
                std::cout << "0 - Назад в главное меню\n";
                std::cout << "\n";
                std::cout << "Выберите товар: ";
                std::cin >> vybor;
                std::cout << "\n";

                if (vybor == 0)
                {
                    break;
                }
                else if (vybor >= 1 && vybor <= 2)
                {
                    std::cout << "Сколько литров взять: ";
                    std::cin >> lit;
                    std::cout << "\n";

                    if (lit < 0)
                    {
                        std::cout << "ERRORRRRRR\n\n";
                    }
                    else
                    {
                        if (vybor == 1)
                        {
                            lChesnok = lChesnok + lit;
                        }
                        else if (vybor == 2)
                        {
                            lPetrushka = lPetrushka + lit;
                        }
                    }
                }
                else
                {
                    std::cout << "ERRORRRRRR\n\n";
                }
            }
        }
        else
        {
            std::cout << "ERRORRRRRR\n\n";
        }
    }
    double itog = 0;

    itog = itog + lYabloko * 80;
    itog = itog + lApelsin * 110;
    itog = itog + lAbrikos * 120;
    itog = itog + lGrusha * 100;

    itog = itog + lTomat * 70;
    itog = itog + lLuk * 60;
    itog = itog + lOgurec * 80;

    itog = itog + lChesnok * 90;
    itog = itog + lPetrushka * 110;

    std::cout << "========== Итог ==========\n";

    if (itog == 0)
    {
        std::cout << "ERRORRRRRR\n\n";
    }

    std::cout << "Итоговая сумма покупки: " << itog << " руб.\n";

    return 0;
}
