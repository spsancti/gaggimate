// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.2
// LVGL version: 8.3.11
// Project name: GaggiMate

#ifndef UI_GRINDSCREEN_H
#define UI_GRINDSCREEN_H

#ifdef __cplusplus
extern "C" {
#endif


// SCREEN: ui_GrindScreen
extern void ui_GrindScreen_screen_init(void);
extern void ui_GrindScreen_screen_destroy(void);
extern void ui_event_GrindScreen( lv_event_t * e);
extern lv_obj_t *ui_GrindScreen;
extern lv_obj_t *ui_GrindScreen_tempTarget;
extern lv_obj_t *ui_GrindScreen_tempGauge;
extern lv_obj_t *ui_GrindScreen_ImgButton2;
extern lv_obj_t *ui_GrindScreen_contentPanel7;
extern lv_obj_t *ui_GrindScreen_mainLabel7;
extern void ui_event_GrindScreen_startButton( lv_event_t * e);
extern lv_obj_t *ui_GrindScreen_startButton;
extern lv_obj_t *ui_GrindScreen_targetContainer;
extern lv_obj_t *ui_GrindScreen_targetDuration;
extern void ui_event_GrindScreen_upDurationButton( lv_event_t * e);
extern lv_obj_t *ui_GrindScreen_upDurationButton;
extern void ui_event_GrindScreen_downDurationButton( lv_event_t * e);
extern lv_obj_t *ui_GrindScreen_downDurationButton;
extern lv_obj_t *ui_GrindScreen_targetSymbol;
extern lv_obj_t *ui_GrindScreen_tempText;
extern lv_obj_t *ui_GrindScreen_modeSwitch;
extern void ui_event_GrindScreen_timedButton( lv_event_t * e);
extern lv_obj_t *ui_GrindScreen_timedButton;
extern void ui_event_GrindScreen_volumetricButton( lv_event_t * e);
extern lv_obj_t *ui_GrindScreen_volumetricButton;
// CUSTOM VARIABLES

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif

