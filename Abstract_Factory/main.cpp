#include "Chair/ModernChair.hpp"
#include "Chair/VictorianChair.hpp"
// #include "Sofa/ModernSofa.hpp"
// #include "Sofa/VictorianSofa.hpp"
#include "Chair/IChair.hpp"
#include "Sofa/ISofa.hpp"
#include "Factories/ModernFurnitureFactory.hpp"
#include "Factories/VictorianFurnitureFactory.hpp"

int main() {
    ModernFurnitureFactory m_factory;
    VictorianFurnitureFactory v_factory;

    auto modernChair = m_factory.createChair();
    auto modernSofa = m_factory.createSofa();
    modernChair->sitOn();
    modernSofa->layOn();

    auto victorianChair = v_factory.createChair();
    auto victorianSofa = v_factory.createSofa();
    victorianChair->sitOn();
    victorianSofa->layOn();

    return 0;
}
