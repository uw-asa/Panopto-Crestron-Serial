using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;

namespace UserModule_STRING_NOREPOPULATE
{
    public class UserModuleClass_STRING_NOREPOPULATE : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        
        
        
        InOutArray<Crestron.Logos.SplusObjects.StringInput> RX;
        InOutArray<Crestron.Logos.SplusObjects.StringOutput> TX;
        CrestronString [] GS_RX;
        object RX_OnChange_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                ushort I = 0;
                
                
                __context__.SourceCodeLine = 29;
                I = (ushort) ( Functions.GetLastModifiedArrayIndex( __SignalEventArg__ ) ) ; 
                __context__.SourceCodeLine = 30;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt (GS_RX[ I ] != RX[ I ]))  ) ) 
                    { 
                    __context__.SourceCodeLine = 31;
                    GS_RX [ I ]  .UpdateValue ( RX [ I ]  ) ; 
                    __context__.SourceCodeLine = 32;
                    TX [ I]  .UpdateValue ( GS_RX [ I ]  ) ; 
                    } 
                
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    public override object FunctionMain (  object __obj__ ) 
        { 
        try
        {
            SplusExecutionContext __context__ = SplusFunctionMainStartCode();
            
            __context__.SourceCodeLine = 40;
            WaitForInitializationComplete ( ) ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler(); }
        return __obj__;
        }
        
    
    public override void LogosSplusInitialize()
    {
        _SplusNVRAM = new SplusNVRAM( this );
        GS_RX  = new CrestronString[ 17 ];
        for( uint i = 0; i < 17; i++ )
            GS_RX [i] = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 100, this );
        
        RX = new InOutArray<StringInput>( 16, this );
        for( uint i = 0; i < 16; i++ )
        {
            RX[i+1] = new Crestron.Logos.SplusObjects.StringInput( RX__AnalogSerialInput__ + i, RX__AnalogSerialInput__, 100, this );
            m_StringInputList.Add( RX__AnalogSerialInput__ + i, RX[i+1] );
        }
        
        TX = new InOutArray<StringOutput>( 16, this );
        for( uint i = 0; i < 16; i++ )
        {
            TX[i+1] = new Crestron.Logos.SplusObjects.StringOutput( TX__AnalogSerialOutput__ + i, this );
            m_StringOutputList.Add( TX__AnalogSerialOutput__ + i, TX[i+1] );
        }
        
        
        for( uint i = 0; i < 16; i++ )
            RX[i+1].OnSerialChange.Add( new InputChangeHandlerWrapper( RX_OnChange_0, false ) );
            
        
        _SplusNVRAM.PopulateCustomAttributeList( true );
        
        NVRAM = _SplusNVRAM;
        
    }
    
    public override void LogosSimplSharpInitialize()
    {
        
        
    }
    
    public UserModuleClass_STRING_NOREPOPULATE ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}
    
    
    
    
    const uint RX__AnalogSerialInput__ = 0;
    const uint TX__AnalogSerialOutput__ = 0;
    
    [SplusStructAttribute(-1, true, false)]
    public class SplusNVRAM : SplusStructureBase
    {
    
        public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
        
        
    }
    
    SplusNVRAM _SplusNVRAM = null;
    
    public class __CEvent__ : CEvent
    {
        public __CEvent__() {}
        public void Close() { base.Close(); }
        public int Reset() { return base.Reset() ? 1 : 0; }
        public int Set() { return base.Set() ? 1 : 0; }
        public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
    }
    public class __CMutex__ : CMutex
    {
        public __CMutex__() {}
        public void Close() { base.Close(); }
        public void ReleaseMutex() { base.ReleaseMutex(); }
        public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
    }
     public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
