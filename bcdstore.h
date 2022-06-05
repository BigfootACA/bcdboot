/*
 *
 * Copyright (C) 2021 BigfootACA <bigfoot@classfun.cn>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include"keyval.h"
#include<uuid/uuid.h>
extern keyval*BcdBootMgr[];
extern keyval*BcdDeviceObject[];
extern keyval*BcdLibrary[];
extern keyval*BcdLibrary_Debugger[];
extern keyval*BcdLibrary_SafeBoot[];
extern keyval*BcdMemDiag[];
extern keyval*BcdOSLoader[];
extern keyval*BcdOSLoader_NxPolicy[];
extern keyval*BcdOSLoader_PAEPolicy[];
extern keyval*BcdResume[];
extern keyval*BcdApplications[];
extern keyval*BcdInheritable[];
extern keyval*DeviceType[];
extern keyval*LocalDeviceType[];
typedef struct{
	union{
		unsigned long PackedValue;
		struct{
			unsigned long SubType:24;
			unsigned long Format:4;
			unsigned long Class:4;
		};
	};
}BcdElementType;
typedef struct guid{
	int32_t u1;
	int16_t u2;
	int16_t u3;
	int64_t u4;
}guid_t;
typedef struct device{
	int8_t dev_type;
	int64_t flags;
	int64_t size;
	int64_t pad1;
	guid_t part_guid;
	int8_t local_dev_type;
	guid_t disk_guid;
	int64_t pad2;
	int64_t pad3;
}device_t;