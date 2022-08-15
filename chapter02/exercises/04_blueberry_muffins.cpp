/*
    Jeffrey D. Daye
    August 15th, 2022
    Chapter 2 - Exercise 4
    Program that prints step-by-step instructions to make some delicious blueberry
        muffins.
*/

#include <iostream>

int main()
{
    std::cout << "********BLUEBERRY MUFFINS RECIPE********" << std::endl;

    std::cout << "----INFORMATION----" << std::endl;
    std::cout << "Preparation Time: 10 minutes\n"
        << "Cook Time: 25 minutes\n"
        << "Servings: 12\n"
        << std::endl;

    std::cout << "----UTENSILS----" << std::endl;
    std::cout << "12-cup muffin tin\n"
        << "2 large mixing bowls\n"
        << "spatula\n"
        << "spoon\n"
        << "toothpicks\n"
        << std::endl;

    std::cout << "----INGREDIENTS----" << std::endl;
    std::cout << "2 cups all purpose flour\n"
        << "2 teaspoons baking powder\n"
        << "1/2 cup sugar\n"
        << "1 stick melted unsalted butter\n"
        << "1 slightly beaten egg\n"
        << "3/4 cup whole milk\n"
        << "1 1/2 cups fresh blueberries\n"
        << "1/2 cup brown or white granulated sugar\n" 
        << std::endl;
    
    std::cout << "----DIRECTIONS----" << std::endl;
    std::cout << "Preheat oven to 350 degrees fahrenheit. Grease a 12-cup muffin tin.\n"
        << std::endl;
    std::cout << "In a bowl, combine the flour, baking powder and sugar. In another bowl,\n"
        << "combine butter, egg, and milk and mix well. Pour the wet ingredients into\n"
        << "the flour mixture and with a spatula, stir until just combined. Do not\n"
        << "beat or over mix; it's okay if there are lumps in the batter. Gently fold\n"
        << "the blueberries into the batter.\n"
        << std::endl;
    std::cout << "Spoon the batter into the muffin tray, filling each cup about 2/3 full.\n"
        << "Bake for 10 minutes and remove from the oven. Sprinkle the tops of the\n"
        << "muffins with the granulated brown or white sugar and return the muffins\n"
        << "to the oven to bake for an additional 10 to 15 minutes, until the tops are\n"
        << "golden brown and a toothpick inserted into the center of a muffin comes out\n"
        << "clean. Cool for about 10 minutes in the pan before turning the muffins out.\n"
        << std::endl;
    
    std::cout << "----GLOSSARY----" << std::endl;
    std::cout << "Muffin Tin: Is a mold in which muffins or cupcakes are baked that\n"
            << "creates their unique shape.\n"
        << "Spatula: a flat thing implement used especially for spreadiog or mixing soft\n"
            << "substance, scooping, or lifting.\n"
        << "Spoon: a utensil consisting of a small, shallow bowl on a handle, used in\n"
            << "preparing, serving, or eating foor.\n"
        << "Toothpick: A small piece of wood or other material used for removing food\n"
            << "particles from between teeth.\n"
        << std::endl;



    return 0;
}