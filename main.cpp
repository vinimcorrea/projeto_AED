#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "Tests/Database.h"

int main(int argc, char* argv[]) {

    Database database();

    testing::InitGoogleTest(&argc, argv);
    std::cout << "AED 2021/2022 - Projeto em Grupo 1" << std::endl;
    return RUN_ALL_TESTS();


}