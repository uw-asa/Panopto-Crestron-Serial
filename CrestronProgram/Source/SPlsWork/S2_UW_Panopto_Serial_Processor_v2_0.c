#include "TypeDefs.h"
#include "Globals.h"
#include "FnctList.h"
#include "Library.h"
#include "SimplSig.h"
#include "S2_UW_Panopto_Serial_Processor_v2_0.h"

FUNCTION_MAIN( S2_UW_Panopto_Serial_Processor_v2_0 );
EVENT_HANDLER( S2_UW_Panopto_Serial_Processor_v2_0 );
DEFINE_ENTRYPOINT( S2_UW_Panopto_Serial_Processor_v2_0 );


static struct StringHdr_s* S2_UW_Panopto_Serial_Processor_v2_0__DEBUGPRINTHEX ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringHdr_s* __SDEBUG ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __STEMP, 100 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __STEMP );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SDEBUGHEX, 100 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SDEBUGHEX );
    
    unsigned short  __NEXTCHAR; 
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\\x0A" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "\\x0D" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__, 100 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__1, 100 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__1 );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __STEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __STEMP, 100 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SDEBUGHEX );
    INITIALIZE_LOCAL_STRING_STRUCT( __SDEBUGHEX, 100 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\\x0A" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "\\x0D" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 100 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 100 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 64 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __SDEBUG  )   )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , LOCAL_STRING_STRUCT( __STEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 65 );
    do 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 66 );
        __NEXTCHAR = Getc( LOCAL_STRING_STRUCT( __STEMP  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 67 );
        if ( (__NEXTCHAR == 10)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 67 );
            FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __SDEBUGHEX  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
            FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , LOCAL_STRING_STRUCT( __SDEBUGHEX  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 68 );
            if ( (__NEXTCHAR == 13)) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 68 );
                FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __SDEBUGHEX  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , LOCAL_STRING_STRUCT( __SDEBUGHEX  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 69 );
                FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __SDEBUGHEX  )  ,  Chr (  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , __NEXTCHAR)  )  ; 
                FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , LOCAL_STRING_STRUCT( __SDEBUGHEX  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                } 
            
            }
        
        } 
    while (!( (Len( LOCAL_STRING_STRUCT( __STEMP  )  ) == 0)) ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 71 );
    FormatString( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ),  __FN_DSTRET_STR__, 2, "%s", ( LOCAL_STRING_STRUCT( __SDEBUGHEX  )  ) );
    goto S2_UW_Panopto_Serial_Processor_v2_0_Exit__DEBUGPRINTHEX ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__DEBUGPRINTHEX:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __STEMP );
    FREE_LOCAL_STRING_STRUCT( __SDEBUGHEX );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
    /* End Free local function variables */
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 75 );
    return __FN_DSTRET_STR__; 
    }
    
static short S2_UW_Panopto_Serial_Processor_v2_0__FUN_ATOSI ( struct StringHdr_s* __VALSTRING ) 
    { 
    /* Begin local function variable declarations */
    
    int  __FN_DSTSINTRET_VAL__; 
    short  __VALINT; 
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "-" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "-" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 77 );
    __VALINT = Atoi( LOCAL_STRING_STRUCT( __VALSTRING  )  ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 78 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __VALSTRING  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 78 );
        __VALINT = (__VALINT * -( 1 )); 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 79 );
    __FN_DSTSINTRET_VAL__ = ( __VALINT) ;
    goto S2_UW_Panopto_Serial_Processor_v2_0_Exit__FUN_ATOSI ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__FUN_ATOSI:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    /* End Free local function variables */
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 83 );
    return __FN_DSTSINTRET_VAL__; 
    }
    
static void S2_UW_Panopto_Serial_Processor_v2_0__CLEARRECORDINGDATA ( ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 50 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 84 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ID  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 85 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_NAME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 86 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_STARTTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 87 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ENDTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 88 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILSTARTTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 89 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILENDTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__CLEARRECORDINGDATA:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    /* End Free local function variables */
    
    }
    
static void S2_UW_Panopto_Serial_Processor_v2_0__CLEARQUERECORDINGDATA ( ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 50 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 93 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ID  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 94 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_NAME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 95 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_STARTTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 96 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ENDTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 97 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 98 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILENDTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__CLEARQUERECORDINGDATA:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    /* End Free local function variables */
    
    }
    
