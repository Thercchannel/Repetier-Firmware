/*
    This file is part of the Repetier-Firmware for RF devices from Conrad Electronic SE.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "Repetier.h"

#ifndef FIRMWARE_URL
    #define FIRMWARE_URL "https://github.com/RF1000community/Repetier-Firmware"
#endif // FIRMWARE_URL

#ifndef MACHINE_TYPE
    #define MACHINE_TYPE "Mendel"
#endif

FSTRINGVALUE(Com::tFirmware, "FIRMWARE_NAME:Repetier_" REPETIER_VERSION " COMPILED:" __DATE__ " FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:1.0 MACHINE_TYPE:" MACHINE_TYPE " EXTRUDER_COUNT:" xstr(NUM_EXTRUDER) " REPETIER_PROTOCOL:3")

FSTRINGVALUE(Com::tDebug,"Debug:")
FSTRINGVALUE(Com::tOk,"ok")
FSTRINGVALUE(Com::tNewline,"\r\n")
FSTRINGVALUE(Com::tNAN,"NAN")
FSTRINGVALUE(Com::tINF,"INF")
FSTRINGVALUE(Com::tError,"Error:")
FSTRINGVALUE(Com::tInfo,"Info:")
FSTRINGVALUE(Com::tWarning,"Warning:")
FSTRINGVALUE(Com::tResend,"Resend:")
FSTRINGVALUE(Com::tEcho,"Echo:")
FSTRINGVALUE(Com::tOkSpace,"ok ")
FSTRINGVALUE(Com::tWrongChecksum,"Wrong checksum")
FSTRINGVALUE(Com::tMissingChecksum,"Missing checksum")
FSTRINGVALUE(Com::tDonePrinting,"Done printing file")
FSTRINGVALUE(Com::tX, " X")
FSTRINGVALUE(Com::tY, " Y")
FSTRINGVALUE(Com::tZ, " Z")
FSTRINGVALUE(Com::tE, " E")
FSTRINGVALUE(Com::tF, " F")
FSTRINGVALUE(Com::tS, " S")
FSTRINGVALUE(Com::tP, " P")
FSTRINGVALUE(Com::tI, " I")
FSTRINGVALUE(Com::tJ, " J")
FSTRINGVALUE(Com::tR, " R")
FSTRINGVALUE(Com::tD, " D")
FSTRINGVALUE(Com::tC, " C")
FSTRINGVALUE(Com::tH, " H")
FSTRINGVALUE(Com::tA, " A")
FSTRINGVALUE(Com::tB, " B")
FSTRINGVALUE(Com::tK, " K")
FSTRINGVALUE(Com::tL, " L")
FSTRINGVALUE(Com::tO, " O")
FSTRINGVALUE(Com::tSDReadError,"SD read error")
FSTRINGVALUE(Com::tExpectedLine,"Error:expected line ")
FSTRINGVALUE(Com::tGot," got ")
FSTRINGVALUE(Com::tSkip,"skip ")
FSTRINGVALUE(Com::tBLK,"BLK ")
FSTRINGVALUE(Com::tStart,"start")                   // do not change "start" to "Start" because some applications might not be able to detect "Start" as "start"
FSTRINGVALUE(Com::tStartWatchdog,"start Watchdog")
FSTRINGVALUE(Com::tPowerUp,"PowerUp")
FSTRINGVALUE(Com::tExternalReset,"External Reset")
FSTRINGVALUE(Com::tBrownOut,"Brown out Reset")
FSTRINGVALUE(Com::tWatchdog,"Watchdog Reset")
FSTRINGVALUE(Com::tSoftwareReset,"Software Reset")
FSTRINGVALUE(Com::tUnknownReset,"Unknown Reset")
FSTRINGVALUE(Com::tUnknownCommand,"Unknown command:")
FSTRINGVALUE(Com::tFreeRAM,"Free RAM:")
FSTRINGVALUE(Com::tXColon,"X:")
FSTRINGVALUE(Com::tSpaceXColon," X:")
FSTRINGVALUE(Com::tSpaceYColon," Y:")
FSTRINGVALUE(Com::tSpaceZColon," Z:")
FSTRINGVALUE(Com::tSpaceEColon," E:")
FSTRINGVALUE(Com::tTColon,"T:")
FSTRINGVALUE(Com::tSpaceBColon," B:")
FSTRINGVALUE(Com::tSpaceAtColon," @:")
FSTRINGVALUE(Com::tSpaceT," T")
FSTRINGVALUE(Com::tSpaceChamber," C")
FSTRINGVALUE(Com::tSpaceCAtColon," C@:")
FSTRINGVALUE(Com::tSpaceAt," @")
FSTRINGVALUE(Com::tSpaceBAtColon," B@:")
FSTRINGVALUE(Com::tSpaceRaw," RAW")
FSTRINGVALUE(Com::tColon,":")
FSTRINGVALUE(Com::tSemiColon,";")
FSTRINGVALUE(Com::tSlash,"/")
FSTRINGVALUE(Com::tSpaceSlash," /")
FSTRINGVALUE(Com::tSpeedMultiply,"SpeedMultiply:")
FSTRINGVALUE(Com::tFlowMultiply,"FlowMultiply:")
#if FEATURE_READ_CALIPER
FSTRINGVALUE(Com::tEPRZCallStandard,"Messschieber: Filamentdicke in Slicer [um]")
FSTRINGVALUE(Com::tEPRZCallAdjust,"Messschieber: Korrektur [um]")
#endif //FEATURE_READ_CALIPER
FSTRINGVALUE(Com::tPrintingIsInProcessError, "Error: printing is in progress")
FSTRINGVALUE(Com::tFanspeed,"Fanspeed:")
FSTRINGVALUE(Com::tPrintedFilament,"Printed filament:")
FSTRINGVALUE(Com::tPrintingTime,"Printing time:")
FSTRINGVALUE(Com::tMillingTime,"Milling time:")
FSTRINGVALUE(Com::tSpacem,"m ")
FSTRINGVALUE(Com::tSpaceDaysSpace," days ")
FSTRINGVALUE(Com::tSpaceHoursSpace," hours ")
FSTRINGVALUE(Com::tSpaceMin," min")
FSTRINGVALUE(Com::tInvalidArc,"Invalid arc")
FSTRINGVALUE(Com::tComma,",")
FSTRINGVALUE(Com::tSpace," ")
FSTRINGVALUE(Com::tYColon,"Y:")
FSTRINGVALUE(Com::tZColon,"Z:")
FSTRINGVALUE(Com::tE0Colon,"E0:")
FSTRINGVALUE(Com::tE1Colon,"E1:")
FSTRINGVALUE(Com::tMS1MS2Pins,"MS1,MS2 Pins")
FSTRINGVALUE(Com::tSetOutputSpace,"Set output ")
FSTRINGVALUE(Com::tSpaceToSpace," to ")
FSTRINGVALUE(Com::tHSpace,"H ")
FSTRINGVALUE(Com::tLSpace,"L ")
FSTRINGVALUE(Com::tXMinColon,"x_min:")
FSTRINGVALUE(Com::tXMaxColon,"x_max:")
FSTRINGVALUE(Com::tYMinColon,"y_min:")
FSTRINGVALUE(Com::tYMaxColon,"y_max:")
FSTRINGVALUE(Com::tZMinColon,"z_min:")
FSTRINGVALUE(Com::tZMaxColon,"z_max:")
FSTRINGVALUE(Com::tXYJerkColon,"XY-Jerk:")
FSTRINGVALUE(Com::tZJerkColon,"Z-Jerk:")
FSTRINGVALUE(Com::tLinearStepsColon," linear steps:")
FSTRINGVALUE(Com::tQuadraticStepsColon," quadratic steps:")
FSTRINGVALUE(Com::tCommaSpeedEqual,", speed=")
FSTRINGVALUE(Com::tEEPROMUpdated,"EEPROM updated")
FSTRINGVALUE(Com::tLinearLColon,"linear L:")
FSTRINGVALUE(Com::tQuadraticKColon," quadratic K:")
FSTRINGVALUE(Com::tscanHeatBed,"scanHeatBed(): ")
FSTRINGVALUE(Com::tscanWorkPart,"scanWorkPart(): ")
FSTRINGVALUE(Com::tAutoMatrixLeveling,"Auto-Matrix-Leveling @X:")
#if FEATURE_SERVICE_INTERVAL
FSTRINGVALUE(Com::tPrintedFilamentService,"Printed filament since last Service:")
FSTRINGVALUE(Com::tPrintingTimeService,"Printing time since last Service:")
FSTRINGVALUE(Com::tMillingTimeService,"Milling time since last Service:")
#endif // FEATURE_SERVICE_INTERVAL

#ifdef PRINT_GENERIC_TEMP_TABLE
FSTRINGVALUE(Com::tGenTemp,"GenTemp:")
#endif // PRINT_GENERIC_TEMP_TABLE

FSTRINGVALUE(Com::tTargetExtr,"TargetExtr")
FSTRINGVALUE(Com::tTargetBedColon,"TargetBed:")
FSTRINGVALUE(Com::tPIDAutotuneStart,"PID Autotune start")
FSTRINGVALUE(Com::tAPIDBias," bias: ")
FSTRINGVALUE(Com::tAPIDD," d: ")
FSTRINGVALUE(Com::tAPIDMin," min: ")
FSTRINGVALUE(Com::tAPIDMax," max: ")
FSTRINGVALUE(Com::tAPIDKu," Ku: ")
FSTRINGVALUE(Com::tAPIDTu," Tu: ")
FSTRINGVALUE(Com::tAPIDClassic," Classic Ziegler-Nichols PID")
FSTRINGVALUE(Com::tAPIDPessen," Pessen Integral Rule PID")
FSTRINGVALUE(Com::tAPIDSome," Some-Overshoot PID")
FSTRINGVALUE(Com::tAPIDNone," No-Overshoot PID")
FSTRINGVALUE(Com::tAPIDTyreusLyben," Tyreus-Lyben PID")
FSTRINGVALUE(Com::tAPIDKp," Kp: ")
FSTRINGVALUE(Com::tAPIDKi," Ki: ")
FSTRINGVALUE(Com::tAPIDKd," Kd: ")
FSTRINGVALUE(Com::tAPIDFailedHigh,"PID Autotune failed! Temperature to high")
FSTRINGVALUE(Com::tAPIDFailedTimeout,"PID Autotune failed! timeout")
FSTRINGVALUE(Com::tAPIDFinished,"PID Autotune finished ! Place the Kp, Ki and Kd constants in the Configuration.h or EEPROM")
FSTRINGVALUE(Com::tMTEMPColon,"MTEMP:")
FSTRINGVALUE(Com::tHeatedBed,"heated bed")
FSTRINGVALUE(Com::tExtruderSpace,"extruder ")
FSTRINGVALUE(Com::tTempSensorDefect,": temp sensor defect")
FSTRINGVALUE(Com::tTempHeaterDefect,": heater decoupled")
FSTRINGVALUE(Com::tTempSensorWorking,": working")
FSTRINGVALUE(Com::tDryModeUntilRestart,"Printer set into dry run mode until restart!")

#ifdef WAITING_IDENTIFIER
FSTRINGVALUE(Com::tWait,WAITING_IDENTIFIER)
#endif // WAITING_IDENTIFIER

#if EEPROM_MODE==0
FSTRINGVALUE(Com::tNoEEPROMSupport,"No EEPROM support compiled.\r\n")
#else
FSTRINGVALUE(Com::tConfigStoredEEPROM,"Configuration stored to EEPROM.")
FSTRINGVALUE(Com::tConfigLoadedEEPROM,"Configuration loaded from EEPROM.")
FSTRINGVALUE(Com::tEPRConfigResetDefaults,"Configuration reset to defaults.")
FSTRINGVALUE(Com::tEPRProtocolChanged,"Protocol version changed, upgrading")
FSTRINGVALUE(Com::tExtrDot,"Extr.")
FSTRINGVALUE(Com::tEPR0,"EPR:0 ")
FSTRINGVALUE(Com::tEPR1,"EPR:1 ")
FSTRINGVALUE(Com::tEPR2,"EPR:2 ")
FSTRINGVALUE(Com::tEPR3,"EPR:3 ")
FSTRINGVALUE(Com::tEPRBaudrate,"Baudrate")
FSTRINGVALUE(Com::tEPRFilamentPrinted,"Filament printed [m]")
FSTRINGVALUE(Com::tEPRFilamentPrintedService,"Filament printed since last Service [m]")
FSTRINGVALUE(Com::tEPRPrinterActive,"Printer active [s]")
FSTRINGVALUE(Com::tEPRPrinterActiveService,"Printer active since last Service [s]")
FSTRINGVALUE(Com::tEPRMillerActive,"Miller active [s]")
FSTRINGVALUE(Com::tEPRMillerActiveService,"Miller active since last Service [s]")
FSTRINGVALUE(Com::tEPRMaxInactiveTime,"Max. inactive time [ms 0=off]")
FSTRINGVALUE(Com::tEPRStopAfterInactivty,"Stop stepper after inactivity [ms 0=off]")
FSTRINGVALUE(Com::tEPRXMaxLength,"X max print length [mm]")
FSTRINGVALUE(Com::tEPRXMaxLengthMilling,"X max milling length [mm]")
FSTRINGVALUE(Com::tEPRYMaxLength,"Y max length [mm]")
FSTRINGVALUE(Com::tEPRZMaxLength,"Z max length [mm]")
FSTRINGVALUE(Com::tEPRXBacklash,"X backlash [mm]")
FSTRINGVALUE(Com::tEPRYBacklash,"Y backlash [mm]")
FSTRINGVALUE(Com::tEPRZBacklash,"Z backlash [mm]")
FSTRINGVALUE(Com::tEPRMaxXYJerk,"Max. XY-jerk [mm/s]")
FSTRINGVALUE(Com::tEPRMaxZJerk,"Max. Z-jerk [mm/s]")
FSTRINGVALUE(Com::tEPRXStepsPerMM,"X-axis resolution [steps/mm]")
FSTRINGVALUE(Com::tEPRYStepsPerMM,"Y-axis resolution [steps/mm]")
FSTRINGVALUE(Com::tEPRZStepsPerMM,"Z-axis resolution [steps/mm]")
FSTRINGVALUE(Com::tEPRXMaxFeedrate,"X-axis max. feedrate [mm/s]")
FSTRINGVALUE(Com::tEPRYMaxFeedrate,"Y-axis max. feedrate [mm/s]")
FSTRINGVALUE(Com::tEPRZMaxFeedrate,"Z-axis max. feedrate [mm/s]")
FSTRINGVALUE(Com::tEPRXHomingFeedrate,"X-axis homing feedrate [mm/s]")
FSTRINGVALUE(Com::tEPRYHomingFeedrate,"Y-axis homing feedrate [mm/s]")
FSTRINGVALUE(Com::tEPRZHomingFeedrate,"Z-axis homing feedrate [mm/s]")
FSTRINGVALUE(Com::tEPRXAcceleration,"X-axis acceleration [mm/s^2]")
FSTRINGVALUE(Com::tEPRYAcceleration,"Y-axis acceleration [mm/s^2]")
FSTRINGVALUE(Com::tEPRZAcceleration,"Z-axis acceleration [mm/s^2]")
FSTRINGVALUE(Com::tEPRXTravelAcceleration,"X-axis travel acceleration [mm/s^2]")
FSTRINGVALUE(Com::tEPRYTravelAcceleration,"Y-axis travel acceleration [mm/s^2]")
FSTRINGVALUE(Com::tEPRZTravelAcceleration,"Z-axis travel acceleration [mm/s^2]")
#if FEATURE_MILLING_MODE
FSTRINGVALUE(Com::tEPRZMillingAcceleration,"All axis milling acceleration [mm/s^2]")
#endif //FEATURE_MILLING_MODE
FSTRINGVALUE(Com::tEPRXHomePos, "X-Offset [mm]")
FSTRINGVALUE(Com::tEPRYHomePos, "Y-Offset [mm]")
FSTRINGVALUE(Com::tEPRZOffset,"Z-Offset [um]")
FSTRINGVALUE(Com::tEPRZMode,"Z Scale")
FSTRINGVALUE(Com::tEPRBedPIDDriveMax,"Bed PID I-drive max")
FSTRINGVALUE(Com::tEPRBedPIDDriveMin,"Bed PID I-drive min")
FSTRINGVALUE(Com::tEPRBedPGain,"Bed PID P-gain")
FSTRINGVALUE(Com::tEPRBedIGain,"Bed PID I-gain")
FSTRINGVALUE(Com::tEPRBedDGain,"Bed PID D-gain")
FSTRINGVALUE(Com::tEPRBedPIDMaxValue,"Bed max PWM power [0-255]")
FSTRINGVALUE(Com::tEPRStepsPerMM,"resolution [steps/mm]")
FSTRINGVALUE(Com::tEPRMaxFeedrate,"max. feedrate [mm/s]")
FSTRINGVALUE(Com::tEPReJerk," jerk [mm/s]")
FSTRINGVALUE(Com::tEPRAcceleration,"acceleration [mm/s^2]")
FSTRINGVALUE(Com::tEPRDriveMax,"PID I-drive max")
FSTRINGVALUE(Com::tEPRDriveMin,"PID I-drive min")
FSTRINGVALUE(Com::tEPRPGain,"PID P-gain")
FSTRINGVALUE(Com::tEPRIGain,"PID I-gain")
FSTRINGVALUE(Com::tEPRDGain,"PID D-gain")
FSTRINGVALUE(Com::tEPRPIDMaxValue,"max PWM power [0-255]")
FSTRINGVALUE(Com::tEPRBedsensorType,"Bed Temp. sensor type [3=orig. 4=alternativ]")
FSTRINGVALUE(Com::tEPRsensorType,"Temp. sensor type [3=V2 8=E3D 13=V3]")
FSTRINGVALUE(Com::tEPRXOffset,"X-offset [mm]")
FSTRINGVALUE(Com::tEPRYOffset,"Y-offset [mm]")
FSTRINGVALUE(Com::tEPRZOffsetmm,"Z-offset [mm]")
FSTRINGVALUE(Com::tEPRRetractionWhenHeating,"Temp. for retraction when heating [C]")
FSTRINGVALUE(Com::tEPRDistanceRetractHeating,"Distance to retract when heating [mm]")
FSTRINGVALUE(Com::tEPRExtruderCoolerSpeed,"Extruder cooler speed [0-255]")
FSTRINGVALUE(Com::tEPRAdvanceK,"Advance K [0=off]")
FSTRINGVALUE(Com::tEPRAdvanceL,"Advance L [0=off]")
FSTRINGVALUE(Com::tEPRBeeperMode,"Beeper [0=off 1=on]")
FSTRINGVALUE(Com::tEPROperatingMode,"operating mode [1=print 2=mill]")
FSTRINGVALUE(Com::tEPRZEndstopType,"Z endstop type [1=single 2=circuit]")
FSTRINGVALUE(Com::tEPRMillerType,"Miller type [tracks]")
FSTRINGVALUE(Com::tEPRRGBLightMode,"RGB Light mode [0..3 off/ws/aut/man]")
FSTRINGVALUE(Com::tEPRFET1Mode,"24V-Port X42 default [0=off 1=on]")
FSTRINGVALUE(Com::tEPRFET2Mode,"24V-Port X44 default [0=off 1=on]")
FSTRINGVALUE(Com::tEPRFET3Mode,"24V-Port X45/board fan default [0=off 1=on]")
FSTRINGVALUE(Com::tEPRCaseLightsMode, "24V-Port X19/case light default [0=off 1=on]")

#if FEATURE_ZERO_DIGITS
FSTRINGVALUE(Com::tEPRZERO_DIGIT_STATE,"Digit homing [1=on 2=off]")
#endif // FEATURE_ZERO_DIGITS
FSTRINGVALUE(Com::tEPRPrinterZ_STEP_SIZE,"Z-Button stepsize [Steps]")
FSTRINGVALUE(Com::tEPRPrinterMOD_ZOS_SCAN_POINT_X,"X pos Z-Offset-Scan [col]")
FSTRINGVALUE(Com::tEPRPrinterMOD_ZOS_SCAN_POINT_Y,"Y pos Z-Offset-Scan [row]")
#if FEATURE_WORK_PART_Z_COMPENSATION || FEATURE_HEAT_BED_Z_COMPENSATION
FSTRINGVALUE(Com::tEPRZScanStartLift,"Z-Scan start elevation [mm]")
#endif // FEATURE_WORK_PART_Z_COMPENSATION || FEATURE_HEAT_BED_Z_COMPENSATION
#if FEATURE_SENSIBLE_PRESSURE
FSTRINGVALUE(Com::tEPRPrinterMOD_SENSEOFFSET_OFFSET_MAX,"SenseOffset peak offset [um]")
FSTRINGVALUE(Com::tEPRPrinterEPR_RF_MOD_SENSEOFFSET_DIGITS,"SenseOffset cap [Digits]")
#endif //FEATURE_SENSIBLE_PRESSURE
#if FEATURE_EMERGENCY_PAUSE
FSTRINGVALUE(Com::tEPRPrinterEPR_RF_EmergencyPauseDigitsMin,"Emergency-Pause min [Digits 0=off]")
FSTRINGVALUE(Com::tEPRPrinterEPR_RF_EmergencyPauseDigitsMax,"Emergency-Pause max [Digits 0=off]")
#endif //FEATURE_EMERGENCY_PAUSE

#if FEATURE_EMERGENCY_STOP_ALL
FSTRINGVALUE(Com::tEPRPrinterEPR_RF_EmergencyStopAllMin,"Z-Emergency-Stop min [Digits]")
FSTRINGVALUE(Com::tEPRPrinterEPR_RF_EmergencyStopAllMax,"Z-Emergency-Stop max [Digits]")
#endif //FEATURE_EMERGENCY_STOP_ALL
#if FEATURE_DIGIT_Z_COMPENSATION
FSTRINGVALUE(Com::tEPRZDIGIT_CMP_STATE,"Digit compensation [1=ON 2=OFF]")
#endif // FEATURE_DIGIT_Z_COMPENSATION

FSTRINGVALUE(Com::tEPRPrinter_STEPPER_X,"X Stepper current [2A=126]")
FSTRINGVALUE(Com::tEPRPrinter_STEPPER_Y,"Y Stepper current [2A=126]")
FSTRINGVALUE(Com::tEPRPrinter_STEPPER_Z,"Z Stepper current [2A=126]")
FSTRINGVALUE(Com::tEPRPrinter_STEPPER_E0,"E0 Stepper current [2A=126]")
#if NUM_EXTRUDER > 1
FSTRINGVALUE(Com::tEPRPrinter_STEPPER_E1,"E1 Stepper current [2A/126]")
#endif //NUM_EXTRUDER > 1
FSTRINGVALUE(Com::tEPRInterruptSpacingInterval,"Interrupt spacing [CPU Ticks]")

#if FAN_PIN>-1 && FEATURE_FAN_CONTROL
FSTRINGVALUE(Com::tEPRPrinter_FAN_MODE,"Fan modulation [0=PWM 1=PDM]")
FSTRINGVALUE(Com::tEPRPrinter_FAN_SPEED,"Fan PWM divisor [15.3Hz/x]")
FSTRINGVALUE(Com::tEPRPrinter_FAN_PART_FAN_PWM_MIN,"Partfan 1% level [1..239]")
FSTRINGVALUE(Com::tEPRPrinter_FAN_PART_FAN_PWM_MAX,"Partfan 99% level [16..254]")
#endif // FAN_PIN>-1 && FEATURE_FAN_CONTROL

#endif // EEPROM_MODE

#if SDSUPPORT
FSTRINGVALUE(Com::tSDRemoved,UI_TEXT_SD_REMOVED)
FSTRINGVALUE(Com::tSDInserted,UI_TEXT_SD_INSERTED)
FSTRINGVALUE(Com::tSDInitFail,"SD init fail")
FSTRINGVALUE(Com::tErrorWritingToFile,"error writing to file")
FSTRINGVALUE(Com::tBeginFileList,"Begin file list")
FSTRINGVALUE(Com::tEndFileList,"End file list")
FSTRINGVALUE(Com::tFileOpened,"File opened:")
FSTRINGVALUE(Com::tSpaceSizeColon," Size:")
FSTRINGVALUE(Com::tFileSelected,"File selected")
FSTRINGVALUE(Com::tFileOpenFailed,"file.open failed")
FSTRINGVALUE(Com::tSDPrintingByte,"SD printing byte ")
FSTRINGVALUE(Com::tNotSDPrinting,"Not SD printing")
FSTRINGVALUE(Com::tOpenFailedFile,"open failed, File: ")
FSTRINGVALUE(Com::tWritingToFile,"Writing to file: ")
FSTRINGVALUE(Com::tDoneSavingFile,"Done saving file.")
FSTRINGVALUE(Com::tFileDeleted,"File deleted")
FSTRINGVALUE(Com::tDeletionFailed,"Deletion failed")
FSTRINGVALUE(Com::tDirectoryCreated,"Directory created")
FSTRINGVALUE(Com::tCreationFailed,"Creation failed")
FSTRINGVALUE(Com::tSDErrorCode,"SD errorCode:")
#endif // SDSUPPORT

FSTRINGVALUE(Com::tHeaterDecoupledWarning, "One heater seems decoupled from thermistor - disabling all for safety!")

FSTRINGVALUE(Com::tOutputObjectPrint,OUTPUT_OBJECT_SCRIPT_PRINT)
FSTRINGVALUE(Com::tOutputObjectMill,OUTPUT_OBJECT_SCRIPT_MILL)

FSTRINGVALUE(Com::tUnmountFilamentSoft,UNMOUNT_FILAMENT_SCRIPT_SOFT)
FSTRINGVALUE(Com::tUnmountFilamentHard,UNMOUNT_FILAMENT_SCRIPT_HARD)
FSTRINGVALUE(Com::tMountFilamentSoft,MOUNT_FILAMENT_SCRIPT_SOFT)
FSTRINGVALUE(Com::tMountFilamentHard,MOUNT_FILAMENT_SCRIPT_HARD)

#if FEATURE_FIND_Z_ORIGIN
FSTRINGVALUE(Com::tFindZOrigin,FIND_Z_ORIGIN_SCRIPT)
#endif // FEATURE_FIND_Z_ORIGIN

void Com::printWarningF(FSTRINGPARAM(text))
{
    printF(tWarning);
    printF(text);
} // printWarningF


void Com::printWarningFLN(FSTRINGPARAM(text))
{
    printF(tWarning);
    printFLN(text);
} // printWarningFLN


void Com::printInfoF(FSTRINGPARAM(text))
{
    printF(tInfo);
    printF(text);
} // printInfoF


void Com::printInfoFLN(FSTRINGPARAM(text))
{
    printF(tInfo);
    printFLN(text);
} // printInfoFLN

void Com::printErrorF(FSTRINGPARAM(text))
{
    printF(tError);
    printF(text);
} // printErrorF


void Com::printErrorFLN(FSTRINGPARAM(text))
{
    printF(tError);
    printFLN(text);
} // printErrorFLN


void Com::printFLN(FSTRINGPARAM(text))
{
    printF(text);
    println();
} // printFLN


void Com::printFLN(FSTRINGPARAM(text),const char *msg)
{
    printF(text);
    print(msg);
    println();
} // printFLN


void Com::printF(FSTRINGPARAM(ptr))
{
  char c;
  while ((c=HAL::readFlashByte(ptr++)) != 0)
     HAL::serialWriteByte(c);
} // printF


void Com::printF(FSTRINGPARAM(text),const char *msg)
{
    printF(text);
    print(msg);
} // printF


void Com::printF(FSTRINGPARAM(text),int value)
{
    printF(text);
    print(value);
} // printF


void Com::printF(FSTRINGPARAM(text),int32_t value)
{
    printF(text);
    print(value);
} // printF


void Com::printF(FSTRINGPARAM(text),uint32_t value)
{
    printF(text);
    printNumber(value);
} // printF


void Com::printFLN(FSTRINGPARAM(text),int value)
{
    printF(text);
    print(value);
    println();
} // printFLN


void Com::printFLN(FSTRINGPARAM(text),int32_t value)
{
    printF(text);
    print(value);
    println();
} // printFLN


void Com::printFLN(FSTRINGPARAM(text),uint32_t value)
{
    printF(text);
    printNumber(value);
    println();
} // printFLN


void Com::printFLN(FSTRINGPARAM(text),float value,uint8_t digits,bool komma_as_dot)
{
    printF(text);
    printFloat(value,digits,komma_as_dot);
    println();
} // printFLN


void Com::printF(FSTRINGPARAM(text),float value,uint8_t digits,bool komma_as_dot)
{
    printF(text);
    printFloat(value,digits,komma_as_dot);
} // printF

void Com::printSharpLine(){
    for(uint8_t nnn = 0; nnn < 70; nnn++) Com::printF( PSTR("#") );
    Com::println();
}

void Com::print(const char *text)
{
    while(*text)
    {
        HAL::serialWriteByte(*text++);
    }
} // print


void Com::print(int32_t value)
{
    if(value<0)
    {
        HAL::serialWriteByte('-');
        value = -value;
    }
    printNumber(value);
} // print


void Com::printNumber(uint32_t n)
{
    char buf[11]; // Assumes 8-bit chars plus zero byte.
    char *str = &buf[10];


    *str = '\0';
    do
    {
        unsigned long m = n;
        n /= 10;
        *--str = '0'+(m - 10 * n);
    }while(n);

    print(str);
} // printNumber


void Com::printArrayFLN(FSTRINGPARAM(text),float *arr,uint8_t n,uint8_t digits)
{
    printF(text);
    for(uint8_t i=0; i<n; i++)
        printF(Com::tSpace,arr[i],digits);
    println();
} // printArrayFLN


void Com::printArrayFLN(FSTRINGPARAM(text),int32_t *arr,uint8_t n)
{
    printF(text);
    for(uint8_t i=0; i<n; i++)
        printF(Com::tSpace,arr[i]);
    println();
} // printArrayFLN


void Com::printFloat(float number, uint8_t digits, bool komma_as_dot)
{
    if (isnan(number))
    {
        printF(tNAN);
        return;
    }
    if (isinf(number))
    {
        printF(tINF);
        return;
    }

    // Handle negative numbers
    if (number < 0.0)
    {
        print('-');
        number = -number;
    }

    // Round correctly so that print(1.999, 2) prints as "2.00"
    float rounding = 0.5;
    for (uint8_t i=0; i<digits; ++i) rounding *= 0.1;
    /* *=0.1 evtl. besser als /= 10, aber "With g++, 200.f / 10 and 200.f * 0.1 emit exactly the same code. – Johan Kotlinski Nov 8 '10 at 15:31"
            Source: https://stackoverflow.com/questions/4125033/floating-point-division-vs-floating-point-multiplication*/

    number += rounding;

    // Extract the integer part of the number and print it
    unsigned long   int_part  = (unsigned long)number;
    float           remainder = number - (float)int_part;


    printNumber(int_part);

    // Print the decimal point, but only if there are digits beyond
    if (digits > 0 && komma_as_dot) print(',');
    if (digits > 0 && !komma_as_dot) print('.');

    // Extract digits from the remainder one at a time
    while (digits-- > 0)
    {
        remainder *= 10.0;
        int toPrint = int(remainder);
        print(toPrint);
        remainder -= toPrint;
    }
} // printFloat
