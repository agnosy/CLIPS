   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*             CLIPS Version 6.24  06/05/06            */
   /*                                                     */
   /*            INCREMENTAL RESET HEADER FILE            */
   /*******************************************************/

/*************************************************************/
/* Purpose: Provides functionality for the incremental       */
/*   reset of the pattern and join networks when a new       */
/*   rule is added.                                          */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Gary D. Riley                                        */
/*                                                           */
/* Contributing Programmer(s):                               */
/*                                                           */
/* Revision History:                                         */
/*                                                           */
/*      6.24: Renamed BOOLEAN macro type to intBool.         */
/*                                                           */
/*************************************************************/

#ifndef _H_incrrset

#define _H_incrrset

#ifndef _H_ruledef
#include "ruledef.h"
#endif

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _INCRRSET_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

#define GetIncrementalReset() EnvGetIncrementalReset(GetCurrentEnvironment(),GetCurrentExecutionState())
#define SetIncrementalReset(a) EnvSetIncrementalReset(GetCurrentEnvironment(),GetCurrentExecutionState(),a)

   LOCALE void                           IncrementalReset(void *,EXEC_STATUS,struct defrule *);
   LOCALE intBool                        EnvGetIncrementalReset(void *,EXEC_STATUS);
   LOCALE intBool                        EnvSetIncrementalReset(void *,EXEC_STATUS,intBool);
   LOCALE int                            GetIncrementalResetCommand(void *,EXEC_STATUS);
   LOCALE int                            SetIncrementalResetCommand(void *,EXEC_STATUS);

#endif









