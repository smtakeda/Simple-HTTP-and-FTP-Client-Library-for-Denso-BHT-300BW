'**************************************************************************
'***                                                                    ***
'***    Product Name    : BHT-BASIC3.5 Definition of Constants          ***
'***    File Name       : bhtdef.inc                                    ***
'***                                                                    ***
'***    Edition History                                                 ***
'***    Version   Date      Comments                                    ***
'***    --------  --------  -----------------------------------------   ***
'***    1.00.00   2001. 2   Original                                    ***
'***    1.01.00   2001. 6   .so added                                   ***
'***                        Display mode and character attributes       ***
'***                        added to I/O port                           ***
'***                        Tone data from &hC0 to &hFF                 ***
'***              2001. 7   CRC.FN3 Function numbers added              ***
'***              2002. 4   I/O port &hE (System status display) added  ***
'***                        I/O port &h60F4 (Effective period of the    ***
'***                        remote wakeup after power off) added        ***
'***              2002. 5   SS.FN3 Functions #11 to #33 added           ***
'***    1.02.00   2003. 4   BT.FN3 Function added                       ***
'***    1.03.00   2003.10   LAN parameter of SYSTEM/SYSMDFY.FN3 added   ***
'***                        CRC.FN3 Function numbers corrected          ***
'***                        DHCP Function added                         ***
'***              2004. 3   BT.FN3 Function #1 parammeter added         ***
'***                        FILE.FN3 Function #11 to #13 added          ***
'***                        SYSTEM.FN3 Ymodem Protocol parammeter added ***
'***                        YMODEM.FN3 Function #3 to #4 added          ***
'***                        SCREEN.FN3 Function #1 to #2 added          ***
'***                        I/O port &h6060 (Communications protocol)   ***
'***                        parammeter added                            ***
'***                        I/O port &h6150 to &h6152 (Auto-repeat)     ***
'***                        added                                       ***
'***    1.04.00   2004. 7   BT.FN3 Function #3 parammeter added         ***
'***              2004. 8   FILE.FN3 Function #14 to #15 added          ***
'***    1.05.00   2005. 8   I/O port, System.fn3 added                  ***
'***                        FTP.FN3 Function #6 corrected               ***
'***                        (.ftLspDel and .ftLspData)                  ***
'***    1.06.00   2006. 2   SS.FN3 Function #14 parammeter added        ***
'***    1.07.00   2006. 2   SS.FN3 Wireless LAN Security added          ***
'***                        CAMERA.FN3 added                            ***
'***    1.08.00   2006. 4   Barcode Light Mode added                    ***
'***    1.09.00   2006. 5   SS.FN3 Function #14 parameter added         ***
'***    1.10.00   2006.12   FTP.FN3 Function #13 to #14 added           ***
'***                        YMODEM.FN3 Function #5 to #6 added          ***
'***    1.11.00   2007.03   SS.FN3 Function #14 parameter added         ***
'***    1.12.00   2007.10   DPM parameter added                         ***
'***                                                                    ***
'***                    Copyright (C) 2004 DENSO WAVE INCORPORATED      ***
'***                    All rights reserved.                            ***
'**************************************************************************
'****************************************
'*   I/O Port Parameters Definition     *
'****************************************
'===== Waiting for Events ================================================
const   .pnEvent    = &h0

const   .pvEvKeyOn  = &h01
const   .pvEvBarOn  = &h02
const   .pvEvTrgOn  = &h04
const   .pvEvtCmOn  = &h08
const   .pvEvTma0   = &h10
const   .pvEvTmb0   = &h20
const   .pvEvTmc0   = &h40
const   .pvEvCsOn   = &h80

'===== LED ================================================================
const   .pnLEDCtrl  = &h1

const   .pvLEDRed   = &h01
const   .pvLEDGrn   = &h02
const   .pvLEDBle   = &h04

'===== LCD Contrast Level =================================================
const   .pnLCDCnt   = &h3

'===== Message Version ====================================================
const   .pnMgLng    = &h4

const   .pvSysMSG   = &h00
const   .pvEnglish  = &h01

'===== Alphabet Entry (Software Keyboard for BHT-100 Series) ==============
const   .pnAlpCtrl  = &h5

const   .pvAlpOff   = &h00
const   .pvAlpOn    = &h01
const   .pvAlpDisp  = &h02
const   .pvAlpBotm  = &h00
const   .pvAlpTop   = &h04
const   .pvAlpMove  = &h08

'===== Sleep Timer ========================================================
const   .pnSlpTime  = &h6

'===== Wakeup =============================================================
const   .pnWupCtrl  = &h8

const   .pvWupOn    = &h01
const   .pvWupPwOn  = &h02
const   .pvWupTmSt  = &h04
const   .pvWupTmOn  = &h08

'===== System Status Display =============================================
const   .pnSysSts   = &hE

const   .pvStsOff   = &h00
const   .pvStsOn    = &h01

'===== Re-read Prevention Enabled Time ====================================
const   .pnBarRrd   = &hF

'===== Initiation of System Mode ==========================================
const   .pnSysMd    = &h6000

const   .pvSMdNGo   = &h00
const   .pvSMdGo    = &h01

'===== Battery Voltage Level =============================================
const   .pnBtVolt   = &h6010
const   .pnBtType   = &h6011
const   .pnCuOn     = &h6012

const   .pvBtRcrg   = &h00
const   .pvBtDry    = &h01
const   .pvCuOff    = &h00
const   .pvCuOn     = &h01
const   .pvCuErr    = &h02

'===== Backlight =========================================================
const   .pnBLCtrl   = &h6020
const   .pnBLTime   = &h6021
const   .pnBLight   = &h6022

const   .pvBLOff    = &h00
const   .pvBLOn     = &h01
const   .pvBLLcd    = &h01
const   .pvBLKey    = &h02

'===== Effective Held-down Time of Power Key ==============================
const   .pnTmPOff   = &h6030

