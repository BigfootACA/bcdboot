/*
 *
 * Copyright (C) 2021 BigfootACA <bigfoot@classfun.cn>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include"keyval.h"
keyval*BcdBootMgr[]={
	&KV("DisplayOrder"               ,"24000001"),
	&KV("BootSequence"               ,"24000002"),
	&KV("DefaultObject"              ,"23000003"),
	&KV("Timeout"                    ,"25000004"),
	&KV("AttemptResume"              ,"26000005"),
	&KV("ResumeObject"               ,"23000006"),
	&KV("ToolsDisplayOrder"          ,"24000010"),
	&KV("DisplayBootMenu"            ,"26000020"),
	&KV("NoErrorDisplay"             ,"26000021"),
	&KV("BcdDevice"                  ,"21000022"),
	&KV("BcdFilePath"                ,"22000023"),
	&KV("ProcessCustomActionsFirst"  ,"26000028"),
	&KV("CustomActionsList"          ,"27000030"),
	&KV("PersistBootSequence"        ,"26000031"),
	0
};
keyval*BcdDeviceObject[]={
	&KV("RamdiskImageOffset"            ,"35000001"),
	&KV("TftpClientPort"                ,"35000002"),
	&KV("SdiDevice"                     ,"31000003"),
	&KV("SdiPath"                       ,"32000004"),
	&KV("RamdiskImageLength"            ,"35000005"),
	&KV("RamdiskExportAsCd"             ,"36000006"),
	&KV("RamdiskTftpBlockSize"          ,"36000007"),
	&KV("RamdiskTftpWindowSize"         ,"36000008"),
	&KV("RamdiskMulticastEnabled"       ,"36000009"),
	&KV("RamdiskMulticastTftpFallback"  ,"3600000A"),
	&KV("RamdiskTftpVarWindow"          ,"3600000B"),
	0
};
keyval*BcdLibrary_Debugger[]={ 
	&KV("Serial" ,"0"),
	&KV("1394"   ,"1"),
	&KV("Usb"    ,"2"),
	&KV("Net"    ,"3"),
	0
};
keyval*BcdLibrary_SafeBoot[]={ 
	&KV("Minimal"  ,"0"),
	&KV("Network"  ,"1"),
	&KV("DsRepair" ,"2"),
	0
};
keyval*BcdLibrary[]={ 
	&KV("ApplicationDevice"                ,"11000001"),
	&KV("ApplicationPath"                  ,"12000002"),
	&KV("Description"                      ,"12000004"),
	&KV("PreferredLocale"                  ,"12000005"),
	&KV("InheritedObjects"                 ,"14000006"),
	&KV("TruncatePhysicalMemory"           ,"15000007"),
	&KV("RecoverySequence"                 ,"14000008"),
	&KV("AutoRecoveryEnabled"              ,"16000009"),
	&KV("BadMemoryList"                    ,"1700000a"),
	&KV("AllowBadMemoryAccess"             ,"1600000b"),
	&KV("FirstMegabytePolicy"              ,"1500000c"),
	&KV("RelocatePhysicalMemory"           ,"1500000D"),
	&KV("AvoidLowPhysicalMemory"           ,"1500000E"),
	&KV("DebuggerEnabled"                  ,"16000010"),
	&KV("DebuggerType"                     ,"15000011"),
	&KV("SerialDebuggerPortAddress"        ,"15000012"),
	&KV("SerialDebuggerPort"               ,"15000013"),
	&KV("SerialDebuggerBaudRate"           ,"15000014"),
	&KV("1394DebuggerChannel"              ,"15000015"),
	&KV("UsbDebuggerTargetName"            ,"12000016"),
	&KV("DebuggerIgnoreUsermodeExceptions" ,"16000017"),
	&KV("DebuggerStartPolicy"              ,"15000018"),
	&KV("DebuggerBusParameters"            ,"12000019"),
	&KV("DebuggerNetHostIP"                ,"1500001A"),
	&KV("DebuggerNetPort"                  ,"1500001B"),
	&KV("DebuggerNetDhcp"                  ,"1600001C"),
	&KV("DebuggerNetKey"                   ,"1200001D"),
	&KV("EmsEnabled"                       ,"16000020"),
	&KV("EmsPort"                          ,"15000022"),
	&KV("EmsBaudRate"                      ,"15000023"),
	&KV("LoadOptionsString"                ,"12000030"),
	&KV("DisplayAdvancedOptions"           ,"16000040"),
	&KV("DisplayOptionsEdit"               ,"16000041"),
	&KV("BsdLogDevice"                     ,"11000043"),
	&KV("BsdLogPath"                       ,"12000044"),
	&KV("GraphicsModeDisabled"             ,"16000046"),
	&KV("ConfigAccessPolicy"               ,"15000047"),
	&KV("DisableIntegrityChecks"           ,"16000048"),
	&KV("AllowPrereleaseSignatures"        ,"16000049"),
	&KV("FontPath"                         ,"1200004A"),
	&KV("SiPolicy"                         ,"1500004B"),
	&KV("FveBandId"                        ,"1500004C"),
	&KV("ConsoleExtendedInput"             ,"16000050"),
	&KV("GraphicsResolution"               ,"15000052"),
	&KV("RestartOnFailure"                 ,"16000053"),
	&KV("GraphicsForceHighestMode"         ,"16000054"),
	&KV("IsolatedExecutionContext"         ,"16000060"),
	&KV("BootUxDisable"                    ,"1600006C"),
	&KV("BootShutdownDisabled"             ,"16000074"),
	&KV("AllowedInMemorySettings"          ,"17000077"),
	&KV("ForceFipsCrypto"                  ,"16000079"),
	0
};
keyval*BcdMemDiag[]={ 
	&KV("PassCount"    ,"25000001"),
	&KV("FailureCount" ,"25000003"),
	0
};
keyval*BcdOSLoader_NxPolicy[]={
	&KV("OptIn"     ,"0"),
	&KV("OptOut"    ,"1"),
	&KV("AlwaysOff" ,"2"),
	&KV("AlwaysOn"  ,"3"),
	0
};
keyval*BcdOSLoader_PAEPolicy[]={
	&KV("Default"      ,"0"),
	&KV("ForceEnable"  ,"1"),
	&KV("ForceDisable" ,"2"),
	0
};
keyval*BcdOSLoader[]={ 
	&KV("OSDevice"                      ,"21000001"),
	&KV("SystemRoot"                    ,"22000002"),
	&KV("AssociatedResumeObject"        ,"23000003"),
	&KV("DetectKernelAndHal"            ,"26000010"),
	&KV("KernelPath"                    ,"22000011"),
	&KV("HalPath"                       ,"22000012"),
	&KV("DbgTransportPath"              ,"22000013"),
	&KV("NxPolicy"                      ,"25000020"),
	&KV("PAEPolicy"                     ,"25000021"),
	&KV("WinPEMode"                     ,"26000022"),
	&KV("DisableCrashAutoReboot"        ,"26000024"),
	&KV("UseLastGoodSettings"           ,"26000025"),
	&KV("AllowPrereleaseSignatures"     ,"26000027"),
	&KV("NoLowMemory"                   ,"26000030"),
	&KV("RemoveMemory"                  ,"25000031"),
	&KV("IncreaseUserVa"                ,"25000032"),
	&KV("UseVgaDriver"                  ,"26000040"),
	&KV("DisableBootDisplay"            ,"26000041"),
	&KV("DisableVesaBios"               ,"26000042"),
	&KV("DisableVgaMode"                ,"26000043"),
	&KV("ClusterModeAddressing"         ,"25000050"),
	&KV("UsePhysicalDestination"        ,"26000051"),
	&KV("RestrictApicCluster"           ,"25000052"),
	&KV("UseLegacyApicMode"             ,"26000054"),
	&KV("X2ApicPolicy"                  ,"25000055"),
	&KV("UseBootProcessorOnly"          ,"26000060"),
	&KV("NumberOfProcessors"            ,"25000061"),
	&KV("ForceMaximumProcessors"        ,"26000062"),
	&KV("ProcessorConfigurationFlags"   ,"25000063"),
	&KV("MaximizeGroupsCreated"         ,"26000064"),
	&KV("ForceGroupAwareness"           ,"26000065"),
	&KV("GroupSize"                     ,"25000066"),
	&KV("UseFirmwarePciSettings"        ,"26000070"),
	&KV("MsiPolicy"                     ,"25000071"),
	&KV("SafeBoot"                      ,"25000080"),
	&KV("SafeBootAlternateShell"        ,"26000081"),
	&KV("BootLogInitialization"         ,"26000090"),
	&KV("VerboseObjectLoadMode"         ,"26000091"),
	&KV("KernelDebuggerEnabled"         ,"260000a0"),
	&KV("DebuggerHalBreakpoint"         ,"260000a1"),
	&KV("UsePlatformClock"              ,"260000A2"),
	&KV("ForceLegacyPlatform"           ,"260000A3"),
	&KV("TscSyncPolicy"                 ,"250000A6"),
	&KV("EmsEnabled"                    ,"260000b0"),
	&KV("DriverLoadFailurePolicy"       ,"250000c1"),
	&KV("BootMenuPolicy"                ,"250000C2"),
	&KV("AdvancedOptionsOneTime"        ,"260000C3"),
	&KV("BootStatusPolicy"              ,"250000E0"),
	&KV("DisableElamDrivers"            ,"260000E1"),
	&KV("HypervisorLaunchType"          ,"250000F0"),
	&KV("HypervisorDebuggerEnabled"     ,"260000F2"),
	&KV("HypervisorDebuggerType"        ,"250000F3"),
	&KV("HypervisorDebuggerPortNumber"  ,"250000F4"),
	&KV("HypervisorDebuggerBaudrate"    ,"250000F5"),
	&KV("HypervisorDebugger1394Channel" ,"250000F6"),
	&KV("BootUxPolicy"                  ,"250000F7"),
	&KV("HypervisorDebuggerBusParams"   ,"220000F9"),
	&KV("HypervisorNumProc"             ,"250000FA"),
	&KV("HypervisorRootProcPerNode"     ,"250000FB"),
	&KV("HypervisorUseLargeVTlb"        ,"260000FC"),
	&KV("HypervisorDebuggerNetHostIp"   ,"250000FD"),
	&KV("HypervisorDebuggerNetHostPort" ,"250000FE"),
	&KV("TpmBootEntropyPolicy"          ,"25000100"),
	&KV("HypervisorDebuggerNetKey"      ,"22000110"),
	&KV("HypervisorDebuggerNetDhcp"     ,"26000114"),
	&KV("HypervisorIommuPolicy"         ,"25000115"),
	&KV("XSaveDisable"                  ,"2500012B"),
	0
};
keyval*BcdResume[]={
	&KV("Reserved1"          ,"21000001"),
	&KV("Reserved2"          ,"22000002"),
	&KV("UseCustomSettings"  ,"26000003"),
	&KV("AssociatedOsDevice" ,"21000005"),
	&KV("DebugOptionEnabled" ,"26000006"),
	&KV("BootMenuPolicy"     ,"25000008"),
	0
};
keyval*BcdApplications[]={
	&KV("BOOTMGR"   ,"{9dea862c-5cdd-4e70-acc1-f32b344d4795}"),
	&KV("FWBOOTMGR" ,"{a5a30fa2-3d06-4e9f-b5f4-a01df9d1fcba}"),
	&KV("MEMDIAG"   ,"{b2721d73-1db4-4c62-bf78-c548a880142d}"),
	&KV("RESUME"    ,"{147aa509-0358-4473-b83b-d950dda00615}"),
	&KV("NTLDR"     ,"{466f5a88-0af2-4f76-9038-095b170dc21c}"),
	&KV("CURRENT"   ,"{fa926493-6f1c-4193-a414-58f0b2456d1e}"),
	&KV("DEFAULT"   ,"{}"),
	0
};
keyval*BcdInheritable[]={
	&KV("BADMEMORY",            "{5189b25c-5558-4bf2-bca4-289b11bd29e2}"),
	&KV("BOOTLOADERSETTINGS",   "{6efb52bf-1766-41db-a6b3-0ee5eff72bd7}"),
	&KV("DBGSETTINGS",          "{4636856e-540f-4170-a130-a84776f4c654}"),
	&KV("EMSSETTINGS",          "{0ce4991b-e6b3-4b16-b23c-5e0d9250e5d9}"),
	&KV("GLOBALSETTINGS",       "{7ea2e1ac-2e61-4728-aaa3-896d9d0a9f0e}"),
	&KV("RESUMELOADERSETTINGS", "{1afa9c49-16ab-4a5c-901b-212802da9460}"),
	0
};
keyval*DeviceType[]={
	&KV("DiskDevice" ,"0"),
	&KV("LegacyPartitionDevice" ,"2"),
	&KV("SerialDevice" ,"3"),
	&KV("UdpDevice" ,"4"),
	&KV("BootDevice" ,"5"),
	&KV("PartitionDevice" ,"6"),
	&KV("LocateDevice" ,"8"),
	0
};
keyval*LocalDeviceType[]={
	&KV("LocalDevice"       ,"0"),
	&KV("FloppyDevice"      ,"1"),
	&KV("CdRomDevice"       ,"2"),
	&KV("RamDiskDevice"     ,"3"),
	&KV("FileDevice"        ,"5"),
	&KV("VirtualDiskDevice" ,"6"),
	0
};