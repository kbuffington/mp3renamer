//==============================================================================
//
// Title:		globals.h
// Purpose:		A short description of the interface.
//
// Created on:	1/28/2016 at 6:22:37 PM by Kevin.
// Copyright:	Subversive Software. All Rights Reserved.
//
//==============================================================================

#ifndef __globals_H__
#define __globals_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include "cvidef.h"

//==============================================================================
// Constants

#define kNumPanelControls		2
#define kNumTab1Controls		14
#define kNumTab2Controls		4
#define kNumTab3Controls		2
		
//==============================================================================
// Types

//==============================================================================
// External variables

extern const Point tagCell;	// combobox cell of the genre table

extern int panelHandle;
extern int tab1Handle;
extern int tab2Handle;
extern int tab3Handle;
extern int numFiles;
extern int firstFile;

#define false	FALSE
#define true	TRUE

//==============================================================================
// Global functions

//int Declare_Your_Functions_Here (int x);
void UnescapeQuotes(char *string);

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __globals_H__ */
