'##########################################################################
'
' Item Cache
'
'##########################################################################

  declare sub ItemCache.Init
  declare function ItemCache.ParseItemCache%(byref src$, byref meta$, byref ids&(), byref names$(), byref productCodes$(), byref barCodes$(), byref stockTotals%(), byref stockUnlimiteds%())
  declare function ItemCache.GetStoreFile%
  declare function ItemCache.SearchItemByBarcode&(key$)
  declare function ItemCache.SearchItemByProductId&(key$)
  declare function ItemCache.SearchItemByProductCode&(key$)
  declare function ItemCache.NullBarcode%(barcode$)
  declare function ItemCache.UpdateBarcode%(id$,name$,code$,barcode$,stock&)