'===== Effective Held-down Time of BS/C  Key ==============================
const   .pnBSCTime  = &h6031


'===== Magic Key State ====================================================
const   .pnMKey     = &h6040

const   .pvM1kyOn   = &h01
const   .pvM2kyOn   = &h02
const   .pvM3kyOn   = &h04
const   .pvM4kyOn   = &h08
const   .pvM5kyOn   = &h10
const   .pvMNkyOn   = &h10

'===== Other Key State ====================================================
const   .pnCKey     = &h6041

const   .pvSFkyOn   = &h01
const   .pvBSkyOn   = &h02
const   .pvCLkyOn   = &h04
const   .pvPWkyOn   = &h08


'===== Communications Protocol ============================================
const   .pnCmPrtcl  = &h6060

const   .pvCPBHT    = &h00
const   .pvCPBHTIr  = &h02
const   .pvCPYmdm   = &h03

'===== ID =================================================================
const   .pnBHTIDL   = &h6061
const   .pnBHTIDH   = &h6062

'===== Font Size ==========================================================
const   .pnFont     = &h6080

const   .pvFtStd    = &h00
const   .pvFtSmall  = &h01
const   .pvFtSmall2 = &h02
const   .pvFtBig    = &h04

'===== Font Emphasis ======================================================
const   .pnFont.Emph = &h6081

const   .pvEmph.Off = &h00
const   .pvEmph.On  = &h01

'===== Cursor Blink =======================================================
const   .pnCursor   = &h6082

'===== Font Size Width ====================================================
const   .pnFont.Width = &h6083

'===== Beeper/Vibrator ====================================================
const   .pnBprVib   = &h6090

const   .pvBprOn    = &h01
const   .pvVibOn    = &h02

'===== Key Entry System and Mode ==========================================
const   .pnKeyEnt   = &h60B0
const   .pnKeyMd    = &h60B1

const   .pvKyNm     = &h00
const   .pvKyAlpNm  = &h01
const   .pvKMNm     = &h00
const   .pvKMAlp    = &h01
const   .pvKMKn     = &h02

'===== Beeper Volume ======================================================
const   .pnBprVolm  = &h60C0

'===== System Updating ====================================================
const   .pnSysUp    = &h60D0

const   .pvSUpOff   = &h00
const   .pvSUpRst   = &h01

'===== Defragmentation of Drive ===========================================
const   .pnDfrgSzL  = &h60E0
const   .pnDfrgSzH  = &h60E1
const   .pnDfrgGo   = &h60E2

const   .pvDFNoDsp  = &h00
const   .pvDFAGrph  = &h01
const   .pvDFRGrph  = &h02

'===== Remote Wakeup ======================================================
const   .pnRwuCtrl  = &h60F0
const   .pnRwuSpd   = &h60F1
const   .pnRwuHost  = &h60F2
const   .pnRwuWtT   = &h60F3
const   .pnRwuEfT   = &h60F4

const   .pvRwuOff   = &h00
const   .pvRwuOn    = &h01
const   .pvRwu96    = &h01
const   .pvRwu192   = &h02
const   .pvRwu384   = &h03
const   .pvRwu576   = &h04
const   .pvRwu1152  = &h05
const   .pvRwu2304  = &h06
const   .pvRwu4608  = &h07
const   .pvRwuRgst  = &h01
const   .pvRwuEdOk  = &h02

'===== SCREEN Parameters ==================================================
const   .pnScrnMdL  = &h6110
const   .pnScrnMdH  = &h6111
const   .pnScrnAtL  = &h6112
const   .pnScrnAtH  = &h6113

const   .pvScMB       = &h01
const   .pvScMBRed    = &h02
const   .pvScSmall    = &h04
const   .pvScR180     = &h10
const   .pvScInv      = &h01
const   .pvScW2H1     = &h02
const   .pvScW1H2     = &h04
const   .pvScW2H2     = &h06

'===== Touch Screen ======================================================
const   .pnTPanel   = &h6120
const   .pnTPBeep   = &h6121
const   .pnTPSts    = &h6122

const   .pvTPOff    = &h00
const   .pvTPOn     = &h01
const   .pvTPBOff   = &h00
const   .pvTPBOn    = &h01
const   .pvTPPush   = &h00
const   .pvTPPull   = &h01

'===== Auto-repeat =======================================================
const   .pnARKey    = &h6150
const   .pnARKwait  = &h6151
const   .pnARKintval= &h6152

const   .pvARKeyOn  = &h01
const   .pvARKG1On  = &h02
const   .pvARKG2On  = &h04
const   .pvARKG3On  = &h08
const   .pvARKG4On  = &h10

'===== View Finder =======================================================
const   .pnVwFindr  = &h6310

const   .pvVFOff    = &h00
const   .pvVFOn     = &h01

'===== Scanning Range Marker ==============================================
const   .pnScnMark  = &h6320

const   .pvMarkNrm  = &h00
const   .pvMarkOn   = &h01
const   .pvMarkOff  = &h02

'===== PHS ================================================================
const   .pnPSMode   = &h7100
const   .pnPSDSend  = &h7101
const   .pnPSRTone  = &h7102
const   .pnPSRBeep  = &h7103
const   .pnPSRVib   = &h7104
const   .pnPSRLed   = &h7105
const   .pnPSVolum  = &h7106
const   .pnPSOffTm  = &h7107
const   .pnPSVocD   = &h7108
const   .pnPSVocR   = &h7109
const   .pnPSDatR   = &h710A
const   .pnPSOsup   = &h710B

