object frmExpertOptions: TfrmExpertOptions
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Expert Options'
  ClientHeight = 187
  ClientWidth = 384
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 16
  object pnlFudge: TPanel
    Left = 0
    Top = 0
    Width = 384
    Height = 187
    Align = alClient
    BevelOuter = bvNone
    TabOrder = 0
    ExplicitLeft = 104
    ExplicitTop = 112
    ExplicitWidth = 185
    ExplicitHeight = 41
    DesignSize = (
      384
      187)
    object lblVCLTheme: TLabel
      Left = 8
      Top = 11
      Width = 66
      Height = 16
      Caption = '&VCL Theme'
    end
    object lblNoInfoColour: TLabel
      Left = 8
      Top = 41
      Width = 82
      Height = 16
      Caption = '&No Info Colour'
    end
    object lblOKColour: TLabel
      Left = 8
      Top = 69
      Width = 69
      Height = 16
      Caption = '&Okay Colour'
    end
    object lblInvalidPathColour: TLabel
      Left = 8
      Top = 97
      Width = 107
      Height = 16
      Caption = '&Invalid Path Colour'
    end
    object lblDuplicateColour: TLabel
      Left = 8
      Top = 125
      Width = 93
      Height = 16
      Caption = '&Duplicate Colour'
    end
    object cbxVCLTheme: TComboBox
      Left = 136
      Top = 8
      Width = 240
      Height = 24
      Style = csDropDownList
      Anchors = [akLeft, akTop, akRight]
      TabOrder = 0
    end
    object btnOK: TBitBtn
      Left = 220
      Top = 154
      Width = 75
      Height = 25
      Anchors = [akRight, akBottom]
      Kind = bkOK
      NumGlyphs = 2
      TabOrder = 5
      ExplicitTop = 200
    end
    object btnCancel: TBitBtn
      Left = 301
      Top = 154
      Width = 75
      Height = 25
      Anchors = [akRight, akBottom]
      Kind = bkCancel
      NumGlyphs = 2
      TabOrder = 6
      ExplicitTop = 200
    end
    object cbxNoInfoColour: TColorBox
      Left = 136
      Top = 38
      Width = 240
      Height = 22
      Style = [cbStandardColors, cbExtendedColors, cbSystemColors, cbCustomColor, cbPrettyNames, cbCustomColors]
      Anchors = [akLeft, akTop, akRight]
      TabOrder = 1
    end
    object cbxOkayColour: TColorBox
      Left = 136
      Top = 66
      Width = 240
      Height = 22
      Style = [cbStandardColors, cbExtendedColors, cbSystemColors, cbCustomColor, cbPrettyNames, cbCustomColors]
      Anchors = [akLeft, akTop, akRight]
      TabOrder = 2
    end
    object cbxInvalidPathColour: TColorBox
      Left = 136
      Top = 94
      Width = 240
      Height = 22
      Style = [cbStandardColors, cbExtendedColors, cbSystemColors, cbCustomColor, cbPrettyNames, cbCustomColors]
      Anchors = [akLeft, akTop, akRight]
      TabOrder = 3
    end
    object cbxDuplicateColour: TColorBox
      Left = 136
      Top = 122
      Width = 240
      Height = 22
      Style = [cbStandardColors, cbExtendedColors, cbSystemColors, cbCustomColor, cbPrettyNames, cbCustomColors]
      Anchors = [akLeft, akTop, akRight]
      TabOrder = 4
    end
  end
end
