#ifdef COOL
extern int32_t cool_kal_opened;
static const char* const cnxt_status[] = {
			"CNXT_STATUS_OK",
			"CNXT_STATUS_ALREADY_INIT",
			"CNXT_STATUS_NOT_INIT",
			"CNXT_STATUS_INTERNAL_ERROR",
			"CNXT_STATUS_BAD_HANDLE",
			"CNXT_STATUS_BAD_PARAMETER",
			"CNXT_STATUS_BAD_LENGTH",
			"CNXT_STATUS_BAD_UNIT",
			"CNXT_STATUS_RESOURCE_ERROR",
			"CNXT_STATUS_CLOSED_HANDLE",
			"CNXT_STATUS_TIMEOUT",
			"CNXT_STATUS_NOT_ATTACHED",
			"CNXT_STATUS_NOT_SUPPORTED",
			"CNXT_STATUS_REOPENED_HANDLE",
			"CNXT_STATUS_INVALID",
			"CNXT_STATUS_DESTROYED",
			"CNXT_STATUS_DISCONNECTED",
			"CNXT_STATUS_BUSY",
			"CNXT_STATUS_IN_USE",
			"CNXT_STATUS_CANCELLED",
			"CNXT_STATUS_UNDEFINED",
			"CNXT_STATUS_UNKNOWN",
			"CNXT_STATUS_NOT_FOUND",
			"CNXT_STATUS_NOT_AVAILABLE",
			"CNXT_STATUS_NOT_COMPATIBLE",
			"CNXT_STATUS_NOT_IMPLEMENTED",
			"CNXT_STATUS_EMPTY",
			"CNXT_STATUS_FULL",
			"CNXT_STATUS_FAILURE",
			"CNXT_STATUS_ALREADY_ATTACHED",
			"CNXT_STATUS_ALREADY_DONE",
			"CNXT_STATUS_ASLEEP",
			"CNXT_STATUS_BAD_ATTACHMENT",
			"CNXT_STATUS_BAD_COMMAND",
			"CNXT_STATUS_BAD_GPIO",
			"CNXT_STATUS_BAD_INDEX",
			"CNXT_STATUS_BAD_MODE",
			"CNXT_STATUS_BAD_PID",
			"CNXT_STATUS_BAD_PLANE",
			"CNXT_STATUS_BAD_PTR",
			"CNXT_STATUS_BAD_RECT",
			"CNXT_STATUS_BAD_RGN_HANDLE",
			"CNXT_STATUS_BAD_SIZE",
			"CNXT_STATUS_INT_HANDLED",
			"CNXT_STATUS_INT_NOT_HANDLED",
			"CNXT_STATUS_NOT_SET",
			"CNXT_STATUS_NOT_HOOKED",
			"CNXT_STATUS_CC_NOT_ENABLED",
			"CNXT_STATUS_CLOSED_RGN",
			"CNXT_STATUS_COMPLETE",
			"CNXT_STATUS_DEMOD_ERROR",
			"CNXT_STATUS_INVALID_NODE",
			"CNXT_STATUS_DUPLICATE_NODE",
			"CNXT_STATUS_HARDWARE_NOT_FOUND",
			"CNXT_STATUS_HDCP_AUTH_FAILED",
			"CNXT_STATUS_HDCP_BAD_BKSV",
			"CNXT_STATUS_ILLEGAL_OPERATION",
			"CNXT_STATUS_INCOMPATIBLE_FORMATS",
			"CNXT_STATUS_INVALID_DEVICE",
			"CNXT_STATUS_INVALID_EDGE",
			"CNXT_STATUS_INVALID_NUMBER",
			"CNXT_STATUS_INVALID_STATE",
			"CNXT_STATUS_INVALID_TYPE",
			"CNXT_STATUS_NO_BUFFER",
			"CNXT_STATUS_NO_DESTINATION_BUF",
			"CNXT_STATUS_NO_OSD",
			"CNXT_STATUS_NO_PALETTE",
			"CNXT_STATUS_NO_ACK",
			"CNXT_STATUS_RECEIVER_HDMI_INCAPABLE",
			"CNXT_STATUS_RECEIVER_NOT_ATTACHED",
			"CNXT_STATUS_ADJUSTED",
			"CNXT_STATUS_CLIPPED",
			"CNXT_STATUS_CLIPRECT_ADJUSTED",
			"CNXT_STATUS_NOT_ALIGNED",
			"CNXT_STATUS_FIXUP_OK",
			"CNXT_STATUS_FIXUP_OPTION_ERROR",
			"CNXT_STATUS_FIXUP_ZERO_RECT",
			"CNXT_STATUS_UNABLE_TO_FIXUP_AND_PRESERVE",
			"CNXT_STATUS_UNABLE_TO_FIXUP_X",
			"CNXT_STATUS_UNABLE_TO_FIXUP_Y",
			"CNXT_STATUS_OUT_OF_BOUNDS",
			"CNXT_STATUS_OUTSIDE_CLIP_RECT",
			"CNXT_STATUS_RECT_CLIPPED",
			"CNXT_STATUS_RECT_ENCLOSED",
			"CNXT_STATUS_RECT_FIXED_UP",
			"CNXT_STATUS_RECT_INCLUDES",
			"CNXT_STATUS_RECT_NO_OVERLAP",
			"CNXT_STATUS_RECT_OVERLAP",
			"CNXT_STATUS_RECT_ZERO_AREA",
			"CNXT_STATUS_SERVICE_LIST_NOT_READY",
			"CNXT_STATUS_SERVICE_LIST_READY",
			"CNXT_STATUS_STOPPED",
			"CNXT_STATUS_SUSPENDED",
			"CNXT_STATUS_TERMINATED",
			"CNXT_STATUS_TOO_MUCH_DATA",
			"CNXT_STATUS_WIPE_NONE",
			"CNXT_STATUS_NOT_STOPPED",
			"CNXT_STATUS_INT_NOT_COMPLETE",
			"CNXT_STATUS_NOT_ALLOWED",
			"CNXT_STATUS_DUPLICATE_PID",
			"CNXT_STATUS_MAX_FILTERS_ATTACHED",
			"CNXT_STATUS_HW_NOT_READY",
			"CNXT_STATUS_OUTPUT_BUF_FULL",
			"CNXT_STATUS_REJECTED",
			"CNXT_STATUS_INVALID_PID",
			"CNXT_STATUS_EOF",
			"CNXT_STATUS_BOF",
			"CNXT_STATUS_MISSING_DATA"
};

#define check_error(label, ret) 					\
{ 									\
        if(ret != 0) { 							\
		if (ret > 107) { 					\
		        cs_log("[%s:%d] %s: API ERROR %d (UNKNOWN)",	\
			__FUNCTION__, __LINE__ ,			\
			label, ret);					\
		} else {						\
		        cs_log("[%s:%d] %s: API ERROR %d (%s)",		\
			__FUNCTION__, __LINE__ ,			\
			label, ret, cnxt_status[ret]);			\
		}							\
	}								\
}

#endif
