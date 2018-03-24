#include "XignCode.hpp"

namespace XignCode
{
	BOOL XIGNAPI _XignCode_initialize(const wchar_t* license_key, const wchar_t* xigncode_directory, int unknown)
	{
		return TRUE;
	}
	
	BOOL XIGNAPI _XignCode_uninitialize()
	{
		return TRUE;
	}

	BOOL XIGNAPI _XignCode_start_service()
	{
		return TRUE;
	}

	BOOL XIGNAPI _XignCode_stop_service()
	{
		return TRUE; 
	}
	
	BOOL XIGNAPI _XignCode_make_response(unsigned char* request, unsigned int size, _XignCode_heartbeat_callback_t response_callback, void* unknown)
	{
		return TRUE;
	}

	BOOL XIGNAPI _XignCode_set_error_callback(_XignCode_error_callback_t error_callback, void* unknown)
	{
		return TRUE;
	}
	
	BOOL XIGNAPI _XignCode_set_option(unsigned int option, void** param)
	{
		return TRUE;
	}

	unsigned int XIGNAPI _XignCode_function_dispatch(void** function_ptr, FUNCTION_DISPATCH_TYPE function_type)
	{
		switch (function_type)
		{
		case FDT_INITIALIZE:
			*function_ptr = _XignCode_initialize;
			break;
		
		case FDT_UNINITIALIZE:
			*function_ptr = _XignCode_uninitialize;
			break;

		case FDT_START_SERVICE:
			*function_ptr = _XignCode_start_service;
			break;

		case FDT_STOP_SERVICE:
			*function_ptr = _XignCode_stop_service;
			break;

		case FDT_MAKE_RESPONSE:
			*function_ptr = _XignCode_make_response;
			break;
			
		case FDT_SET_ERROR_CALLBACK:
			*function_ptr = _XignCode_set_error_callback;
			break;
		
		case FDT_SET_OPTION:
			*function_ptr = _XignCode_set_option;
			break;

		default:
			break;
		}
		
		return 0;
	}
}