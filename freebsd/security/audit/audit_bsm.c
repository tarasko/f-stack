
		kau_write(rec, tok);
	case AUE_SENDFILE:
		if (ar->ar_arg_cmd == F_GETLK || ar->ar_arg_cmd == F_SETLK ||
		    ar->ar_arg_cmd == F_SETLKW) {
			FD_VNODE1_TOKENS;
		}
		if (ARG_IS_VALID(kar, ARG_TEXT)) {
			tok = au_to_text(ar->ar_arg_text);
		if (ARG_IS_VALID(kar, ARG_SVIPC_ADDR)) {
		if (ARG_IS_VALID(kar, ARG_TEXT)) {
			tok = au_to_text(ar->ar_arg_text);
			kau_write(rec, tok);
		}