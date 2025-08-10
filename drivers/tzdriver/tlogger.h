#ifndef _TLOGGER_H_
#define _TLOGGER_H_

#ifdef CONFIG_TEELOG
void tz_log_write(void);
int tlogger_store_lastmsg(void);
#else
static inline void tz_log_write(void) {}
static inline int tlogger_store_lastmsg(void) { return 0; }
#endif

#endif
