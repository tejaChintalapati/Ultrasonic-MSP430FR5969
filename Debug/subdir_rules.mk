################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
Ultrasonic_Main.obj: ../Ultrasonic_Main.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"/Users/Teja/Desktop/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/bin/cl430" -vmspx --abi=eabi --data_model=restricted --use_hw_mpy=F5 --include_path="/Users/Teja/Desktop/TI/ccsv6/ccs_base/msp430/include" --include_path="/Users/Teja/Google Drive/GitHub/Ultrasonic_Port3/driverlib/MSP430FR5xx_6xx" --include_path="/Users/Teja/Google Drive/GitHub/Ultrasonic_Port3/Source" --include_path="C:/ti/msp430/MSPWare_2_40_00_37/iqmathlib/include" --include_path="/Users/Teja/Desktop/TI/ccsv6/tools/compiler/ti-cgt-msp430_4.4.4/include" --advice:power="1,2,3,5,6,7,8,9,10,11,12,13,14" --advice:hw_config=all -g --define=__MSP430FR5969__ --define=_MPU_ENABLE --diag_warning=225 --display_error_number --diag_wrap=off --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="Ultrasonic_Main.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