const   .pvPublic   = &h00
const   .pvOffice   = &h01
const   .pvDual     = &h02
const   .pvDSndOff  = &h00
const   .pvDSndOn   = &h01
const   .pvRTone1   = &h01
const   .pvRTone2   = &h02
const   .pvRTone3   = &h03
const   .pvRMeldy1  = &h04
const   .pvRMeldy2  = &h05
const   .pvRMeldy3  = &h06
const   .pvRBpOff   = &h00
const   .pvRBpS     = &h01
const   .pvRBpM     = &h02
const   .pvRBpL     = &h03
const   .pvRVibOff  = &h00
const   .pvRVibOn   = &h01
const   .pvRLedOff  = &h00
const   .pvRLedOn   = &h01
const   .pvVocDOff  = &h00
const   .pvVocDOn   = &h01
const   .pvVocROff  = &h00
const   .pvVocROn   = &h01
const   .pvDatROff  = &h00
const   .pvDatROn   = &h01

'****************************************
'*  SCREEN Parameters Definition        *
'****************************************
'===== Display Mode  =====================================================
const   .scDefault  = &h0000
const   .scMB       = &h0001
const   .scMBRed    = &h0002
const   .scSmall    = &h0004
const   .scR180     = &h0010

'===== Character Attributes  =============================================
const   .scInvert   = &h0001
const   .scW2H1     = &h0002
const   .scW1H2     = &h0004
const   .scW2H2     = &h0006
const   .scDGray    = &h0400
const   .scLGray    = &h0800
const   .scWhite    = &h0FF0

'****************************************
'*  SYSTEM.FN3 Parameters Definition    *
'****************************************
'===== Function Numbers  =================================================
const   .fcVersion  = 0
const   .fcSysIGet  = 1
const   .fcSysISet  = 2
const   .fcSysSGet  = 3
const   .fcSysSSet  = 4
const   .fcFontInf  = 5
const   .fcCReset   = 11
const   .fcCLkGet   = 12
const   .fcCMdRqst  = 21

'+--------------------------------------+
'|  Setting Numeric Data                |
'+--------------------------------------+
'===== Shift Key Mode  ===================================================
const   .sySFMode   = 1

const   .sySFNlock  = 0
const   .sySF1time  = 1

'=====  Magic Keys  =======================================================
const   .syM1key    = 2
const   .syM2key    = 3
const   .syM3key    = 4
const   .syM4key    = 5

const   .syMkyNone  = 0
const   .syMkyEnt   = 1
const   .syMkyTrg   = 2
const   .syMkySF    = 3
const   .syMkyBL    = 4
const   .syMkyTel   = 5
const   .syMkyMenu  = 6

'=====  Black-and-White Inverted Label Reading  ==========================
const   .syBarInvt  = 6

const   .syInvtOff  = 0
const   .syInvtOn   = 1

'=====  Decode Level  =====================================================
const   .syDecdLvl  = 8

'=====  Min. Number of Digits to be Read for ITF ==========================
const   .syITFMin   = 9

'=====  Min. Number of Digits to be Read for STF ==========================
const   .sySTFMin   = 10

'=====  Min. Number of Digits to be Read for Codabar ======================
const   .syNW7Min   = 11

'=====  Default Interface  ================================================
const   .syCmifApl  = 12
const   .syCmifSys  = 13

const   .syCmifOpt  = 0
const   .syCmifCon  = 1

'=====  Transmission Speed for IrDA Interface =============================
const   .syTrSpdOp  = 14

const   .syOp24     = 0
const   .syOp96     = 1
const   .syOp192    = 2
const   .syOp384    = 3
const   .syOp576    = 4
const   .syOp1152   = 5
const   .syOp2304   = 6
const   .syOp4608   = 7

'=====  Transmission Speed for Direct-Connect Interface ====================
const   .syTrSpdCn  = 18

const   .syCn3      = 0
const   .syCn6      = 1
const   .syCn12     = 2
const   .syCn24     = 3
const   .syCn48     = 4
const   .syCn96     = 5
const   .syCn192    = 6
const   .syCn384    = 7
const   .syCn576    = 8
const   .syCn1152   = 9

'=====  Parity Bit(s) for Direct-Connect Interface  ======================
const   .syVPrtyCn  = 19

const   .syVPrtyN   = 0
const   .syVPrtyO   = 1
const   .syVPrtyE   = 2

'=====  Character Length for Direct-Connect Interface  ====================
const   .syDatLnCn  = 20

const   .syDatLen7  = 0
const   .syDatLen8  = 1

'=====  Stop Bit for Direct-Connect Interface  ============================
const   .syStpLnCn  = 21

const   .syStpLen1  = 0
const   .syStpLen2  = 1

'=====  Serial Number for IrDA Interface  =================================
const   .sySNoOp    = 22

const   .sySNoOff   = 0
const   .sySNoOn    = 1

'=====  Horizontal Parity for IrDA Interface  =============================
const   .syHPrtyOp  = 23

const   .syHPtyOff  = 0
const   .syHPtyOn   = 1

'=====  Linkup Time for IrDA Interface  ====================================
const   .syLnkTmOp  = 24

const   .syLnkT0    = 0
const   .syLnkT30   = 1
const   .syLnkT60   = 2
const   .syLnkT90   = 3
const   .syLnkT120  = 4

'=====  Trailing Spaces for IrDA Interface =================================
const   .syFldSpOp  = 25

const   .sySpIgnr   = 0
const   .sySpData   = 1

'=====  Serial Number for Direct-Connect Interface  ========================
const   .sySNoCn    = 26

'const   .sySNoOff   = 0
'const   .sySNoOn    = 1

'=====  Horizontal Parity for Direct-Connect Interface =====================
const   .syHPrtyCn  = 27

'const   .syHPtyOff  = 0
'const   .syHPtyOn   = 1

'=====  Linkup Time for Direct-Connect Interface ===========================
const   .syLnkTmCn  = 28

'const   .syLnkT0    = 0
'const   .syLnkT30   = 1
'const   .syLnkT60   = 2
'const   .syLnkT90   = 3
'const   .syLnkT120  = 4

'=====  Trailing Spaces for Direct-Connect Interface =====================
const   .syFldSpCn  = 29

'const   .sySpIgnr   = 0
'const   .sySpData   = 1