static void S2_UW_Panopto_Serial_Processor_v2_0__SHOWCOMMANDS ( ) 
    { 
    /* Begin local function variable declarations */
    
    short  __RECTOEND; 
    short  __QUETOSTART; 
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "PreviewingWithNextSchedule" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "PreviewingNoNextSchedule" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "Recording" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "Paused" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "PreviewingWithNextSchedule" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "PreviewingNoNextSchedule" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "Recording" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "Paused" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 107 );
    __RECTOEND = S2_UW_Panopto_Serial_Processor_v2_0__FUN_ATOSI((struct StringHdr_s* ) GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILENDTIME  )  ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 108 );
    __QUETOSTART = S2_UW_Panopto_Serial_Processor_v2_0__FUN_ATOSI((struct StringHdr_s* ) GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME  )  ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 110 );
    if ( Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 113 );
        if ( (((CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ ) , 1 ) == 0) && __QUETOSTART) && (__QUETOSTART < 6))) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 114 );
            SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_START_DIG_OUTPUT, 1) ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 116 );
            if ( ((CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ ) , 1 ) == 0) && GetAnalogInput( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_ENABLE_ADHOC_START_ANALOG_INPUT ))) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 117 );
                SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_START_DIG_OUTPUT, 1) ; 
                } 
            
            else 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 119 );
                SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_START_DIG_OUTPUT, 0) ; 
                } 
            
            }
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 122 );
        if ( ((CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ ) , 1 ) == 0) || (CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ ) , 1 ) == 0))) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 123 );
            SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_STOP_DIG_OUTPUT, 1) ; 
            } 
        
        else 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 125 );
            SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_STOP_DIG_OUTPUT, 0) ; 
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 128 );
        if ( (CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ ) , 1 ) == 0)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 129 );
            SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_PAUSE_DIG_OUTPUT, 1) ; 
            } 
        
        else 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 131 );
            SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_PAUSE_DIG_OUTPUT, 0) ; 
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 134 );
        if ( (CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ ) , 1 ) == 0)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 135 );
            SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_RESUME_DIG_OUTPUT, 1) ; 
            } 
        
        else 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 137 );
            SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_RESUME_DIG_OUTPUT, 0) ; 
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 140 );
        if ( (((CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ ) , 1 ) == 0) || (CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ ) , 1 ) == 0)) && (((__RECTOEND && __QUETOSTART) && ((__RECTOEND + 7) < __QUETOSTART)) && (__RECTOEND < 20)))) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 141 );
            SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_EXTEND_DIG_OUTPUT, 1) ; 
            } 
        
        else 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 143 );
            SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_EXTEND_DIG_OUTPUT, 0) ; 
            } 
        
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 147 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_START_DIG_OUTPUT, 0) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 148 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_STOP_DIG_OUTPUT, 0) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 149 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_PAUSE_DIG_OUTPUT, 0) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 150 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_RESUME_DIG_OUTPUT, 0) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 151 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_EXTEND_DIG_OUTPUT, 0) ; 
        } 
    
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__SHOWCOMMANDS:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    /* End Free local function variables */
    
    }
    
static void S2_UW_Panopto_Serial_Processor_v2_0__UPDATERECORDINGDATA ( ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "Recording" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "Paused" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "2" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "1" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "0" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "Recording" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "Paused" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "2" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "1" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "0" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 164 );
    if ( (CompareStrings( GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ID  ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ID  ) , 1 ) == 0)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 165 );
        S2_UW_Panopto_Serial_Processor_v2_0__CLEARQUERECORDINGDATA ( ) ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 169 );
    if ( !( ((CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ ) , 1 ) == 0) || (CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ ) , 1 ) == 0)) )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 170 );
        S2_UW_Panopto_Serial_Processor_v2_0__CLEARRECORDINGDATA ( ) ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 173 );
    if ( (Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_REC > 5)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 174 );
        S2_UW_Panopto_Serial_Processor_v2_0__CLEARRECORDINGDATA ( ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 175 );
        Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_REC = 1; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 178 );
    if ( (Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_QUE > 5)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 179 );
        S2_UW_Panopto_Serial_Processor_v2_0__CLEARQUERECORDINGDATA ( ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 180 );
        Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_QUE = 1; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 184 );
    if ( (((CompareStrings( GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ ) , 1 ) == 0) || (CompareStrings( GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ ) , 1 ) == 0)) || (CompareStrings( GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ ) , 1 ) == 0))) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 185 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_ABOUTTOSTART_DIG_OUTPUT, 1) ; 
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 187 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_ABOUTTOSTART_DIG_OUTPUT, 0) ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 190 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ID  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_ID_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 191 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_NAME  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 192 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_STARTTIME  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_STARTTIME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 193 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ENDTIME  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_ENDTIME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 194 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILSTARTTIME  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_MINUTESUNTILSTARTTIME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 195 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILENDTIME  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_MINUTESUNTILENDTIME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 197 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ID  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_ID_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 198 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_NAME  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 199 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_STARTTIME  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_STARTTIME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 200 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ENDTIME  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_ENDTIME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 201 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_MINUTESUNTILSTARTTIME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 202 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILENDTIME  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_MINUTESUNTILENDTIME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 206 );
    if ( Len( GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ID  )  )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 206 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_HAS_RECORDING_DATA_DIG_OUTPUT, 1) ; 
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 206 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_HAS_RECORDING_DATA_DIG_OUTPUT, 0) ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 207 );
    if ( Len( GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ID  )  )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 207 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_HAS_QUEUED_DATA_DIG_OUTPUT, 1) ; 
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 207 );
        SetDigital ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_HAS_QUEUED_DATA_DIG_OUTPUT, 0) ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 210 );
    S2_UW_Panopto_Serial_Processor_v2_0__SHOWCOMMANDS ( ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__UPDATERECORDINGDATA:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    /* End Free local function variables */
    
    }
    
static void S2_UW_Panopto_Serial_Processor_v2_0__SENDCOMMAND ( struct StringHdr_s* __SCMD ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __NOWTIME; 
    unsigned short  __NEWTIME; 
    unsigned short  __OLDTIME; 
    unsigned short  __DIFFTIME; 
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\r\n" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\r\n" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 219 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __SCMD  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_PANOPTO_SERIAL_TX_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 220 );
    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 221 );
    S2_UW_Panopto_Serial_Processor_v2_0__SHOWCOMMANDS ( ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 224 );
    __NOWTIME = GetHSeconds(); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 225 );
    __NEWTIME = (__NOWTIME + (30 * 100)); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 227 );
    if ( (__NEWTIME > __NOWTIME)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 228 );
        while ( ((Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD == 0) && (__NEWTIME > __NOWTIME))) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 229 );
            __NOWTIME = GetHSeconds(); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 228 );
            } 
        
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 232 );
        if ( (__NEWTIME < __NOWTIME)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 233 );
            __OLDTIME = __NOWTIME; 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 234 );
            while ( (Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD == 0)) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 235 );
                if ( ((__NOWTIME > __NEWTIME) && (__NOWTIME < __OLDTIME))) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 236 );
                    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 1; 
                    } 
                
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 238 );
                __NOWTIME = GetHSeconds(); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 234 );
                } 
            
            } 
        
        }
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 242 );
    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 1; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 243 );
    S2_UW_Panopto_Serial_Processor_v2_0__SHOWCOMMANDS ( ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__SENDCOMMAND:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    /* End Free local function variables */
    
    }
    
