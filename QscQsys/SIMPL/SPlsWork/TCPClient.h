namespace TCP_Client;
        // class declarations
         class TCPClientDevice;
     class TCPClientDevice 
    {
        // class delegates
        delegate FUNCTION newStatus ( SIMPLSHARPSTRING status );
        delegate FUNCTION newError ( SIMPLSHARPSTRING error );
        delegate FUNCTION newResponse ( SIMPLSHARPSTRING response );

        // class events

        // class functions
        FUNCTION Connect ( STRING host , INTEGER port );
        FUNCTION Disconnect ();
        FUNCTION SendCommand ( STRING command );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty newStatus onStatus;
        DelegateProperty newError onError;
        DelegateProperty newResponse onResponse;
        SIGNED_LONG_INTEGER ID;
    };

