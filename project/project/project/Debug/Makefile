################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../src/ \
../src/asf/ \
../src/asf/common/ \
../src/asf/common/boards/ \
../src/asf/common/utils/ \
../src/asf/common/utils/interrupt/ \
../src/asf/common/utils/make/ \
../src/asf/mega/ \
../src/asf/mega/boards/ \
../src/asf/mega/boards/stk600/ \
../src/asf/mega/boards/stk600/rcx_x/ \
../src/asf/mega/utils/ \
../src/asf/mega/utils/assembler/ \
../src/config/


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../src/asf/mega/boards/stk600/rcx_x/init.c \
../src/KeyPad.c \
../src/LCD.c \
../src/main.c \
../src/SevenSeg.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
src/asf/mega/boards/stk600/rcx_x/init.o \
src/KeyPad.o \
src/LCD.o \
src/main.o \
src/SevenSeg.o


OBJS_AS_ARGS +=  \
src/asf/mega/boards/stk600/rcx_x/init.o \
src/KeyPad.o \
src/LCD.o \
src/main.o \
src/SevenSeg.o


C_DEPS +=  \
src/asf/mega/boards/stk600/rcx_x/init.d \
src/KeyPad.d \
src/LCD.d \
src/main.d \
src/SevenSeg.d


C_DEPS_AS_ARGS +=  \
src/asf/mega/boards/stk600/rcx_x/init.d \
src/KeyPad.d \
src/LCD.d \
src/main.d \
src/SevenSeg.d


OUTPUT_FILE_PATH +=project.elf

OUTPUT_FILE_PATH_AS_ARGS +=project.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

# AVR32/GNU C Compiler











src/asf/mega/boards/stk600/rcx_x/%.o: ../src/asf/mega/boards/stk600/rcx_x/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -DBOARD=STK600_MEGA  -I"../src" -I"../src/asf/common/applications/user_application/atmega32_stk600-mega" -I"../src/asf/common/boards" -I"../src/asf/common/utils" -I"../src/asf/mega/utils" -I"../src/config"  -O1 -fdata-sections -ffunction-sections -g3 -Wall -c -Werror-implicit-function-declaration -Wmissing-prototypes -Wpointer-arith -Wstrict-prototypes -mrelax -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -mmcu=atmega32   -o"$@" "$<" 
	@echo Finished building: $<

src/%.o: ../src/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -DBOARD=STK600_MEGA  -I"../src" -I"../src/asf/common/applications/user_application/atmega32_stk600-mega" -I"../src/asf/common/boards" -I"../src/asf/common/utils" -I"../src/asf/mega/utils" -I"../src/config"  -O1 -fdata-sections -ffunction-sections -g3 -Wall -c -Werror-implicit-function-declaration -Wmissing-prototypes -Wpointer-arith -Wstrict-prototypes -mrelax -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -mmcu=atmega32   -o"$@" "$<" 
	@echo Finished building: $<



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="project.map" -Wl,--start-group  -Wl,--end-group -Wl,--gc-sections -mrelax -Wl,--relax  -mmcu=atmega32  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "project.elf" "project.hex"
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "project.elf" "project.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objdump.exe" -h -S "project.elf" > "project.lss"
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature  "project.elf" "project.srec"
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-size.exe" "project.elf"
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS)$(C_DEPS_AS_ARGS) $(EXECUTABLES) 
	rm -rf "project.elf" "project.a" "project.hex" "project.lss" "project.eep" "project.map" "project.srec"
	