static void S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE ( struct StringHdr_s* __SSTATE ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "Disconnected" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "Dormant" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "Faulted" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "Init" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "TransitionAnyToRecording" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "TransitionAnyToPause" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "TransitionRecordingToPause" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "TransitionRecordingToStop" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "PreviewingNoNextSchedule" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "Previewing" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "PreviewingWithNextSchedule" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "Recording" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "Paused" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "Stopped" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "Disconnected" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "Dormant" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "Faulted" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "Init" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "TransitionAnyToRecording" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "TransitionAnyToPause" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "TransitionRecordingToPause" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "TransitionRecordingToStop" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "PreviewingNoNextSchedule" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "Previewing" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "PreviewingWithNextSchedule" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "Recording" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "Paused" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "Stopped" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 252 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __SSTATE  )   )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 253 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_RECORDERSTATE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 256 );
    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ ) , 1 ) == 0)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 256 );
        Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 257 );
        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ ) , 1 ) == 0)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 257 );
            Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 258 );
            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ ) , 1 ) == 0)) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 258 );
                Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 259 );
                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ ) , 1 ) == 0)) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 259 );
                    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 260 );
                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ ) , 1 ) == 0)) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 260 );
                        Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 261 );
                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 261 );
                            Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 262 );
                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 262 );
                                Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 263 );
                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ ) , 1 ) == 0)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 263 );
                                    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
                                    } 
                                
                                else 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 265 );
                                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  ) , 1 ) != 0)) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 265 );
                                        Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 1; 
                                        } 
                                    
                                    } 
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 269 );
    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ ) , 1 ) == 0)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 269 );
        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )    )  ; 
        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 270 );
        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ ) , 1 ) == 0)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 270 );
            FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )    )  ; 
            FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 271 );
            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ ) , 1 ) == 0)) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 271 );
                FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 272 );
                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ ) , 1 ) == 0)) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 272 );
                    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )    )  ; 
                    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 273 );
                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ ) , 1 ) == 0)) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 273 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )    )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 274 );
                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 274 );
                            FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )    )  ; 
                            FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 275 );
                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SSTATE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 275 );
                                FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )    )  ; 
                                FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                                } 
                            
                            else 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 276 );
                                FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __SSTATE  )   )  ; 
                                FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                                } 
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 278 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_RECORDERSTATESIMPLE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 280 );
    S2_UW_Panopto_Serial_Processor_v2_0__SHOWCOMMANDS ( ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__SETRECORDERSTATE:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    /* End Free local function variables */
    
    }
    
static void S2_UW_Panopto_Serial_Processor_v2_0__PARSERECORDINGDATA ( struct StringHdr_s* __SROOT , struct StringHdr_s* __SFINDTAG , unsigned short __TAG , struct StringHdr_s* __SDATA , unsigned short __QUEUED ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __TEMP, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __TEMP );
    
    unsigned short  __I1; 
    unsigned short  __I2; 
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__1, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__1 );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __TEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 291 );
    __I1 = (Len( LOCAL_STRING_STRUCT( __SFINDTAG  )  ) + 1); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 292 );
    __I2 = (Len( LOCAL_STRING_STRUCT( __SDATA  )  ) - __I1); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 293 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SDATA  )  , __I1, __I2)  )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 295 );
    if ( __QUEUED) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 296 );
        if ( Find( LOCAL_STRING_STRUCT( __SROOT  )  , LOCAL_STRING_STRUCT( __SDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 297 );
            
                {
                int __SPLS_TMPVAR__SWTCH_1__ = ( __TAG) ;
                
                    { 
                    if ( __SPLS_TMPVAR__SWTCH_1__ == ( 1) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 298 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ID  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 298 );
                        Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_QUE = 0; 
                        } 
                    
                    else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 2) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 299 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_NAME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 3) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 300 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_STARTTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 4) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 301 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ENDTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 5) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 302 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 6) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 303 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILENDTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    } 
                    
                }
                
            
            } 
        
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 308 );
        if ( Find( LOCAL_STRING_STRUCT( __SROOT  )  , LOCAL_STRING_STRUCT( __SDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 309 );
            
                {
                int __SPLS_TMPVAR__SWTCH_1__ = ( __TAG) ;
                
                    { 
                    if ( __SPLS_TMPVAR__SWTCH_1__ == ( 1) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 310 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ID  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 310 );
                        Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_REC = 0; 
                        } 
                    
                    else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 2) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 311 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_NAME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 3) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 312 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_STARTTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 4) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 313 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ENDTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 5) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 314 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILSTARTTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 6) )
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 315 );
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
                        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILENDTIME  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                        } 
                    
                    } 
                    
                }
                
            
            } 
        
        } 
    
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__PARSERECORDINGDATA:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __TEMP );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
    /* End Free local function variables */
    
    }
    
