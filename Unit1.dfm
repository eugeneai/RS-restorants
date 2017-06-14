object Form1: TForm1
  Left = 164
  Top = 212
  Width = 1088
  Height = 563
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 120
    Top = 32
    Width = 657
    Height = 449
    ActivePage = TabSheet1
    TabIndex = 0
    TabOrder = 0
    OnChange = PageControl1Change
    object TabSheet1: TTabSheet
      Caption = #1042#1099#1073#1086#1088
      object RadioGroup1: TRadioGroup
        Left = 8
        Top = 40
        Width = 145
        Height = 65
        Caption = #1057#1090#1086#1103#1085#1082#1072
        Items.Strings = (
          #1087#1088#1080#1089#1091#1090#1089#1090#1074#1091#1077#1090
          #1086#1090#1089#1091#1090#1089#1090#1074#1091#1077#1090)
        TabOrder = 0
        OnClick = RadioGroup1Click
      end
      object RadioGroup2: TRadioGroup
        Left = 160
        Top = 40
        Width = 145
        Height = 65
        Caption = #1056#1077#1084#1086#1085#1090
        Items.Strings = (
          #1076#1086' 5'#1090#1080' '#1083#1077#1090
          #1086#1090' 5'#1090#1080' '#1083#1077#1090)
        TabOrder = 1
      end
      object RadioGroup3: TRadioGroup
        Left = 312
        Top = 40
        Width = 145
        Height = 65
        Caption = #1050#1072#1095#1077#1089#1090#1074#1086' '#1073#1083#1102#1076#1072
        Items.Strings = (
          #1074#1099#1089#1086#1082#1086#1077
          #1089#1088#1077#1076#1085#1077#1077)
        TabOrder = 2
      end
      object RadioGroup4: TRadioGroup
        Left = 464
        Top = 40
        Width = 145
        Height = 65
        Caption = #1044#1086#1089#1090#1072#1074#1082#1072
        Items.Strings = (
          #1087#1088#1080#1089#1091#1090#1089#1090#1074#1091#1077#1090
          #1086#1090#1089#1091#1090#1089#1090#1074#1091#1077#1090)
        TabOrder = 3
      end
      object RadioGroup5: TRadioGroup
        Left = 8
        Top = 112
        Width = 145
        Height = 65
        Caption = #1052#1091#1079#1099#1082#1072
        Items.Strings = (
          #1078#1080#1074#1072#1103
          #1092#1086#1085#1086#1074#1072#1103)
        TabOrder = 4
      end
      object RadioGroup6: TRadioGroup
        Left = 160
        Top = 112
        Width = 145
        Height = 81
        Caption = #1050#1091#1093#1085#1103
        Items.Strings = (
          #1088#1091#1089#1089#1082#1072#1103
          #1091#1082#1088#1072#1080#1085#1089#1082#1072#1103
          #1082#1080#1090#1072#1081#1089#1082#1072#1103
          #1077#1074#1088#1086#1087#1077#1081#1089#1082#1072#1103)
        TabOrder = 5
      end
      object RadioGroup7: TRadioGroup
        Left = 312
        Top = 112
        Width = 145
        Height = 81
        Caption = #1058#1080#1087' '#1088#1077#1089#1090#1086#1088#1072#1085#1072
        Items.Strings = (
          #1083#1102#1082#1089
          #1087#1077#1088#1074#1086#1075#1086' '#1082#1083#1072#1089#1089#1072
          #1074#1090#1086#1088#1086#1075#1086' '#1082#1083#1072#1089#1089#1072)
        TabOrder = 6
      end
      object RadioGroup8: TRadioGroup
        Left = 464
        Top = 112
        Width = 145
        Height = 65
        Caption = #1058#1072#1085#1094#1087#1086#1083
        Items.Strings = (
          #1076#1086' 50 '#1095#1077#1083#1086#1074#1077#1082
          #1086#1090' 50 '#1095#1077#1083#1086#1074#1077#1082)
        TabOrder = 7
      end
      object RadioGroup9: TRadioGroup
        Left = 8
        Top = 184
        Width = 145
        Height = 73
        Caption = #1062#1077#1085#1072
        Items.Strings = (
          #1076#1086' 1000'#1088'.'
          #1086#1090' 1500'#1088'. '#1076#1086' 2500'#1088'.'
          #1086#1090' 2500'#1088'.')
        TabOrder = 8
      end
      object RadioGroup10: TRadioGroup
        Left = 464
        Top = 184
        Width = 145
        Height = 65
        Caption = #1056#1072#1081#1086#1085
        Items.Strings = (
          #1094#1077#1085#1090#1088
          #1089#1087#1072#1083#1100#1085#1099#1077' '#1056'-'#1085)
        TabOrder = 9
      end
      object Button1: TButton
        Left = 240
        Top = 200
        Width = 145
        Height = 33
        Caption = #1053#1072#1081#1090#1080
        TabOrder = 10
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 240
        Top = 232
        Width = 145
        Height = 33
        Caption = #1057#1073#1088#1086#1089#1080#1090#1100
        TabOrder = 11
        OnClick = Button2Click
      end
      object DBGrid1: TDBGrid
        Left = 16
        Top = 272
        Width = 609
        Height = 137
        TabOrder = 12
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
      end
    end
    object TabSheet2: TTabSheet
      Caption = #1044#1086#1087#1086#1083#1085#1077#1085#1080#1077
      ImageIndex = 1
      object Label1: TLabel
        Left = 248
        Top = 320
        Width = 149
        Height = 13
        Caption = #1042#1074#1077#1076#1080#1090#1077' '#1085#1072#1079#1074#1072#1085#1080#1077' '#1088#1077#1089#1090#1086#1088#1072#1085#1072
      end
      object Label2: TLabel
        Left = 248
        Top = 360
        Width = 131
        Height = 13
        Caption = #1042#1074#1077#1076#1080#1090#1077' '#1072#1076#1088#1077#1089' '#1088#1077#1089#1090#1086#1088#1072#1085#1072
      end
      object DBGrid2: TDBGrid
        Left = 24
        Top = 32
        Width = 601
        Height = 265
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
      end
      object Edit1: TEdit
        Left = 400
        Top = 312
        Width = 113
        Height = 21
        TabOrder = 1
        Text = 'Edit1'
      end
      object Edit2: TEdit
        Left = 400
        Top = 352
        Width = 217
        Height = 21
        TabOrder = 2
        Text = 'Edit1'
      end
      object ind_price: TButton
        Left = 32
        Top = 312
        Width = 209
        Height = 25
        Caption = #1054#1090#1089#1086#1088#1090#1080#1088#1086#1074#1072#1090#1100' '#1079#1072#1087#1080#1089#1080' '#1087#1086' '#1094#1077#1085#1077
        TabOrder = 3
        OnClick = ind_priceClick
      end
      object ind_name: TButton
        Left = 32
        Top = 352
        Width = 209
        Height = 25
        Caption = #1054#1090#1089#1086#1088#1090#1080#1088#1086#1074#1072#1090#1100' '#1079#1072#1087#1080#1089#1080' '#1087#1086' '#1085#1072#1079#1074#1072#1085#1080#1102' '
        TabOrder = 4
      end
      object Button5: TButton
        Left = 520
        Top = 312
        Width = 97
        Height = 25
        Caption = #1053#1072#1081#1090#1080
        TabOrder = 5
      end
    end
  end
end