'=====  Communications Protocol  =========================================
const   .syCmPrtcl  = 30

const   .syCPBHT    = 0
const   .syCPBHTIr  = 2
const   .syCPYmdm   = 3

'=====  Resume  ==========================================================
const   .syResm     = 31

const   .syResmOff  = 0
const   .syResmOn   = 1

'=====  RAM size  ========================================================
const   .syRamSize  = 35

'=====  ROM size  ========================================================
const   .syRomSize  = 36

'=====  Cluster Size  ====================================================
const   .syClstSiz  = 37
const   .syClstSize = 37

'=====  Scanning Range Marker  ===========================================
const   .syScnMark  = 38

const   .syMarkNrm  = 0
const   .syMarkOn   = 1
const   .syMarkOff  = 2

'=====  View Finder  =====================================================
const   .syVwFindr  = 39

const   .syVFOff    = 0
const   .syVFOn     = 1

'=====  Option Data  =====================================================
const   .syOptData  = 40

const   .syODOff    = 0
const   .syODOn     = 1

'=====  Retries of establish link command  ===============================
const   .syLkCnt   = 41

'=====  Intervals between retries of establish link command  =============
const   .syLkIntv  = 42

'=====  Retries of release link command  =================================
const   .syUlkCnt  = 43

'=====  Intervals between retries of release link command  ===============
const   .syUlkIntv = 44

'=====  Link release period  =============================================
const   .syUlkTmr  = 45

'=====  Transmission speed between the BHT and LAN-support CU  ===========
const   .syDvSpd   = 46

'=====  Ymodem Protocol CR/LF Code =======================================
const   .syYmLFcode = 47

const   .syYmCRLF   = 0
const   .syYmLF     = 1
const   .syYmCR     = 2
const   .syYmNone   = 3

'=====  Ymodem Protocol CR/LF Code Property ==============================
const   .syYmLFdata = 48

const   .syYmRSepa  = 0
const   .syYmRData  = 1

'=====  Ymodem Protocol BHT ID ===========================================
const   .syYmBhtID    = 49

const   .syYmIDNotUse = 0
const   .syYmIDUse    = 1

'=====  Ymodem Protocol  =================================================
const   .syYmInterval = 50

'=====  Barcode invert   =================================================
const   .syBarRvs     = 52

const   .syRvsOff     = 0
const   .syRvsOn      = 1

'=====  Barcode Scanmode =================================================
const   .syScanMode   = 53

const   .syScnNormal  = 0
const   .syScnPoint   = 1
const   .syScnBarCode = 2

'=====  Barcode Light Mode ===============================================
const   .syLightMode  = 55

const   .syLightAuto  = 0
const   .syLightOn    = 1
const   .syLightOff   = 2

'=====  Barcode Sensor mode ==============================================
const   .sySensorMode = 60

const   .sySnsrOff    = 0
const   .sySnsrOn     = 31

'=====  BackLight ========================================================
const   .syBLNormal    = 71
const   .syBLPowerSave = 72
const   .syBLPSTime    = 73

'=====  Key ==============================================================
const   .syM5key      = 74
const   .syBSCKey     = 75

'=====  DPM ==============================================================
const   .syDPMFilter  = 84

const   .syDPMFNone   = 0
const   .syDPMF33Mov  = 1
const   .syDPMF55Mov  = 2
const   .syDPMF77Mov  = 3
const   .syDPMF33Blk  = 4
const   .syDPMF55Blk  = 5
const   .syDPMF77Blk  = 6
const   .syDPMF33Wht  = 7
const   .syDPMF55Wht  = 8
const   .syDPMF77Wht  = 9

'+--------------------------------------+
'|  Setting String Data                 |
'+--------------------------------------+
'=====  System Version  ==================================================
const   .syVersion  = 1

'=====  Model Name  ======================================================
const   .syModel    = 3

'=====  Product Number  ==================================================
const   .syPrdctNo  = 4

'=====  Serial Number  ===================================================
const   .syBHTSNo   = 5

'=====  Execution Program Name  ==========================================
const   .syExePrg   = 6

'=====  System Version of BHT System Parameter File ======================
const   .syOsUpVer  = 7

'=====  System Version of PHS System Parameter File ======================
const   .syPHSVer   = 8

'=====  LAN-support CU system version  ===================================
const   .syCVGet    = 9

'=====  MAC address of the LAN-support CU ================================
const   .syCMacGet  = 10

'=====  Product number assigned to the LAN-support CU ====================
const   .syCPNoGet  = 11

'=====  Logo Filename ====================================================
const   .syLogoFile  = 12



'+------------------------------------------------------+
'|  Link Status between the BHT and the LAN-support CU  |
'+------------------------------------------------------+
const   .syNgLk     = 0
const   .syOkLk     = 1
const   .syOkOthLk  = 2
const   .syLkNoRes  = 3

'****************************************
'*  SYSMDFY.FN3 Parameters Definition   *
'****************************************
'===== Function Numbers  =================================================
const   .fcMdBVGet  = 1
const   .fcMdBDo    = 2
const   .fcMdBNGet  = 3
const   .fcMdBNSet  = 4
const   .fcMdCVGet  = 11
const   .fcMdCDo    = 12
const   .fcMdCNGet  = 13
const   .fcMdCNSet  = 14

'+--------------------------------------+
'|  Reconfigure BHT system              |
'+--------------------------------------+
const   .smPwOff  = 0
const   .smReset  = 1

'****************************************
'*  CONSOLE.FN3 Parameters Definition   *
'****************************************
'=====  Function #0  ======================================================
'const   .fcVersion  = 0

'=====  Function #1  ======================================================
const   .fcDot      = 1

const   .cnColor    = 0
const   .cnInvert   = 1
const   .cnBlack    = &h0000
const   .cnDGray    = &h0040
const   .cnLGray    = &h0080
const   .cnWhite    = &h00FF

'=====  Function #2  ======================================================
const   .fcLine     = 2