static void S2_UW_Panopto_Serial_Processor_v2_0__CHECKRECORDINGDATA ( struct StringHdr_s* __SROOT , struct StringHdr_s* __SDATA , unsigned short __QUEUED ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __I; 
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FINDTAG, 100 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FINDTAG );
    
    short __FN_FOREND_VAL__1; 
    short __FN_FORINIT_VAL__1; 
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FINDTAG );
    INITIALIZE_LOCAL_STRING_STRUCT( __FINDTAG, 100 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 329 );
    __FN_FOREND_VAL__1 = 6; 
    __FN_FORINIT_VAL__1 = 1; 
    for( __I = 1; (__FN_FORINIT_VAL__1 > 0)  ? ((short)__I  <= __FN_FOREND_VAL__1 ) : ((short)__I  >= __FN_FOREND_VAL__1) ; __I  += __FN_FORINIT_VAL__1) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 330 );
        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,6 , "%s%s: "  , LOCAL_STRING_STRUCT( __SROOT  )  , GetStringArrayElement ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ),  GLOBAL_STRING_ARRAY( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_TAG  )    ,  __I  )  )  ; 
        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , LOCAL_STRING_STRUCT( __FINDTAG  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 331 );
        if ( Find( LOCAL_STRING_STRUCT( __FINDTAG  )  , LOCAL_STRING_STRUCT( __SDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 331 );
            S2_UW_Panopto_Serial_Processor_v2_0__PARSERECORDINGDATA (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __SROOT  )  ,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __FINDTAG  )  , __I,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __SDATA  )  , __QUEUED) ; 
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 332 );
        ProcessLogic ( ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 329 );
        } 
    
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__CHECKRECORDINGDATA:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __FINDTAG );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    /* End Free local function variables */
    
    }
    
