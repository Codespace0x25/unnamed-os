cmake_minimum_required(VERSION 3.5)
project(userSpace LANGUAGES CXX ASM)

set(C_SOURCES
    src/main.cpp
    ../kernel/src/stdlib/stdio.cpp
    ../kernel/src/stdlib/memory.cpp
    ../kernel/src/stdlib/string.cpp
    ../kernel/src/stdlib/display.cpp
    ../kernel/src/stdlib/font.cpp
    ../kernel/src/stdlib/disk.cpp
    ../kernel/src/drivers/ATA.cpp
    )

set(ASM_SOURCES

    )

set(CXX_SOURCES
    ../kernel/src/idt.cpp
    )

enable_language(ASM_NASM)

add_executable(kernel ${C_SOURCES} ${CXX_SOURCES} ${ASM_SOURCES})

target_include_directories(userSpace PRIVATE ../kernel/includes)

target_compile_options(kernel PRIVATE -g -mgeneral-regs-only -fno-builtin -ffreestanding -fno-stack-protector -fno-stack-check -fpie -mno-red-zone -nostdlib -nostdinc)
target_link_options(kernel PRIVATE -g -nostdlib -z max-page-size=0x1000 -pie -T ${CMAKE_SOURCE_DIR}/src/linker_scripts/link-64-kernel.ld)