'const   .cnColor    = 0
'const   .cnInvert   = 1
'const   .cnBlack    = &h0000
'const   .cnDGray    = &h0040
'const   .cnLGray    = &h0080
'const   .cnWhite    = &h00FF

'=====  Function #3  ======================================================
const   .fcDtLine   = 3

'const   .cnColor    = 0
'const   .cnInvert   = 1
'const   .cnBlack    = &h0000
'const   .cnDGray    = &h0040
'const   .cnLGray    = &h0080
'const   .cnWhite    = &h00FF

'=====  Function #4  ======================================================
const   .fcRectFil  = 4

'const   .cnColor    = 0
'const   .cnInvert   = 1
'const   .cnBlack    = &h0000
'const   .cnDGray    = &h0040
'const   .cnLGray    = &h0080
'const   .cnWhite    = &h00FF

'=====  Function #5  ======================================================
const   .fcRect     = 5

'const   .cnColor    = 0
'const   .cnInvert   = 1
'const   .cnBlack    = &h0000
'const   .cnDGray    = &h0040
'const   .cnLGray    = &h0080
'const   .cnWhite    = &h00FF

'=====  Function #6  ======================================================
const   .fcDotGet   = 6

'const   .cnBlack    = &h0000
'const   .cnDGray    = &h0040
'const   .cnLGray    = &h0080
'const   .cnWhite    = &h00FF

'=====  Function #11  =====================================================
const   .fcFKey     = 11

const   .cnFKey0    = 0
const   .cnFKey4    = 1
const   .cnFKey8    = 2

'=====  Function #12  =====================================================
const   .fcFKeyDsp  = 12

const   .cnAnk      = 0
const   .cnMB       = 1
const   .cnSmallFt  = 4
const   .cnW1H1     = 0
const   .cnW2H1     = 1
const   .cnW1H2     = 2
const   .cnW2H2     = 3

'=====  Function #13  =====================================================
const   .fcUKey     = 13

'const   .cnAnk      = 0
'const   .cnMB       = 1
'const   .cnSmallFt  = 4
'const   .cnW1H1     = 0
'const   .cnW2H1     = 1
'const   .cnW1H2     = 2
'const   .cnW2H2     = 3

'=====  Function #14  =====================================================
const   .fcUKeyImg  = 14

'=====  Function #15  =====================================================
const   .fcUKeyEnd  = 15

'=====  Function #21  =====================================================
const   .fcPnlGet   = 21

'=====  Function #31  =====================================================
const   .fcHBxOpen  = 31

'=====  Function #32  =====================================================
const   .fcHBxLoad  = 32

'=====  Function #33  =====================================================
const   .fcHBxSave  = 33

const   .cnBMP      = 0
const   .cnJPG      = 1

'=====  Function #34  =====================================================
const   .fcHBxClr   = 34

'=====  Function #35  =====================================================
const   .fcHBxClos  = 35

'=====  Function #41  =====================================================
const   .fcImgOpen  = 41

'=====  Function #42  =====================================================
const   .fcImgClos  = 42

'=====  Function #51  =====================================================
const   .fcLcdClr   = 51

'=====  Function #101  ====================================================
const   .fcCapOpen  = 101

'=====  Function #102  ====================================================
const   .fcCapSave  = 102

'const   .cnBMP      = 0
'const   .cnJPG      = 1
const   .cnQtyStd   = 0
const   .cnQtyHigh  = 1
const   .cnQtyLow   = 2
const   .cnVGA      = 0
const   .cnVGA2     = 1
const   .cnVGA4     = 2

'=====  Function #103  ====================================================
const   .fcCapClos  = 103

'****************************************
'*  SOCKET.FN3 Parameters Definition    *
'****************************************
'=====  Function #0  ======================================================
'const   .fcVersion  = 0

'=====  Function #1  ======================================================
const   .fcAccept   = 1

'=====  Function #2  ======================================================
const   .fcBind     = 2

const   .soINet     = 2

'=====  Function #3  ======================================================
const   .fcConnect  = 3

'const   .soINet     = 2

'=====  Function #4  ======================================================
const   .fcGPName   = 4

'=====  Function #5  ======================================================
const   .fcGSName   = 5

'=====  Function #6  ======================================================
const   .fcGSckOpt  = 6

const   .soKepAliv  = 2
const   .soSndBuff  = 8
const   .soRcvBuff  = 9
const   .soKATime   = 15
const   .soMaxRT    = 26
const   .soTIMEWAIT = 29
const   .soRTODef   = 30
const   .soRTOMin   = 31
const   .soRTOMax   = 32
const   .soEnable   = 1
const   .soDisable  = 0

'=====  Function #7  ======================================================
const   .fcHToNL    = 7

'=====  Function #8  ======================================================
const   .fcHToNS    = 8

'=====  Function #9  ======================================================
const   .fcINetAdr  = 9

'=====  Function #10  =====================================================
const   .fcListen   = 10

'=====  Function #11  =====================================================
const   .fcNToHL    = 11

'=====  Function #12  =====================================================
const   .fcNToHS    = 12

'=====  Function #13  =====================================================
const   .fcReadv    = 13

'=====  Function #14  =====================================================
const   .fcRecv     = 14

const   .soRvNrm    = 0
const   .soRvOOB    = 1
const   .soRvPeek   = 2
const   .soRvApend  = 0
const   .soRvWrite  = 1

'=====  Function #15  =====================================================
const   .fcRcvfrom  = 15

'const   .soRvNrm    = 0
'const   .soRvOOB    = 1
'const   .soRvPeek   = 2
'const   .soINet     = 2
'const   .soRvApend  = 0
'const   .soRvWrite  = 1

'=====  Function #16  =====================================================
const   .fcResvPrt  = 16

'=====  Function #17  =====================================================
const   .fcSelect   = 17

const   .soNoWait   = -1
const   .soNotTOut  = 0

'=====  Function #18  =====================================================
const   .fcFDZERO   = 18