static void S2_UW_Panopto_Serial_Processor_v2_0__PARSEDATA ( struct StringHdr_s* __SDATA ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "Disconnected OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "Disconnected" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "Recorder" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "RecorderPreviewingNoNextSchedule OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "PreviewingNoNextSchedule" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "RecorderPreviewingWithNextSchedule OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "PreviewingWithNextSchedule" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "RecorderRecording OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "Recording" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "RecorderPaused OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "Paused" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "RecorderStopped OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "Stopped" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "RecorderDormant OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_14__, sizeof( "Dormant" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_14__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_15__, sizeof( "RecorderFaulted OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_15__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_16__, sizeof( "Faulted" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_16__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_17__, sizeof( "RecorderDisconnected OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_17__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_18__, sizeof( "Recorder-Status: Init\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_18__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_19__, sizeof( "Init" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_19__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_20__, sizeof( "Recorder-Status: PreviewingNoNextSchedule\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_20__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_21__, sizeof( "Recorder-Status: PreviewingWithNextSchedule\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_21__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_22__, sizeof( "Recorder-Status: TransitionAnyToRecording\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_22__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_23__, sizeof( "TransitionAnyToRecording" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_23__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_24__, sizeof( "Recorder-Status: Recording\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_24__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_25__, sizeof( "Recorder-Status: TransitionRecordingToPause\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_25__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_26__, sizeof( "TransitionRecordingToPause" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_26__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_27__, sizeof( "Recorder-Status: Paused\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_27__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_28__, sizeof( "Recorder-Status: TransitionPausedToStop\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_28__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_29__, sizeof( "TransitionPausedToStop" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_29__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_30__, sizeof( "Recorder-Status: TransitionRecordingToStop\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_30__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_31__, sizeof( "TransitionRecordingToStop" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_31__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_32__, sizeof( "Recorder-Status: Stopped\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_32__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_33__, sizeof( "Recorder-Status: Dormant\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_33__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_34__, sizeof( "Recorder-Status: Faulted\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_34__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_35__, sizeof( "Recorder-Status: Disconnected\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_35__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_36__, sizeof( "RecorderPreviewing OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_36__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_37__, sizeof( "RecorderPreviewingQueued OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_37__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_38__, sizeof( "RecorderRunning OK\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_38__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_39__, sizeof( "Recorder-Status: RRDisconnected\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_39__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_40__, sizeof( "Recorder-Status: RRPreviewing\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_40__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_41__, sizeof( "Recorder-Status: RRPreviewingQueued\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_41__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_42__, sizeof( "Recorder-Status: RRRecording\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_42__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_43__, sizeof( "Recorder-Status: RRPaused\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_43__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_44__, sizeof( "Recorder-Status: RRStopped\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_44__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_45__, sizeof( "Recorder-Status: RRRunning\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_45__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_46__, sizeof( "Recorder-Status: RRFaulted\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_46__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_47__, sizeof( "Recorder-Status: RRStoppingPaused\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_47__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_48__, sizeof( "Recorder-Status: RRStoppingRecord\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_48__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_49__, sizeof( "CurrentRecording-" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_49__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_50__, sizeof( "NextRecording-" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_50__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_51__, sizeof( "Recording-" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_51__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_52__, sizeof( "Queued-" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_52__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "Disconnected OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "Disconnected" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "Recorder" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "RecorderPreviewingNoNextSchedule OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "PreviewingNoNextSchedule" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "RecorderPreviewingWithNextSchedule OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "PreviewingWithNextSchedule" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "RecorderRecording OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "Recording" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "RecorderPaused OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "Paused" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "RecorderStopped OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "Stopped" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "RecorderDormant OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_14__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__, "Dormant" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_15__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__, "RecorderFaulted OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_16__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__, "Faulted" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_17__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_17__, "RecorderDisconnected OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_18__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_18__, "Recorder-Status: Init\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_19__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_19__, "Init" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_20__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_20__, "Recorder-Status: PreviewingNoNextSchedule\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_21__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__, "Recorder-Status: PreviewingWithNextSchedule\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_22__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_22__, "Recorder-Status: TransitionAnyToRecording\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_23__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_23__, "TransitionAnyToRecording" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_24__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_24__, "Recorder-Status: Recording\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_25__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_25__, "Recorder-Status: TransitionRecordingToPause\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_26__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_26__, "TransitionRecordingToPause" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_27__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_27__, "Recorder-Status: Paused\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_28__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_28__, "Recorder-Status: TransitionPausedToStop\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_29__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_29__, "TransitionPausedToStop" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_30__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_30__, "Recorder-Status: TransitionRecordingToStop\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_31__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_31__, "TransitionRecordingToStop" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_32__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_32__, "Recorder-Status: Stopped\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_33__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_33__, "Recorder-Status: Dormant\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_34__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_34__, "Recorder-Status: Faulted\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_35__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_35__, "Recorder-Status: Disconnected\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_36__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_36__, "RecorderPreviewing OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_37__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_37__, "RecorderPreviewingQueued OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_38__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_38__, "RecorderRunning OK\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_39__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_39__, "Recorder-Status: RRDisconnected\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_40__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_40__, "Recorder-Status: RRPreviewing\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_41__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_41__, "Recorder-Status: RRPreviewingQueued\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_42__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_42__, "Recorder-Status: RRRecording\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_43__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_43__, "Recorder-Status: RRPaused\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_44__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_44__, "Recorder-Status: RRStopped\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_45__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_45__, "Recorder-Status: RRRunning\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_46__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_46__, "Recorder-Status: RRFaulted\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_47__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_47__, "Recorder-Status: RRStoppingPaused\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_48__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_48__, "Recorder-Status: RRStoppingRecord\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_49__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_49__, "CurrentRecording-" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_50__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_50__, "NextRecording-" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_51__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_51__, "Recording-" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_52__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_52__, "Queued-" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 342 );
    if ( (GetAnalogInput( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_DEBUG_ANALOG_INPUT ) >= 1)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 342 );
        Print( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , 16, "\xFA\xE0""ParseData: %s""\xFB", S2_UW_Panopto_Serial_Processor_v2_0__DEBUGPRINTHEX (  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __SDATA  )  ) ) ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 347 );
    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ ) , 1 ) == 0)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 347 );
        S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 349 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __SDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 350 );
        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ ) , 1 ) == 0)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 350 );
            S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )   ) ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 351 );
            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ ) , 1 ) == 0)) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 351 );
                S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )   ) ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 352 );
                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ ) , 1 ) == 0)) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 352 );
                    S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )   ) ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 353 );
                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ ) , 1 ) == 0)) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 353 );
                        S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )   ) ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 354 );
                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 354 );
                            S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )   ) ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 355 );
                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 355 );
                                S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ )   ) ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 356 );
                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ ) , 1 ) == 0)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 356 );
                                    S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__ )   ) ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 357 );
                                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_17__ ) , 1 ) == 0)) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 357 );
                                        S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 359 );
                                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_18__ ) , 1 ) == 0)) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 359 );
                                            S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_19__ )   ) ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 360 );
                                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_20__ ) , 1 ) == 0)) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 360 );
                                                S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )   ) ; 
                                                } 
                                            
                                            else 
                                                {
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 361 );
                                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__ ) , 1 ) == 0)) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 361 );
                                                    S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )   ) ; 
                                                    } 
                                                
                                                else 
                                                    {
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 362 );
                                                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_22__ ) , 1 ) == 0)) 
                                                        { 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 362 );
                                                        S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_23__ )   ) ; 
                                                        } 
                                                    
                                                    else 
                                                        {
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 363 );
                                                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_24__ ) , 1 ) == 0)) 
                                                            { 
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 363 );
                                                            S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )   ) ; 
                                                            } 
                                                        
                                                        else 
                                                            {
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 364 );
                                                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_25__ ) , 1 ) == 0)) 
                                                                { 
                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 364 );
                                                                S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_26__ )   ) ; 
                                                                } 
                                                            
                                                            else 
                                                                {
                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 365 );
                                                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_27__ ) , 1 ) == 0)) 
                                                                    { 
                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 365 );
                                                                    S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )   ) ; 
                                                                    } 
                                                                
                                                                else 
                                                                    {
                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 366 );
                                                                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_28__ ) , 1 ) == 0)) 
                                                                        { 
                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 366 );
                                                                        S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_29__ )   ) ; 
                                                                        } 
                                                                    
                                                                    else 
                                                                        {
                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 367 );
                                                                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_30__ ) , 1 ) == 0)) 
                                                                            { 
                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 367 );
                                                                            S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_31__ )   ) ; 
                                                                            } 
                                                                        
                                                                        else 
                                                                            {
                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 368 );
                                                                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_32__ ) , 1 ) == 0)) 
                                                                                { 
                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 368 );
                                                                                S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )   ) ; 
                                                                                } 
                                                                            
                                                                            else 
                                                                                {
                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 369 );
                                                                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_33__ ) , 1 ) == 0)) 
                                                                                    { 
                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 369 );
                                                                                    S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ )   ) ; 
                                                                                    } 
                                                                                
                                                                                else 
                                                                                    {
                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 370 );
                                                                                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_34__ ) , 1 ) == 0)) 
                                                                                        { 
                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 370 );
                                                                                        S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__ )   ) ; 
                                                                                        } 
                                                                                    
                                                                                    else 
                                                                                        {
                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 371 );
                                                                                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_35__ ) , 1 ) == 0)) 
                                                                                            { 
                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 371 );
                                                                                            S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
                                                                                            } 
                                                                                        
                                                                                        else 
                                                                                            {
                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 374 );
                                                                                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_36__ ) , 1 ) == 0)) 
                                                                                                { 
                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 374 );
                                                                                                S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )   ) ; 
                                                                                                } 
                                                                                            
                                                                                            else 
                                                                                                {
                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 375 );
                                                                                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_37__ ) , 1 ) == 0)) 
                                                                                                    { 
                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 375 );
                                                                                                    S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )   ) ; 
                                                                                                    } 
                                                                                                
                                                                                                else 
                                                                                                    {
                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 376 );
                                                                                                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_38__ ) , 1 ) == 0)) 
                                                                                                        { 
                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 376 );
                                                                                                        S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ )   ) ; 
                                                                                                        } 
                                                                                                    
                                                                                                    else 
                                                                                                        {
                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 379 );
                                                                                                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_39__ ) , 1 ) == 0)) 
                                                                                                            { 
                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 379 );
                                                                                                            S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
                                                                                                            } 
                                                                                                        
                                                                                                        else 
                                                                                                            {
                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 380 );
                                                                                                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_40__ ) , 1 ) == 0)) 
                                                                                                                { 
                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 380 );
                                                                                                                S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )   ) ; 
                                                                                                                } 
                                                                                                            
                                                                                                            else 
                                                                                                                {
                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 381 );
                                                                                                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_41__ ) , 1 ) == 0)) 
                                                                                                                    { 
                                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 381 );
                                                                                                                    S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )   ) ; 
                                                                                                                    } 
                                                                                                                
                                                                                                                else 
                                                                                                                    {
                                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 382 );
                                                                                                                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_42__ ) , 1 ) == 0)) 
                                                                                                                        { 
                                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 382 );
                                                                                                                        S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )   ) ; 
                                                                                                                        } 
                                                                                                                    
                                                                                                                    else 
                                                                                                                        {
                                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 383 );
                                                                                                                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_43__ ) , 1 ) == 0)) 
                                                                                                                            { 
                                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 383 );
                                                                                                                            S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )   ) ; 
                                                                                                                            } 
                                                                                                                        
                                                                                                                        else 
                                                                                                                            {
                                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 384 );
                                                                                                                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_44__ ) , 1 ) == 0)) 
                                                                                                                                { 
                                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 384 );
                                                                                                                                S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )   ) ; 
                                                                                                                                } 
                                                                                                                            
                                                                                                                            else 
                                                                                                                                {
                                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 385 );
                                                                                                                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_45__ ) , 1 ) == 0)) 
                                                                                                                                    { 
                                                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 385 );
                                                                                                                                    S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ )   ) ; 
                                                                                                                                    } 
                                                                                                                                
                                                                                                                                else 
                                                                                                                                    {
                                                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 386 );
                                                                                                                                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_46__ ) , 1 ) == 0)) 
                                                                                                                                        { 
                                                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 386 );
                                                                                                                                        S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__ )   ) ; 
                                                                                                                                        } 
                                                                                                                                    
                                                                                                                                    else 
                                                                                                                                        {
                                                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 387 );
                                                                                                                                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_47__ ) , 1 ) == 0)) 
                                                                                                                                            { 
                                                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 387 );
                                                                                                                                            S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_29__ )   ) ; 
                                                                                                                                            } 
                                                                                                                                        
                                                                                                                                        else 
                                                                                                                                            {
                                                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 388 );
                                                                                                                                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __SDATA  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_48__ ) , 1 ) == 0)) 
                                                                                                                                                { 
                                                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 388 );
                                                                                                                                                S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_31__ )   ) ; 
                                                                                                                                                } 
                                                                                                                                            
                                                                                                                                            }
                                                                                                                                        
                                                                                                                                        }
                                                                                                                                    
                                                                                                                                    }
                                                                                                                                
                                                                                                                                }
                                                                                                                            
                                                                                                                            }
                                                                                                                        
                                                                                                                        }
                                                                                                                    
                                                                                                                    }
                                                                                                                
                                                                                                                }
                                                                                                            
                                                                                                            }
                                                                                                        
                                                                                                        }
                                                                                                    
                                                                                                    }
                                                                                                
                                                                                                }
                                                                                            
                                                                                            }
                                                                                        
                                                                                        }
                                                                                    
                                                                                    }
                                                                                
                                                                                }
                                                                            
                                                                            }
                                                                        
                                                                        }
                                                                    
                                                                    }
                                                                
                                                                }
                                                            
                                                            }
                                                        
                                                        }
                                                    
                                                    }
                                                
                                                }
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 395 );
    if ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_49__ )  , LOCAL_STRING_STRUCT( __SDATA  )  , 1 , 1 ) && ((CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ ) , 1 ) == 0) || (CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ ) , 1 ) == 0)))) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 396 );
        S2_UW_Panopto_Serial_Processor_v2_0__CHECKRECORDINGDATA (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_49__ )   ,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __SDATA  )  , 0) ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 399 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_50__ )  , LOCAL_STRING_STRUCT( __SDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 400 );
            S2_UW_Panopto_Serial_Processor_v2_0__CHECKRECORDINGDATA (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_50__ )   ,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __SDATA  )  , 1) ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 403 );
            if ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_51__ )  , LOCAL_STRING_STRUCT( __SDATA  )  , 1 , 1 ) && ((CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ ) , 1 ) == 0) || (CompareStrings( NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ ) , 1 ) == 0)))) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 404 );
                S2_UW_Panopto_Serial_Processor_v2_0__CHECKRECORDINGDATA (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_51__ )   ,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __SDATA  )  , 0) ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 407 );
                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_52__ )  , LOCAL_STRING_STRUCT( __SDATA  )  , 1 , 1 )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 408 );
                    S2_UW_Panopto_Serial_Processor_v2_0__CHECKRECORDINGDATA (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_52__ )   ,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __SDATA  )  , 1) ; 
                    } 
                
                }
            
            }
        
        }
    
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__PARSEDATA:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_17__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_18__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_19__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_20__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_22__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_23__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_24__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_25__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_26__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_27__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_28__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_29__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_30__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_31__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_32__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_33__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_34__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_35__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_36__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_37__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_38__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_39__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_40__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_41__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_42__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_43__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_44__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_45__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_46__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_47__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_48__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_49__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_50__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_51__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_52__ );
    /* End Free local function variables */
    
    }
    
