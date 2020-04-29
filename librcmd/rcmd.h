#ifndef LIBRCMD_H_INCLUDED
#define LIBRCMD_H_INCLUDED
/*
 *  Windows <rcmd.3> interface
 */

#include <sys/cdefs.h>

__BEGIN_DECLS

extern int __check_rhosts_file;
extern const char *     __rcmd_errstr;

extern int              rcmd(const char **ahost, int rport, const char *locuser, const char *remuser, const char *cmd, int *fd2p);
extern int              rcmd_af(const char **ahost, int rport, const char *locuser, const char *remuser, const char *cmd, int *fd2p, int af);

extern int              orcmd(const char **ahost, u_int rport, const char *locuser, const char *remuser, const char *cmd, int *fd2p);
extern int              orcmd_af(const char **ahost, u_int rport, const char *locuser, const char *remuser, const char *cmd, int *fd2p, int af);

extern int              rresvport(int *alport);
extern int              rresvport_af(int *alport, int family);

extern int		iruserok(unsigned raddr, int superuser, const char *ruser, const char *luser);
extern int		iruserok_sa(const void *raddr, int rlen, int superuser, const char *ruser, const char *luser);

__END_DECLS

#endif /*LIBRCMD_H_INCLUDED*/