'=====  Function #19  =====================================================
const   .fcFDSET    = 19

'=====  Function #20  =====================================================
const   .fcFDCLR    = 20

'=====  Function #21  =====================================================
const   .fcFDISSET  = 21

const   .soFDSet    = 0
const   .soFDNoSet  = 1

'=====  Function #22  =====================================================
const   .fcSend     = 22

const   .soSdNrm    = 0
const   .soSdOOB    = 1
const   .soSdDnRt   = 4

'=====  Function #23  =====================================================
const   .fcSendto   = 23

'const   .soSdNrm    = 0
'const   .soSdOOB    = 1
'const   .soSdDnRt   = 4
'const   .soINet     = 2

'=====  Function #24  =====================================================
const   .fcSSckOpt  = 24

'const   .soKepAliv  = 2
'const   .soSndBuff  = 8
'const   .soRcvBuff  = 9
'const   .soKATime   = 15
'const   .soMaxRT    = 26
'const   .soRTODef   = 30
'const   .soRTOMin   = 31
'const   .soRTOMax   = 32
'const   .soEnable   = 1
'const   .soDisable  = 0

'=====  Function #25  =====================================================
const   .fcShutdwn  = 25

const   .soSdRecv   = 0
const   .soSdSend   = 1
const   .soSdBoth   = 2

'=====  Function #26  =====================================================
const   .fcSocket   = 26

'const   .soINet     = 2
const   .soStream   = 1
const   .soDGRam    = 2
const   .soRaw      = 3
const   .soICMP     = 1
const   .soTCP      = 6
const   .soUDP      = 17

'=====  Function #27  =====================================================
const   .fcWritev   = 27

'=====  Function #28  =====================================================
const   .fcClose    = 28


'=====  Function #40  =====================================================
const   .fcTSetup   = 40

const   .soDvCOM1   = 0
const   .soDvCOM3   = 2
const   .soDvCOM4   = 3

const   .soLyPPP    = 0
const   .soLyEther  = 2

'=====  Function #41  =====================================================
const   .fcTCnnSys  = 41

'=====  Function #42  =====================================================
const   .fcTCnnUsr  = 42

'=====  Function #43  =====================================================
const   .fcTDiscnn  = 43

'=====  Function #44  =====================================================
const   .fcTSysGet  = 44

const   .soPmIPAdr  = 1
const   .soPmNtMsk  = 2
const   .soPmDGWay  = 3
const   .soPPPAuth  = 4
const   .soPPPUser  = 5
const   .soPPPPw    = 6
const   .soDHCPTout = 7
const   .soDvGet    = 100
const   .soLyGet    = 200
const   .soPPPAuthNo= 0
const   .soPPPPAP   = 1
const   .soPPPCHAP  = 2

'=====  Function #45  =====================================================
const   .fcTSysSet  = 45

'=====  Function #46  =====================================================
const   .fcTStsGet  = 46

const   .soStRmtCl  = &h0020
'const   .soNoWait   = -1
'const   .soNotTOut  = 0

'=====  Function #48  =====================================================
const   .fcTPrmGet  = 48

'const   .soPmIPAdr  = 1
'const   .soPmNtMsk  = 2
'const   .soPmDGWay  = 3

'****************************************
'*  FTP.FN3 Parameters Definition       *
'****************************************
'=====  Function #0  ======================================================
'const   .fcVersion  = 0

'=====  Function #1  ======================================================
const   .fcFTPOpnS  = 1

'=====  Function #2  ======================================================
const   .fcFTPOpnU  = 2

'=====  Function #3  ======================================================
const   .fcFTPClos  = 3

'=====  Function #4  ======================================================
const   .fcPWD      = 4

'=====  Function #5  ======================================================
const   .fcCWD      = 5

'=====  Function #6  ======================================================
const   .fcRETR     = 6

const   .ftCRLF     = 0
const   .ftCR       = 1
const   .ftLF       = 2
const   .ftNONE     = 3
const   .ftRcdSepa  = 0
const   .ftRcdData  = 1
const   .ftLspDel   = 10
const   .ftLspData  = 11
const   .ftNotDisp  = 0
const   .ftDisp     = 1

'=====  Function #7  ======================================================
const   .fcSTOR     = 7

const   .ftUpSTOR   = 0
const   .ftUpAPPE   = 1

'=====  Function #8  ======================================================
const   .fcFSysGet  = 8

const   .ftCRLFTyp  = 5
const   .ftCRLFMd   = 6
const   .ftUpMd     = 7
const   .ftDispMd   = 8
const   .ftDailMd   = 9
const   .ftPublic   = 0
const   .ftOffice   = 1
const   .ftSrvIP    = 1
const   .ftUsrNm    = 2
const   .ftPswd     = 3
const   .ftDefDir   = 4
const   .ftDialNo   = 10

'=====  Function #9  ======================================================
const   .fcFSysSet  = 9

'=====  Function #10  =====================================================
const   .fcRNFR     = 10

'=====  Function #11  =====================================================
const   .fcPORT     = 11

'=====  Function #12  =====================================================
const   .fcDELE     = 12

'=====  Function #13  =====================================================
const   .fcRETRC    = 13

'=====  Function #14  =====================================================
const   .fcSTORC    = 13

'****************************************
'*  SS.FN3 Parameters Definition        *
'****************************************
'=====  Function #0  ======================================================
'const   .fcVersion  = 0

'=====  Function #1  ======================================================
const   .fcParaIGet = 1

const   .ssDmnGet   = 1

'=====  Function #2  ======================================================
const   .fcParaSGet = 2

const   .ssFWVerGet = 1
const   .ssMACIDGet = 2
const   .ssFWVER.SZ = 4
const   .ssMACID.SZ = 6

'=====  Function #3  ======================================================
const   .fcParaISet = 3

const   .ssDmnSet   = 1

'=====  Function #4  ======================================================
const   .fcParaSSet = 4

