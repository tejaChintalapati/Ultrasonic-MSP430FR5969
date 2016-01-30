################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
Source/ADCInitialisation.obj: ../Source/ADCInitialisation.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/bin/cl430" -vmspx --abi=eabi --data_model=restricted --opt_for_speed=2 --use_hw_mpy=F5 --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="D:/CCS/LM35_IQMath/driverlib/MSP430FR5xx_6xx" --include_path="D:/CCS/LM35_IQMath/Source" --include_path="/include" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/include" --advice:power="none" --advice:hw_config=all -g --define=__MSP430FR5969__ --define=_MPU_ENABLE --display_error_number --diag_wrap=off --diag_warning=225 --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="Source/ADCInitialisation.pp" --obj_directory="Source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

Source/LM35_Temperature.obj: ../Source/LM35_Temperature.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/bin/cl430" -vmspx --abi=eabi --data_model=restricted --opt_for_speed=2 --use_hw_mpy=F5 --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="D:/CCS/LM35_IQMath/driverlib/MSP430FR5xx_6xx" --include_path="D:/CCS/LM35_IQMath/Source" --include_path="/include" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/include" --advice:power="none" --advice:hw_config=all -g --define=__MSP430FR5969__ --define=_MPU_ENABLE --display_error_number --diag_wrap=off --diag_warning=225 --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="Source/LM35_Temperature.pp" --obj_directory="Source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

Source/clockInitialisation.obj: ../Source/clockInitialisation.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/bin/cl430" -vmspx --abi=eabi --data_model=restricted --opt_for_speed=2 --use_hw_mpy=F5 --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="D:/CCS/LM35_IQMath/driverlib/MSP430FR5xx_6xx" --include_path="D:/CCS/LM35_IQMath/Source" --include_path="/include" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/include" --advice:power="none" --advice:hw_config=all -g --define=__MSP430FR5969__ --define=_MPU_ENABLE --display_error_number --diag_wrap=off --diag_warning=225 --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="Source/clockInitialisation.pp" --obj_directory="Source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

Source/mainApp.obj: ../Source/mainApp.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/bin/cl430" -vmspx --abi=eabi --data_model=restricted --opt_for_speed=2 --use_hw_mpy=F5 --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="D:/CCS/LM35_IQMath/driverlib/MSP430FR5xx_6xx" --include_path="D:/CCS/LM35_IQMath/Source" --include_path="/include" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/include" --advice:power="none" --advice:hw_config=all -g --define=__MSP430FR5969__ --define=_MPU_ENABLE --display_error_number --diag_wrap=off --diag_warning=225 --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="Source/mainApp.pp" --obj_directory="Source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

Source/pinInitialisation.obj: ../Source/pinInitialisation.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/bin/cl430" -vmspx --abi=eabi --data_model=restricted --opt_for_speed=2 --use_hw_mpy=F5 --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="D:/CCS/LM35_IQMath/driverlib/MSP430FR5xx_6xx" --include_path="D:/CCS/LM35_IQMath/Source" --include_path="/include" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/include" --advice:power="none" --advice:hw_config=all -g --define=__MSP430FR5969__ --define=_MPU_ENABLE --display_error_number --diag_wrap=off --diag_warning=225 --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="Source/pinInitialisation.pp" --obj_directory="Source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

Source/portInitialisation.obj: ../Source/portInitialisation.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/bin/cl430" -vmspx --abi=eabi --data_model=restricted --opt_for_speed=2 --use_hw_mpy=F5 --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="D:/CCS/LM35_IQMath/driverlib/MSP430FR5xx_6xx" --include_path="D:/CCS/LM35_IQMath/Source" --include_path="/include" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/include" --advice:power="none" --advice:hw_config=all -g --define=__MSP430FR5969__ --define=_MPU_ENABLE --display_error_number --diag_wrap=off --diag_warning=225 --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="Source/portInitialisation.pp" --obj_directory="Source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

Source/timerInitialisation.obj: ../Source/timerInitialisation.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/bin/cl430" -vmspx --abi=eabi --data_model=restricted --opt_for_speed=2 --use_hw_mpy=F5 --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="D:/CCS/LM35_IQMath/driverlib/MSP430FR5xx_6xx" --include_path="D:/CCS/LM35_IQMath/Source" --include_path="/include" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-msp430_4.4.6/include" --advice:power="none" --advice:hw_config=all -g --define=__MSP430FR5969__ --define=_MPU_ENABLE --display_error_number --diag_wrap=off --diag_warning=225 --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="Source/timerInitialisation.pp" --obj_directory="Source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


