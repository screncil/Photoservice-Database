object Form1: TForm1
  Left = 199
  Top = 148
  Width = 1044
  Height = 641
  Caption = #1060#1086#1090#1086#1089#1077#1088#1074#1110#1089
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Tb: TStringGrid
    Left = 0
    Top = 16
    Width = 945
    Height = 529
    ColCount = 6
    RowCount = 21
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goTabs, goAlwaysShowEditor]
    TabOrder = 0
    ColWidths = (
      26
      168
      178
      216
      154
      173)
  end
  object MainMenu1: TMainMenu
    Left = 968
    Top = 512
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Caption = #1047#1072#1087#1080#1089#1072#1090#1080
        OnClick = N2Click
      end
      object N3: TMenuItem
        Caption = #1055#1088#1086#1095#1080#1090#1072#1090#1080
        OnClick = N3Click
      end
      object N4: TMenuItem
        Caption = #1042#1080#1093#1110#1076
        OnClick = N4Click
      end
    end
    object N5: TMenuItem
      Caption = #1055#1086#1096#1091#1082
      object N6: TMenuItem
        Caption = #1047#1072' '#1087#1088#1110#1079#1074#1080#1097#1077#1084' '#1082#1083#1110#1108#1085#1090#1072
        OnClick = N6Click
      end
    end
    object N7: TMenuItem
      Caption = #1057#1086#1088#1090#1091#1074#1072#1085#1085#1103
      object N8: TMenuItem
        Caption = #1059#1087#1086#1088#1103#1076#1082#1091#1074#1072#1085#1085#1103' '#1079#1072' '#1094#1110#1085#1086#1102' '#1079#1072' '#1089#1087#1072#1076#1072#1085#1085#1103#1084
        OnClick = N8Click
      end
      object N9: TMenuItem
        Caption = #1059#1087#1086#1088#1103#1076#1082#1091#1074#1072#1085#1085#1103' '#1079#1072' '#1094#1110#1085#1086#1102' '#1079#1072' '#1079#1088#1086#1089#1090#1072#1085#1085#1103#1084
        OnClick = N9Click
      end
    end
    object N10: TMenuItem
      Caption = #1056#1086#1079#1088#1072#1093#1091#1085#1086#1082
      object N11: TMenuItem
        Caption = #1047#1072#1075#1072#1083#1100#1085#1072' '#1074#1072#1088#1090#1110#1089#1090#1100' '#1082#1086#1078#1085#1086#1111' '#1087#1086#1089#1083#1091#1075#1080
        OnClick = N11Click
      end
    end
    object N12: TMenuItem
      Caption = #1055#1088#1086' '#1087#1088#1086#1075#1088#1072#1084#1091
      OnClick = N12Click
    end
  end
end
