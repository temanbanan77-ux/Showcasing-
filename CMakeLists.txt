cmake_minimum_required(VERSION 3.25)

# Создаём проект для твоего мода
project(ShowcasingMod VERSION 1.0.0 LANGUAGES CXX)

# Подключаем систему сборки Geode
find_package(Geode REQUIRED)

# Говорим роботу взять твой main.cpp и сделать из него мод
add_geode_mod(
    artem.showcasing
    FILES main.cpp
)

# Связываем код с библиотеками Geode
target_link_libraries(artem.showcasing PUBLIC geode-node-mod)