DEFINE_INDEPENDENT_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00000 /*panopto_serial_rx*/ )

    {
    /* Begin local function variable declarations */
    
    unsigned short  __NEXTCHAR; 
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__, 1000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__1, 1000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__1 );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 1000 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 1000 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 422 );
    do 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 423 );
        __NEXTCHAR = Getc( GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __PANOPTO_SERIAL_RX  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 424 );
        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,4 , "%s%s"  , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_TEMP_PANOPTO_SERIAL_RX  )  ,  Chr (  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , __NEXTCHAR)  )  ; 
        FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_TEMP_PANOPTO_SERIAL_RX  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 425 );
        if ( (__NEXTCHAR == 10)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 426 );
            S2_UW_Panopto_Serial_Processor_v2_0__PARSEDATA (  (struct StringHdr_s* )  GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_TEMP_PANOPTO_SERIAL_RX  )  ) ; 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 427 );
            FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
            FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_TEMP_PANOPTO_SERIAL_RX  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 428 );
            Delay ( 1) ; 
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 430 );
        Delay ( 1) ; 
        } 
    while (!( (Len( GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __PANOPTO_SERIAL_RX  )  ) == 0)) ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 432 );
    S2_UW_Panopto_Serial_Processor_v2_0__UPDATERECORDINGDATA ( ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__Event_0:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00001 /*cmd_start*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "START" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "START" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 438 );
    S2_UW_Panopto_Serial_Processor_v2_0__SENDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__Event_1:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00002 /*cmd_stop*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "STOP" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "STOP" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 439 );
    S2_UW_Panopto_Serial_Processor_v2_0__SENDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__Event_2:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00003 /*cmd_pause*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "PAUSE" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "PAUSE" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 440 );
    S2_UW_Panopto_Serial_Processor_v2_0__SENDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__Event_3:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00004 /*cmd_resume*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "RESUME" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "RESUME" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 441 );
    S2_UW_Panopto_Serial_Processor_v2_0__SENDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__Event_4:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00005 /*cmd_extend*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "EXTEND" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "EXTEND" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 442 );
    S2_UW_Panopto_Serial_Processor_v2_0__SENDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__Event_5:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00006 /*get_status*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "STATUS\r\n" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "STATUS\r\n" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 446 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 )  ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    SetSerial( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), __S2_UW_Panopto_Serial_Processor_v2_0_PANOPTO_SERIAL_TX_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 447 );
    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_REC = (Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_REC + 1); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 448 );
    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_QUE = (Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_QUE + 1); 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__Event_6:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00007 /*error_NoCom*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 453 );
    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 454 );
    S2_UW_Panopto_Serial_Processor_v2_0__SETRECORDERSTATE (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 455 );
    S2_UW_Panopto_Serial_Processor_v2_0__CLEARRECORDINGDATA ( ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 456 );
    S2_UW_Panopto_Serial_Processor_v2_0__CLEARQUERECORDINGDATA ( ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 457 );
    S2_UW_Panopto_Serial_Processor_v2_0__UPDATERECORDINGDATA ( ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__Event_7:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}


    
    

/********************************************************************************
  Constructor
********************************************************************************/

/********************************************************************************
  Destructor
********************************************************************************/

/********************************************************************************
  static void ProcessDigitalEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessDigitalEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        case __S2_UW_Panopto_Serial_Processor_v2_0_GET_STATUS_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00006 /*get_status*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
                
            }
            break;
            
        case __S2_UW_Panopto_Serial_Processor_v2_0_CMD_START_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00001 /*cmd_start*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
                
            }
            break;
            
        case __S2_UW_Panopto_Serial_Processor_v2_0_CMD_STOP_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00002 /*cmd_stop*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
                
            }
            break;
            
        case __S2_UW_Panopto_Serial_Processor_v2_0_CMD_PAUSE_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00003 /*cmd_pause*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
                
            }
            break;
            
        case __S2_UW_Panopto_Serial_Processor_v2_0_CMD_RESUME_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00004 /*cmd_resume*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
                
            }
            break;
            
        case __S2_UW_Panopto_Serial_Processor_v2_0_CMD_EXTEND_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00005 /*cmd_extend*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
                
            }
            break;
            
        case __S2_UW_Panopto_Serial_Processor_v2_0_ERROR_NOCOM_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00007 /*error_NoCom*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
                
            }
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessAnalogEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessAnalogEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessStringEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessStringEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_UW_Panopto_Serial_Processor_v2_0 ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        case __S2_UW_Panopto_Serial_Processor_v2_0_PANOPTO_SERIAL_RX_BUFFER_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_UW_Panopto_Serial_Processor_v2_0, 00000 /*panopto_serial_rx*/, 1 );
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketConnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketConnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_UW_Panopto_Serial_Processor_v2_0 ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketStatusEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketStatusEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  EVENT_HANDLER( S2_UW_Panopto_Serial_Processor_v2_0 )
********************************************************************************/
EVENT_HANDLER( S2_UW_Panopto_Serial_Processor_v2_0 )
    {
    SAVE_GLOBAL_POINTERS ;
    switch ( Signal->Type )
        {
        case e_SIGNAL_TYPE_DIGITAL :
            ProcessDigitalEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_ANALOG :
            ProcessAnalogEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STRING :
            ProcessStringEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_CONNECT :
            ProcessSocketConnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_DISCONNECT :
            ProcessSocketDisconnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_RECEIVE :
            ProcessSocketReceiveEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STATUS :
            ProcessSocketStatusEvent( Signal );
            break ;
        }
        
    RESTORE_GLOBAL_POINTERS ;
    
    }
    
