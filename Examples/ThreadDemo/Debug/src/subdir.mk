################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/DemoC++HelloWorld.cpp \
../src/TestThread.cpp 

OBJS += \
./src/DemoC++HelloWorld.o \
./src/TestThread.o 

CPP_DEPS += \
./src/DemoC++HelloWorld.d \
./src/TestThread.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -mthreads -std=c++0x -I"D:\apps\cygwin64\lib\gcc\x86_64-pc-cygwin\5.3.0\include\c++" -O0 -g3 -pg -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


