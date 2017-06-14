object DataModule4: TDataModule4
  OldCreateOrder = True
  Left = 166
  Top = 375
  Height = 198
  Width = 252
  object IBQuery1: TQuery
    Left = 80
    Top = 8
  end
  object DataSource1: TDataSource
    Left = 24
    Top = 64
  end
  object DataSource2: TDataSource
    Left = 152
    Top = 72
  end
  object Database1: TIBDatabase
    DatabaseName = 'G:\reliz\MAIN1.FDB'
    Params.Strings = (
      'user_name=SYSDBA'
      'password=masterkey'
      'lc_ctype=WIN1251')
    IdleTimer = 0
    SQLDialect = 3
    TraceFlags = []
    Left = 24
    Top = 16
  end
  object IBTransaction1: TIBTransaction
    Active = False
    Params.Strings = (
      'concurrency'
      'nowait')
    AutoStopAction = saNone
    Left = 144
    Top = 16
  end
  object IBTable1: TIBTable
    BufferChunks = 1000
    CachedUpdates = False
    Left = 88
    Top = 64
  end
end
