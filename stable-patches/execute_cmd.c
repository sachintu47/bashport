diff --git i/execute_cmd.c w/execute_cmd.c
index 070f511..96bc21a 100644
--- i/execute_cmd.c
+++ w/execute_cmd.c
@@ -106,6 +106,11 @@ extern int errno;
 #  include <mbstr.h>		/* mbschr */
 #endif
 
+#ifdef __MVS__
+/* z/OS has a bug with AUTOCVT=ALL */
+#undef HAVE_HASH_BANG_EXEC
+#endif
+
 extern int command_string_index;
 extern char *the_printed_command;
 extern time_t shell_start_time;