/********************************************************************************
  FUNCTION_MAIN( S2_UW_Panopto_Serial_Processor_v2_0 )
********************************************************************************/
FUNCTION_MAIN( S2_UW_Panopto_Serial_Processor_v2_0 )
{
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "Id" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "Name" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "StartTime" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "EndTime" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "MinutesUntilStartTime" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "MinutesUntilEndTime" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR___M, 1000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR___M );
    
    SAVE_GLOBAL_POINTERS ;
    SET_INSTANCE_POINTER ( S2_UW_Panopto_Serial_Processor_v2_0 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "Id" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "Name" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "StartTime" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "EndTime" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "MinutesUntilStartTime" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "MinutesUntilEndTime" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __FN_DST_STR___M );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR___M, 1000 );
    
    
    /* End local function variable declarations */
    
    
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __PANOPTO_SERIAL_RX, e_INPUT_TYPE_BUFFER, __S2_UW_Panopto_Serial_Processor_v2_0_PANOPTO_SERIAL_RX_BUFFER_MAX_LEN );
    REGISTER_GLOBAL_INPUT_STRING ( S2_UW_Panopto_Serial_Processor_v2_0, __PANOPTO_SERIAL_RX, __S2_UW_Panopto_Serial_Processor_v2_0_PANOPTO_SERIAL_RX_BUFFER_INPUT );
    INITIALIZE_GLOBAL_STRING_ARRAY ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_TAG, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_TAG_ARRAY_NUM_ELEMS, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_TAG_ARRAY_NUM_CHARS );
    
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_TEMP_PANOPTO_SERIAL_RX, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_TEMP_PANOPTO_SERIAL_RX_STRING_MAX_LEN );
    INITIALIZE_NVRAM_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDERSTATE_STRING_MAX_LEN );
    INITIALIZE_NVRAM_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDERSTATE_SIMPLE_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ID, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_ID_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_NAME, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_NAME_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_STARTTIME, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_STARTTIME_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ENDTIME, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_ENDTIME_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILSTARTTIME, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_MINUTESUNTILSTARTTIME_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILENDTIME, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_MINUTESUNTILENDTIME_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ID, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_ID_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_NAME, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_NAME_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_STARTTIME, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_STARTTIME_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ENDTIME, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_ENDTIME_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILENDTIME, e_INPUT_TYPE_NONE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_MINUTESUNTILENDTIME_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_UW_Panopto_Serial_Processor_v2_0, sGenericOutStr, e_INPUT_TYPE_NONE, GENERIC_STRING_OUTPUT_LEN );
    
    
    REGISTER_GLOBAL_INPUT_STRING ( S2_UW_Panopto_Serial_Processor_v2_0, __PANOPTO_SERIAL_RX, __S2_UW_Panopto_Serial_Processor_v2_0_PANOPTO_SERIAL_RX_BUFFER_INPUT );
    
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 467 );
    WaitForInitializationComplete ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 468 );
    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_ALLOWCMD = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 469 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GLOBAL_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_TEMP_PANOPTO_SERIAL_RX  )   ,2 , "%s"  , __FN_DST_STR___M ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 470 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE  )   ,2 , "%s"  , __FN_DST_STR___M ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 471 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , NVRAM_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE  )   ,2 , "%s"  , __FN_DST_STR___M ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 473 );
    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_REC = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 474 );
    Globals->S2_UW_Panopto_Serial_Processor_v2_0.__GI_STATUS_COUNT_QUE = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 476 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GetStringArrayElement ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ),  GLOBAL_STRING_ARRAY( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_TAG  )    ,  1  )  ,2 , "%s"  , __FN_DST_STR___M ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 477 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GetStringArrayElement ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ),  GLOBAL_STRING_ARRAY( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_TAG  )    ,  2  )  ,2 , "%s"  , __FN_DST_STR___M ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 478 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GetStringArrayElement ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ),  GLOBAL_STRING_ARRAY( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_TAG  )    ,  3  )  ,2 , "%s"  , __FN_DST_STR___M ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 479 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GetStringArrayElement ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ),  GLOBAL_STRING_ARRAY( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_TAG  )    ,  4  )  ,2 , "%s"  , __FN_DST_STR___M ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 480 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GetStringArrayElement ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ),  GLOBAL_STRING_ARRAY( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_TAG  )    ,  5  )  ,2 , "%s"  , __FN_DST_STR___M ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ), 481 );
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ) , GetStringArrayElement ( INSTANCE_PTR( S2_UW_Panopto_Serial_Processor_v2_0 ),  GLOBAL_STRING_ARRAY( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_TAG  )    ,  6  )  ,2 , "%s"  , __FN_DST_STR___M ) ; 
    
    S2_UW_Panopto_Serial_Processor_v2_0_Exit__MAIN:/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR___M );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    /* End Free local function variables */
    
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }
