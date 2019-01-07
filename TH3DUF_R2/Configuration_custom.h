#ifndef CONFIGURATION_CUSTOM_H
#define CONFIGURATION_CUSTOM_H

#define ENDER_ANDY
#if ENABLED(ENDER_ANDY)
  #define ENDER3
  #define USER_PRINTER_NAME "Andy"

  /* Enabled, but not used, only when _K is set.
   * http://marlinfw.org/docs/features/lin_advance.html
   */
  #define LINEAR_ADVANCE
  #define LINEAR_ADVANCE_K 0

  #define SHOW_BOOTSCREEN
  #define SHOW_CUSTOM_BOOTSCREEN
  #define DICKBUTT_BOOT

  /* Not yet tested */
  //#define NEW_JERK_CONTROL
  //#define NEW_ACCELERATION_CONTROL

  /* Manual Mesh Leveling */
  #define MANUAL_MESH_LEVELING
  /* G28 disables bed leveling. Follow with M420 S1 to turn leveling on (in cura, after G28),
   * or use RESTORE_LEVELING_AFTER_G28 to automatically keep leveling on after G28.
   * http://marlinfw.org/docs/gcode/G029-mbl.html
   */
  #if ENABLED(MANUAL_MESH_LEVELING)
    #define RESTORE_LEVELING_AFTER_G28
  #endif
#endif

#endif // CONFIGURATION_CUSTOM_H

