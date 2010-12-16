'##########################################################################
'
' HTTP communication
' 
' Set the following parameters:
'   - Com.Http.ADDRESS$
'   - Com.Http.PORT%
'   - Com.Http.URLPREFIX$
' by reading CCONFIG.DAT
'
'##########################################################################

'--  declare function Com.TcpIp.Request$(prot%,mode%,req$,param$)[Com.RECVSIZE]
  declare function Com.Http.Request$(mode%,req$,param$)[Com.RECVSIZE]
  declare function Com.Http.Get$(req$)[Com.RECVSIZE]
  declare function Com.Http.Post$(req$,param$)[Com.RECVSIZE]
  declare function Com.Ftp.DownloadProgram$(byref files$(),size%)[1]
  declare function Com.Ftp.DownloadData$(req$,param$)[1]
  declare sub Com.ReadConfig
  declare sub Com.PrintWirelessParam
  declare sub Com.PrintTcpParam
  declare sub Com.PrintSocketParam(sockfd%)
  declare function Com.GetPhpName$(req$)

  declare function Com.TcpIp.OpenDevice%(status%)
  declare function Com.TcpIp.CloseDevice%(status%)
  declare function Com.TcpIp.Open%(status%)
  declare function Com.TcpIp.Close%(status%)
  declare function Com.TcpIp.OpenSocket%(status%)
  declare function Com.TcpIp.CloseSocket%(status%)
  declare function Com.Http.SendData%(mode%,req$,param$,status%)
  declare function Com.Http.RecvData%(byref ret$,status%)

