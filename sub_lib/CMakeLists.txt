# Set the project name
project (sub_lib)
#add_library(sub_lib ALIAS ${PROJECT_NAME})

# Add a library with the above sources
add_library(${PROJECT_NAME} include/MyClass.h src/MyClass.cc include/MyWrapper.h src/MyWrapper.cc)

target_include_directories( ${PROJECT_NAME}
        PUBLIC ${PROJECT_SOURCE_DIR}/include
        )