const   .ssSIDSet   = 3
const   .ssSID.SZ   = 20

'=====  Function #7  ======================================================
const   .fcSyncInf  = 7

const   .ssNowInf   = 0
const   .ssWtSync   = -1

'=====  Function #11 ======================================================
const   .fcParaInit   = 11

'=====  Function #12 ======================================================
const   .fcParaStart  = 12

'=====  Function #13 ======================================================
const   .fcParaEnd    = 13

'=====  Function #14 ======================================================
const   .fcParaDIGet  = 14

const   .ssPsp         = 1
const   .ssWEP         = 2
const   .ssAuthen      = 3
const   .ssRadio       = 4
const   .ssScrty       = 10
const   .ssEAPType     = 11
const   .ssWPACphr     = 12
const   .ssEAPStart    = 20
const   .ssAuthPeriod  = 21
const   .ssHeldPeriod  = 22
const   .ssStartPeriod = 23
const   .ssMaxStart    = 24
const   .ssBSSType     = 30
const   .ssADChan      = 31
const   .ssBaseRate    = 106

const   .ssPsOFF      = 0
const   .ssPsON       = 1
const   .ssWepDis     = 0
const   .ssWepEn      = 1
const   .ssOpen       = 0
const   .ssShrdKey    = 1
const   .ss11b        = 0
const   .ss11g        = 1
const   .ssSecNone    = 0
const   .ss1xSupp     = 1
const   .ssWPA1x      = 2
const   .ssWPAPSK     = 3
const   .ssWPA21x     = 4
const   .ssWPA2PSK    = 5
const   .ssPEAP       = 0
const   .ssEAPTLS     = 1
const   .ssTKIP       = 0
const   .ssAES        = 1
const   .ssNWInfra    = 0
const   .ssNWAdhoc    = 1
const   .ssBsRate1M   = 1
const   .ssBsRate2M   = 2
const   .ssBsRate5M   = 3
const   .ssBsRate11M  = 4

'=====  Function #15 ======================================================
const   .fcParaDISet  = 15

'=====  Function #16 ======================================================
const   .fcParaDSGet  = 16

const   .ssFwVer      = 1
const   .ssMacID      = 2
const   .ssSSID       = 3
const   .ssClientID   = 6
const   .ssEAPID      = 10
const   .ssEAPPass    = 11
const   .ssRootCert   = 12
const   .ssClientCert = 13
const   .ssPSKKey     = 14
const   .ssAnonyID    = 15

'=====  Function #17 ======================================================
const   .fcParaDSSet  = 17

'=====  Function #20 ======================================================
const   .fcWepGet     = 20

const   .ssWEPNo      = -1
const   .ssWEP40      = 0
const   .ssWEP128     = 1

'=====  Function #21 ======================================================
const   .fcWepSet     = 21

'=====  Function #22 ======================================================
const   .fcWTGet      = 22

'=====  Function #23 ======================================================
const   .fcWTSet      = 23

'=====  Function #30 ======================================================
const   .fcInfoGet    = 30

const   .ssCurSpd     = 1
const   .ssCurCh      = 2
const   .ssCurSpdErr  = -1
const   .ssCurSpd1M   = 1
const   .ssCurSpd2M   = 2
const   .ssCurSpd5M   = 3
const   .ssCurSpd11M  = 4

'=====  Function #31 ======================================================
const   .fcSrvyStart  = 31

'=====  Function #32 ======================================================
const   .fcSrvyEnd    = 32

'=====  Function #33 ======================================================
const   .fcSrvyGet    = 33

const   .ssLQOff      = 0
const   .ssLQPoor     = 1
const   .ssLQFair     = 2
const   .ssLQGood     = 3
const   .ssLQExcellent= 4

'=====  Function #40 ======================================================
const   .fcSetPMK     = 40

'****************************************
'*  BT.FN3 Parameters Definition        *
'****************************************
'=====  Function #0  ======================================================
'const   .fcVersion  = 0

'=====  Function #1  ======================================================
const   .fcBTGetVal  = 1

const   .btTTOInq    = 1
const   .btNumInq    = 2
const   .btTOMst     = 3
const   .btTOSlv     = 4
const   .btSecMst    = 5
const   .btSecSlv    = 6
const   .btAutoPwOff = 7

'=====  Function #2  ======================================================
const   .fcBTSetVal = 2

'=====  Function #3  ======================================================
const   .fcBTGetStr = 3

const   .btLocNam   = 1
const   .btRmtAdr   = 2
const   .btKeyMst   = 3
const   .btKeySlv   = 4
const   .btSppSrv   = 54

'=====  Function #4  ======================================================
const   .fcBTSetStr = 4

'=====  Function #7  ======================================================
const   .fcBTSysVer = 7

'=====  Function #8  ======================================================
const   .fcBTDevInf = 8

const   .btFWVer    = 1
const   .btDevAdr   = 2
const   .btDevNam   = 3

'=====  Function #9  ======================================================
const   .fcBTRmtNam = 9

'=====  Function #10 ======================================================
const   .fcBTInqRes = 10

'=====  Function #11 ======================================================
const   .fcBTRmtInf = 11

'=====  Function #12 ======================================================
const   .fcBTGetStt = 12

'=====  Function #13 ======================================================
const   .fcBTGetLnk = 13

'=====  Function #14 ======================================================
const   .fcBTClrLnk = 14

'=====  Function #15 ======================================================
const   .fcBTHold   = 15

'=====  Function #20 ======================================================
const   .fcBTChkSnd = 20

'=====  Function #21 ======================================================
const   .fcBTGetSvc = 21

'****************************************
'*  FILE.FN3 Parameters Definition      *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcInfGetF   = 1
const   .fcInfGetD   = 2
const   .fcFNumGet   = 3
const   .fcRename    = 4
const   .fcCopy      = 5
const   .fcInfGetF40 = 11
const   .fcInfGetD40 = 12
const   .fcWRcNumGet = 13
const   .fcRcDelete  = 14
const   .fcFOptimize = 15

