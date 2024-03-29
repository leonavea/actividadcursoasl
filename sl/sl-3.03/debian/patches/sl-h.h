Description: <short summary of the patch>
 TODO: Put a short summary on the line above and replace this paragraph
 with a longer explanation of this change. Complete the meta-information
 with other relevant fields (see below for details). To make it easier, the
 information below has been extracted from the changelog. Adjust it or drop
 it.
 .
 sl (3.03-17) unstable; urgency=low
 .
   * Upgrade to policy 3.9.3 and debhelper to 9.
   * Remove deprecated dpatch and upgrade to packaging format "3.0 quilt"
     (closes: Bug#664331). Thanks Aalto.
   * Hide cursor (closes: Bug#655148). Thanks Fuchs.
   * Revert to supporting Ctrl-Z (closes: Bug#598992).
Author: Hiroyuki Yamamoto <yama1066@gmail.com>
Bug-Debian: http://bugs.debian.org/598992
Bug-Debian: http://bugs.debian.org/655148
Bug-Debian: http://bugs.debian.org/664331

---
The information above should follow the Patch Tagging Guidelines, please
checkout http://dep.debian.net/deps/dep3/ to learn about the format. Here
are templates for supplementary fields that you might want to add:

Origin: <vendor|upstream|other>, <url of original patch>
Bug: <url in upstream bugtracker>
Bug-Debian: http://bugs.debian.org/<bugnumber>
Bug-Ubuntu: https://launchpad.net/bugs/<bugnumber>
Forwarded: <no|not-needed|url proving that it has been forwarded>
Reviewed-By: <name and email of someone who approved the patch>
Last-Update: <YYYY-MM-DD>

--- sl-3.03.orig/sl-h.h
+++ sl-3.03/sl-h.h
@@ -52,7 +52,7 @@
 #define COAL03 "    _________________        "
 #define COAL04 "   _|                \\_____A "
 #define COAL05 " =|                        | "
-#define COAL06 " -|                        | "
+#define COAL06 " -|      LEOPOLDO NAVEA    | "
 #define COAL07 "__|________________________|_"
 #define COAL08 "|__________________________|_"
 #define COAL09 "   |_D__D__D_|  |_D__D__D_|  "
