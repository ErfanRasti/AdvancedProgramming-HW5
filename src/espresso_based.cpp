#include "espresso_based.h"

EspressoBased::EspressoBased()
    : name { "EspressoBased" }
    , ingredients { std::vector<Ingredient*>() }
{

    /**
     * @brief Default constructor
     */
}

EspressoBased::EspressoBased(const EspressoBased& esp)
    : name { esp.name }
    , ingredients { esp.ingredients }
{

    /**
     * @brief Copy constructor
     *
     * @param esp
     */
}

EspressoBased::~EspressoBased()
{
    /**
     * @brief Destructor
     */
    for (const auto& i : ingredients)
        delete i;
    ingredients.clear();
}

void EspressoBased::operator=(const EspressoBased& esp)
{
    /**
     * @brief Assignment operator
     *
     * @param esp
     */
    if (this != &esp) {
        name = esp.name;
        ingredients = esp.ingredients;
    }
}

std::vector<Ingredient*>& EspressoBased::get_ingredients()
{
    /**
     * @brief Getter for ingredients
     *
     * @return std::vector<Ingredient*>&
     */
    return ingredients;
}