'=====  Set Values  ======================================================
const   .fiDriveA   = 1
const   .fiDriveB   = 2

const   .fiOPNoDsp  = 0
const   .fiOPGraph  = 256

'****************************************
'*  GRAPH.FN3 Parameters Definition     *
'****************************************
'=====  Function Numbers =================================================
'const   .fcVersion  = 0
'const   .fcDot      = 1
'const   .fcLine     = 2
'const   .fcDtLine   = 3
'const   .fcRectFil  = 4
'const   .fcRect     = 5
'const   .fcDotGet   = 6

const   .fcGetTextColor = 31
const   .fcSetTextColor = 32
const   .fcPictureBox   = 34


'=====  Set Values  =======================================================
const   .grWhite    = 0
const   .grBlack    = 1
const   .grReverse  = 2

'=====  Function .fcGetTextColor ==========================================
const   .grColor.White   = &hFFFFFF00
const   .grColor.Red     = &hFF000000
const   .grColor.Green   = &h00FF0000
const   .grColor.Blue    = &h0000FF00
const   .grColor.Black   = &h00000000
const   .grColor.Cyan    = &h00FFFF00
const   .grColor.Magenta = &hFF00FF00
const   .grColor.Yellow  = &hFFFF0000

'const   .pvEmph.Off  = &h00
'const   .pvEmph.On   = &h01

'const   .scInvert   = &h0001

'=====  Function .fcPictureBox ============================================
const    .grFit.Equal = 0
const    .grFit.Smart = 1
const    .grFit.Just  = 2
const    .grFit.Center= 3


'****************************************
'*  SEARCH.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  =================================================
'const   .fcVersion  = 0
const   .fcAndSrch  = 1
const   .fcOrSrch   = 2

'****************************************
'*  BSEARCH.FN3 Parameters Definition   *
'****************************************
'=====  Function Numbers  =================================================
'const   .fcVersion  = 0
const   .fcBSrcOp   = 1
const   .fcBSrcNOp  = 2

'****************************************
'*  STRING.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  =================================================
'const   .fcVersion  = 0
const   .fcStrLink  = 1
const   .fcAcToEc   = 2
const   .fcEcToAc   = 3

'****************************************
'*  STRING2.FN3 Parameters Definition   *
'****************************************
'=====  Function Numbers  ===============================================
'const   .fcVersion  = 0
const   .fcAcToPc   = 1
const   .fcPcToAc   = 2
const   .fcAcToBn   = 3
const   .fcBnToAc   = 4
const   .fcHAcToIt  = 5
const   .fcItToHAc  = 6
const   .fcHAcToBn  = 7
const   .fcBnToHAc  = 8

'=====  Set Values  =======================================================
const   .stZeroPrs  = 0
const   .stNotPrs   = 1

'****************************************
'*  CRC.FN3 Parameters Definition       *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcCrcPp    = 1
const   .fcCcitt    = 2
const   .fcCrc16    = 3

'****************************************
'*  XMODEM.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  =================================================
'const   .fcVersion  = 0
const   .fcXmdRecv  = 1
const   .fcXmdSend  = 2

'=====  Set Values  =======================================================
const   .xmCRLF     = 0
const   .xmCR       = 1
const   .xmNONE     = 2

const   .xmRcdSepa  = 0
const   .xmRcdData  = 10

const   .xmLspDel   = 0
const   .xmLspData  = 100

'****************************************
'*  YMODEM.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcYmdRecv   = 1
const   .fcYmdSend   = 2
const   .fcYmRecvEx  = 3
const   .fcYmSendEx  = 4
const   .fcYmRecvExC = 5
const   .fcYmSendExC = 6

'=====  Set Values  ======================================================
const   .ymCRLF      = 0
const   .ymCR        = 1
const   .ymNONE      = 2
const   .ymLF        = 3

const   .ymRcdSepa   = 0
const   .ymRcdData   = 10

const   .ymLspDel    = 0
const   .ymLspData   = 100

const   .ymCRLFEx    = 0
const   .ymLFEx      = 1
const   .ymCREx      = 2
const   .ymNONEEx    = 3

const   .ymRcdSepaEx = 0
const   .ymRcdDataEx = 1

const   .ymLspDelEx  = 0
const   .ymLspDataEX = 10

const   .ymNotDisp   = 0
const   .ymDisp      = 1

const   .ymLast      = 0
const   .ymNext      = 1
const   .ymSingle    = 2

const   .ymNotID     = 0
const   .ymBhtID     = 1

'****************************************
'*  SCREEN.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcScrnGet   = 1
const   .fcScrnSet   = 2

'****************************************
'*  PROGRAM.FN3 Parameters Definition   *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcPrgSGet   = 1

'=====  Function .fcPrgSGet ==============================================
const   .prVersion   = 1
const   .prComment   = 2
const   .prFileDesc  = 3
const   .prCompany   = 4
const   .prTrademark = 5
const   .prProduct   = 6
const   .prCopyright = 7
const   .prBuild     = 8

'****************************************
'*  CAMERA.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcCapture   = 1
const   .fcSetKey    = 10
const   .fcSetPart   = 11
const   .fcSetFinder = 12

'=====  Function .fcCapture ==============================================
const   .caQQVGA     = 0
const   .caQVGA      = 1
const   .caVGA       = 2
const   .caLow       = 0
const   .caStandard  = 1
const   .caHigh      = 2

'=====  Function .fcSetKey ===============================================
const   .caKeyM1     = 1
const   .caKeyM2     = 2
const   .caKeyM3     = 3
const   .caKeyM4     = 4
const   .caKeyM5     = 5

'=====  Function .fcSetPart ==============================================
const   .caPtFinder   = 0
const   .caPtBg       = 1
const   .caPtTitle    = 2
const   .caPtStatus   = 4
const   .caPtGuide    = 8

