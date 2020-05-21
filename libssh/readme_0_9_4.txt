
    Source: libssh 0.9.4, changes

	src\packet.c

		+ #if defined(__WATCOMC__)
		+ memset(&session->in_packet, 0, sizeof(session->in_packet));
		+ #else
		  session->in_packet = (struct packet_struct) {
		      .type = 0,
		  };
		+ #endif

                            ---------
