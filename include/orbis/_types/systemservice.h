#pragma once

// struct by idc
typedef struct _LaunchAppParam
{
	uint32_t size;
	int32_t user_id;
	int32_t app_attr;
	int32_t enable_crash_report;
	uint64_t check_flag;
} LaunchAppParam