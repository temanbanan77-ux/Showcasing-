#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// Этот код сработает, когда Geometry Dash загрузится
$execute {
    log::info("Мод Showcasing успешно загружен авторами Geode!");
}

// Пример хука: при входе в главное меню в консоль выведется сообщение
class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }
        
        log::info("Привет из мода Showcasing! Меню открыто.");
        return true;
    }
};

